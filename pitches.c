#include <xc.h>
#include "pitches.h"

/*
 * this function sets the registers for generating a suitable
 * PWM signal for the given pitch.
 * 
 * The settings are calculated with https://www.micro-examples.com/public/microex-navig/doc/097-pwm-calculator
 * 
 * The lowest frequency a PIC16 running at 1MHZ can create  is 61Hz. So notes
 * below B1 are not implemented
 */

void setup_pitch(uint16_t pitch) {
    uint16_t duty_cycle_reg_val;
    switch(pitch) {
        case NOTE_B0:
            PR2 = 129;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_C1:
            PR2 = 129;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_CS1:
            PR2 = 129;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_D1:
            PR2 = 129;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_DS1:
            PR2 = 129;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_E1:
            PR2 = 97;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_F1:
            PR2 = 97;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_FS1:
            PR2 = 97;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_G1:
            PR2 = 97;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_GS1:
            PR2 = 77;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_A1:
            PR2 = 77;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_AS1:
            PR2 = 77;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_B1:
            PR2 = 64;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_C2:
            PR2 = 64;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_CS2:
            PR2 = 64;
            T2CON = T2CON & 0b11111100 | (3 << _T2CON_T2CKPS_POSN); // prescaler 64
            break;

        case NOTE_D2:
            PR2 = 222;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_DS2:
            PR2 = 222;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_E2:
            PR2 = 194;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_F2:
            PR2 = 194;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_FS2:
            PR2 = 173;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_G2:
            PR2 = 173;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_GS2:
            PR2 = 155;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_A2:
            PR2 = 141;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_AS2:
            PR2 = 141;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_B2:
            PR2 = 129;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_C3:
            PR2 = 119;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_CS3:
            PR2 = 119;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

//        case NOTE_DB3:
//            PR2 = 119;
//            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
//            break;

        case NOTE_D3:
            PR2 = 111;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_DS3:
            PR2 = 103;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

//        case NOTE_EB3:
//            PR2 = 103;
//            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
//            break;

        case NOTE_E3:
            PR2 = 97;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_F3:
            PR2 = 91;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_FS3:
            PR2 = 86;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_G3:
            PR2 = 81;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_GS3:
            PR2 = 77;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_A3:
            PR2 = 70;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_AS3:
            PR2 = 67;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_B3:
            PR2 = 64;
            T2CON = T2CON & 0b11111100 | (2 << _T2CON_T2CKPS_POSN); // prescaler 16
            break;

        case NOTE_C4:
            PR2 = 239;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_CS4:
            PR2 = 230;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_D4:
            PR2 = 215;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_DS4:
            PR2 = 201;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_E4:
            PR2 = 188;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_F4:
            PR2 = 183;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_FS4:
            PR2 = 168;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_G4:
            PR2 = 159;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_GS4:
            PR2 = 151;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_A4:
            PR2 = 141;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_AS4:
            PR2 = 135;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_B4:
            PR2 = 127;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_C5:
            PR2 = 119;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_CS5:
            PR2 = 113;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_D5:
            PR2 = 107;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_DS5:
            PR2 = 100;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_E5:
            PR2 = 95;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_F5:
            PR2 = 90;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_FS5:
            PR2 = 83;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_G5:
            PR2 = 79;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_GS5:
            PR2 = 74;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_A5:
            PR2 = 70;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_AS5:
            PR2 = 66;
            T2CON = T2CON & 0b11111100 | (1 << _T2CON_T2CKPS_POSN); // prescaler 4
            break;

        case NOTE_B5:
            PR2 = 254;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_C6:
            PR2 = 239;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_CS6:
            PR2 = 226;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_D6:
            PR2 = 213;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_DS6:
            PR2 = 201;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_E6:
            PR2 = 190;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_F6:
            PR2 = 179;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_FS6:
            PR2 = 168;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_G6:
            PR2 = 159;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_GS6:
            PR2 = 150;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_A6:
            PR2 = 141;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_AS6:
            PR2 = 133;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_B6:
            PR2 = 126;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_C7:
            PR2 = 119;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_CS7:
            PR2 = 112;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_D7:
            PR2 = 106;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_DS7:
            PR2 = 100;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_E7:
            PR2 = 94;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_F7:
            PR2 = 89;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_FS7:
            PR2 = 83;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_G7:
            PR2 = 79;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_GS7:
            PR2 = 74;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_A7:
            PR2 = 70;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_AS7:
            PR2 = 66;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_B7:
            PR2 = 62;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_C8:
            PR2 = 59;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_CS8:
            PR2 = 55;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_D8:
            PR2 = 52;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;

        case NOTE_DS8:
            PR2 = 49;
            T2CON = T2CON & 0b11111100 | (0 << _T2CON_T2CKPS_POSN); // prescaler 1
            break;
        
        case REST:
        default:
        
    }
    
    if (pitch == REST) {
        // turn of the PWM generation
        CCP1CON &= 0b01111111;
    } else {
        // turn on the PWM generation
        CCP1CON |= 0b10000000;
    }
    
    // set the duty cycle to 50%
    // CCPRxH:CCPRxL = Ratio * 4 * (PR2+1)
    duty_cycle_reg_val = (uint16_t)(0.5*4*(PR2+1));
    CCPR1L = duty_cycle_reg_val & 255;
    CCPR1H = duty_cycle_reg_val >> 8;
    
}
