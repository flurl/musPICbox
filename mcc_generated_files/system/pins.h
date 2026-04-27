/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2026] Microchip Technology Inc. and its subsidiaries.

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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_OD                   ODCONAbits.ODCA0
#define IO_RA0_ANS                  ANSELAbits.ANSA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_RA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
// get/set IO_RA2 aliases
#define PIN_BTN_TRIS                 TRISAbits.TRISA2
#define PIN_BTN_LAT                  LATAbits.LATA2
#define PIN_BTN_PORT                 PORTAbits.RA2
#define PIN_BTN_WPU                  WPUAbits.WPUA2
#define PIN_BTN_OD                   ODCONAbits.ODCA2
#define PIN_BTN_ANS                  ANSELAbits.ANSA2
#define PIN_BTN_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define PIN_BTN_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define PIN_BTN_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define PIN_BTN_GetValue()           PORTAbits.RA2
#define PIN_BTN_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define PIN_BTN_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define PIN_BTN_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define PIN_BTN_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define PIN_BTN_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define PIN_BTN_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define PIN_BTN_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define PIN_BTN_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RC0 aliases
#define LED_BLUE_TRIS                 TRISCbits.TRISC0
#define LED_BLUE_LAT                  LATCbits.LATC0
#define LED_BLUE_PORT                 PORTCbits.RC0
#define LED_BLUE_WPU                  WPUCbits.WPUC0
#define LED_BLUE_OD                   ODCONCbits.ODCC0
#define LED_BLUE_ANS                  ANSELCbits.ANSC0
#define LED_BLUE_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED_BLUE_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED_BLUE_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED_BLUE_GetValue()           PORTCbits.RC0
#define LED_BLUE_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED_BLUE_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED_BLUE_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LED_BLUE_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LED_BLUE_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define LED_BLUE_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define LED_BLUE_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define LED_BLUE_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define LED_GREEN_TRIS                 TRISCbits.TRISC1
#define LED_GREEN_LAT                  LATCbits.LATC1
#define LED_GREEN_PORT                 PORTCbits.RC1
#define LED_GREEN_WPU                  WPUCbits.WPUC1
#define LED_GREEN_OD                   ODCONCbits.ODCC1
#define LED_GREEN_ANS                  ANSELCbits.ANSC1
#define LED_GREEN_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED_GREEN_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED_GREEN_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED_GREEN_GetValue()           PORTCbits.RC1
#define LED_GREEN_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED_GREEN_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED_GREEN_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LED_GREEN_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LED_GREEN_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LED_GREEN_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LED_GREEN_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define LED_GREEN_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC2 aliases
#define LED_RED_TRIS                 TRISCbits.TRISC2
#define LED_RED_LAT                  LATCbits.LATC2
#define LED_RED_PORT                 PORTCbits.RC2
#define LED_RED_WPU                  WPUCbits.WPUC2
#define LED_RED_OD                   ODCONCbits.ODCC2
#define LED_RED_ANS                  ANSELCbits.ANSC2
#define LED_RED_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED_RED_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED_RED_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED_RED_GetValue()           PORTCbits.RC2
#define LED_RED_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED_RED_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED_RED_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LED_RED_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LED_RED_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LED_RED_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LED_RED_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED_RED_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODCC3
#define IO_RC3_ANS                  ANSELCbits.ANSC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/