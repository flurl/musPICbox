 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
? [2026] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include <stdlib.h>

#include "mcc_generated_files/system/system.h"
#include "random.h"
#include "melodies.h"

// the melody that should be played when the button is pressed at startup
#define SIGNATURE_MELODY 0


inline void delay(uint32_t ms) {
    for (uint32_t i=1; i<=ms; i++) {
        __delay_ms(1);
    }
}


void seed_RNG() {
    uint32_t seed = 0;
    ADC_Enable();
    for (uint8_t i=0; i<32; i++) {
        ADC_ConversionStart();
        while(!ADC_IsConversionDone());
        seed |= ((ADC_ConversionResultGet() & 0x01) << i);
    }
    ADC_Disable();
    rng_seed(seed);
}


pitch_t get_max_pitch(const struct Note *notes, uint16_t size) {
    pitch_t max = 0;
    for (uint16_t i=0; i<size; i++) {
        if (notes[i].pitch > max) {
            max = notes[i].pitch;
        }
    }
    return max;
}

pitch_t get_min_pitch(const struct Note *notes, uint16_t size) {
    pitch_t min = 0xFFFF;
    for (uint16_t i=0; i<size; i++) {
        pitch_t p = notes[i].pitch;
        if (p < min && p != REST) {
            min = notes[i].pitch;
        }
    }
    return min;
}

void tone(pitch_t tone) {
    
    setup_pitch(tone);
    
}

void play_melody(const struct Melody *melody) {
    size_t length = melody->length;  
    pitch_t max = get_max_pitch(melody->notes, length);
    pitch_t min = get_min_pitch(melody->notes, length);
    pitch_t low_threshold = (max-min)/3 + min;
    pitch_t high_threshold = ((max-min)/3)*2 + min;
    
    for (int current_note = 0; current_note < length; current_note++) {
        if (PIN_BTN_GetValue() == LOW) {
            delay(1000);
            return;
        }
        struct Note n = melody->notes[current_note];
        tone(n.pitch);
        if (n.pitch > 0 && n.pitch < low_threshold) {LED_BLUE_SetLow();}
        else if (n.pitch >= low_threshold && n.pitch < high_threshold) {LED_GREEN_SetLow();}
        else if (n.pitch >= high_threshold) {LED_RED_SetLow();}
        delay((uint32_t)((melody->speed*n.value)>>5));
        LED_RED_SetHigh();
        LED_GREEN_SetHigh();
        LED_BLUE_SetHigh();
        tone(REST);
        delay(10);
    }
}


/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    
    seed_RNG();
    
    uint8_t selected_melody = SIGNATURE_MELODY;
    // if the button is not pressed at boot, randomly select the starting melody
    if (PIN_BTN_GetValue() == HIGH) {
        selected_melody = (uint8_t)rng_uniform(NUM_MELODIES);
    }
    
    tone(NOTE_A4);
    LED_BLUE_SetLow();
    __delay_ms(300);
    LED_BLUE_SetHigh();
    tone(NOTE_A5);
    LED_GREEN_SetLow();
    __delay_ms(300);
    LED_GREEN_SetHigh();
    tone(NOTE_A6);
    LED_RED_SetLow();
    __delay_ms(300);
    LED_RED_SetHigh();
   
    tone(REST);
    delay(500);    
    
    while(1) {
        play_melody(&(melodies[selected_melody]));
        delay(1000);    
        selected_melody = (uint8_t)rng_uniform(NUM_MELODIES);
    }
}