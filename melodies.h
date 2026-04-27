/* 
 * File:   melodies.h
 * Author: flurl
 *
 * Created on September 12, 2025, 6:17 AM
 */

#include "pitches.h"

#ifndef MELODIES_H
#define	MELODIES_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#define WHOLE           32
#define HALF            16
#define QUARTER         8
#define EIGHT           4
#define SIXTEEN         2
#define DOTTED_WHOLE    WHOLE+HALF
#define DOTTED_HALF     HALF+QUARTER
#define DOTTED_QUARTER  QUARTER+EIGHT
#define DOTTED_EIGHT    EIGHT+SIXTEEN
    

//#define INTERNATIONALE
//#define TETRIS
//#define PINK_PANTHER
//#define STAR_WARS
//#define THE_LION_SLEEPS_TONIGHT
//#define THE_SIMPSONS
//#define SUPER_MARIO
//#define PACMAN
//#define HAPPY_BIRTHDAY
//#define AMELIE
#define SILENT_NIGHT
#define MERRY_CHRISTMAS
#define JINGLE_BELLS
#define SANTA_CLAUS
#define IHR_KINDERLEIN_KOMMET
#define O_TANNENBAUM
    

struct Note {
    pitch_t pitch;
    uint16_t value;
};

// Structure to hold melody information
struct Melody {
    const struct Note *notes;
    uint16_t length;
    uint32_t speed;  // defines the duration in ms a whole note takes => lower value means faster music
};


#ifdef INTERNATIONALE
// 0- internationale
// extracted from midi
const struct Note internationale_melody[] = {
{NOTE_DS4, 12}, {NOTE_GS4, 4}, {NOTE_G4, 12}, {NOTE_AS4, 12},
{NOTE_GS4, 12}, {NOTE_DS4, 12}, {NOTE_C4, 12}, {NOTE_F4, 3},
{NOTE_CS4, 6}, {NOTE_F4, 12}, {NOTE_AS4, 4}, {NOTE_GS4, 12},
{NOTE_G4, 12}, {NOTE_F4, 12}, {NOTE_DS4, 12}, {NOTE_CS4, 12},
{NOTE_C4, 2}, {NOTE_DS4, 12}, {NOTE_GS4, 4}, {NOTE_G4, 12},
{NOTE_AS4, 12}, {NOTE_GS4, 12}, {NOTE_DS4, 12}, {NOTE_C4, 12},
{NOTE_F4, 3}, {NOTE_CS4, 6}, {NOTE_AS4, 12}, {NOTE_GS4, 12},
{NOTE_G4, 4}, {NOTE_AS4, 12}, {NOTE_CS5, 4}, {NOTE_G4, 12},
{NOTE_GS4, 2}, {NOTE_C5, 12}, {NOTE_AS4, 12}, {NOTE_G4, 4},
{NOTE_G4, 12}, {NOTE_F4, 12}, {NOTE_G4, 12}, {NOTE_GS4, 12},
{NOTE_F4, 12}, {NOTE_G4, 3}, {NOTE_DS4, 12}, {NOTE_D4, 12},
{NOTE_DS4, 12}, {NOTE_F4, 12}, {NOTE_F4, 4}, {NOTE_F4, 12},
{NOTE_AS4, 4}, {NOTE_GS4, 12}, {NOTE_G4, 2}, {NOTE_AS4, 12},
{NOTE_AS4, 4}, {NOTE_G4, 12}, {NOTE_DS4, 12}, {NOTE_DS4, 12},
{NOTE_D4, 12}, {NOTE_DS4, 12}, {NOTE_C5, 3}, {NOTE_F4, 12},
{NOTE_F4, 12}, {NOTE_G4, 12}, {NOTE_GS4, 12}, {NOTE_G4, 6},
{NOTE_AS4, 6}, {NOTE_GS4, 6}, {NOTE_F4, 6}, {NOTE_DS4, 2},
{NOTE_C5, 8}, {NOTE_AS4, 24}, {NOTE_GS4, 3}, {NOTE_DS4, 4},
{NOTE_F4, 12}, {NOTE_F4, 3}, {NOTE_CS4, 6}, {NOTE_AS4, 8},
{NOTE_GS4, 24}, {NOTE_G4, 3}, {NOTE_F4, 4}, {NOTE_DS4, 12},
{NOTE_DS4, 2}, {NOTE_DS4, 6}, {NOTE_C5, 4}, {NOTE_C5, 12},
{NOTE_AS4, 12}, {NOTE_AS4, 12}, {NOTE_DS4, 6}, {NOTE_GS4, 6},
{NOTE_GS4, 6}, {NOTE_G4, 4}, {NOTE_G4, 12}, {NOTE_F4, 4},
{NOTE_E4, 12}, {NOTE_F4, 6}, {NOTE_AS4, 6}, {NOTE_AS4, 2},
{NOTE_C5, 8}, {NOTE_AS4, 24}, {NOTE_GS4, 3}, {NOTE_DS4, 4},
{NOTE_F4, 12}, {NOTE_F4, 3}, {NOTE_CS4, 6}, {NOTE_AS4, 8},
{NOTE_GS4, 24}, {NOTE_G4, 3}, {NOTE_F4, 4}, {NOTE_DS4, 12},
{NOTE_C5, 1}, {NOTE_C5, 12}, {NOTE_DS5, 4}, {NOTE_DS5, 12},
{NOTE_CS5, 12}, {NOTE_CS5, 12}, {NOTE_C5, 6}, {NOTE_AS4, 12},
{NOTE_A4, 12}, {NOTE_AS4, 12}, {NOTE_C5, 12}, {NOTE_CS5, 6},
{NOTE_CS5, 12}, {NOTE_C5, 4}, {NOTE_C5, 12}, {NOTE_AS4, 4},
{NOTE_GS4, 12}, {NOTE_GS4, 2},
};
#endif


#ifdef TETRIS
// 1- tetris
// https://github.com/hibit-dev/buzzer/blob/master/src/games/tetris/tetris.ino
const struct Note tetris_melody[] = {
    {NOTE_E5, 4}, {NOTE_B4, 8}, {NOTE_C5, 8}, {NOTE_D5, 4}, {NOTE_C5, 8}, {NOTE_B4, 8},
    {NOTE_A4, 4}, {NOTE_A4, 8}, {NOTE_C5, 8}, {NOTE_E5, 4}, {NOTE_D5, 8}, {NOTE_C5, 8},
    {NOTE_B4, 4}, {NOTE_C5, 8}, {NOTE_D5, 4}, {NOTE_E5, 4},
    {NOTE_C5, 4}, {NOTE_A4, 4}, {NOTE_A4, 8}, {NOTE_A4, 4}, {NOTE_B4, 8}, {NOTE_C5, 8},
    {NOTE_D5, 4}, {NOTE_F5, 8}, {NOTE_A5, 4}, {NOTE_G5, 8}, {NOTE_F5, 8},
    {NOTE_E5, 4}, {NOTE_C5, 8}, {NOTE_E5, 4}, {NOTE_D5, 8}, {NOTE_C5, 8},
    {NOTE_B4, 4}, {NOTE_B4, 8}, {NOTE_C5, 8}, {NOTE_D5, 4}, {NOTE_E5, 4},
    {NOTE_C5, 4}, {NOTE_A4, 4}, {NOTE_A4, 4}, {REST, 4},

    {NOTE_E5, 4}, {NOTE_B4, 8}, {NOTE_C5, 8}, {NOTE_D5, 4}, {NOTE_C5, 8}, {NOTE_B4, 8},
    {NOTE_A4, 4}, {NOTE_A4, 8}, {NOTE_C5, 8}, {NOTE_E5, 4}, {NOTE_D5, 8}, {NOTE_C5, 8},
    {NOTE_B4, 4}, {NOTE_C5, 8}, {NOTE_D5, 4}, {NOTE_E5, 4},
    {NOTE_C5, 4}, {NOTE_A4, 4}, {NOTE_A4, 8}, {NOTE_A4, 4}, {NOTE_B4, 8}, {NOTE_C5, 8},
    {NOTE_D5, 4}, {NOTE_F5, 8}, {NOTE_A5, 4}, {NOTE_G5, 8}, {NOTE_F5, 8},
    {NOTE_E5, 4}, {NOTE_C5, 8}, {NOTE_E5, 4}, {NOTE_D5, 8}, {NOTE_C5, 8},
    {NOTE_B4, 4}, {NOTE_B4, 8}, {NOTE_C5, 8}, {NOTE_D5, 4}, {NOTE_E5, 4},
    {NOTE_C5, 4}, {NOTE_A4, 4}, {NOTE_A4, 4}, {REST, 4},

    {NOTE_E5, 2}, {NOTE_C5, 2},
    {NOTE_D5, 2}, {NOTE_B4, 2},
    {NOTE_C5, 2}, {NOTE_A4, 2},
    {NOTE_GS4, 2}, {NOTE_B4, 4}, {REST, 8},
    {NOTE_E5, 2}, {NOTE_C5, 2},
    {NOTE_D5, 2}, {NOTE_B4, 2},
    {NOTE_C5, 4}, {NOTE_E5, 4}, {NOTE_A5, 2},
    {NOTE_GS5, 2}
};   
#endif


#ifdef PINK_PANTHER
// 2- pink panther
// https://github.com/hibit-dev/buzzer/blob/master/src/movies/pink_panther/pink_panther.ino
const struct Note pink_panther_melody[] = {
    {NOTE_DS4, 8}, 
    {NOTE_E4, 4}, {REST, 8}, {NOTE_FS4, 8}, {NOTE_G4, 4}, {REST, 8}, {NOTE_DS4, 8}, 
    {NOTE_E4, 8}, {NOTE_FS4, 8}, {NOTE_G4, 8}, {NOTE_C5, 8}, {NOTE_B4, 8}, {NOTE_E4, 8}, {NOTE_G4, 8}, {NOTE_B4, 8}, 
    {NOTE_AS4, 2}, {NOTE_A4, 16}, {NOTE_G4, 16}, {NOTE_E4, 16}, {NOTE_D4, 16}, 
    {NOTE_E4, 2}, {REST, 4}, {REST, 8}, {NOTE_DS4, 4}, 

    {NOTE_E4, 4}, {REST, 8}, {NOTE_FS4, 8}, {NOTE_G4, 4}, {REST, 8}, {NOTE_DS4, 8}, 
    {NOTE_E4, 8}, {NOTE_FS4, 8}, {NOTE_G4, 8}, {NOTE_C5, 8}, {NOTE_B4, 8}, {NOTE_G4, 8}, {NOTE_B4, 8}, {NOTE_E5, 8}, 
    {NOTE_DS5, 1}, 
    {NOTE_D5, 2}, {REST, 4}, {REST, 8}, {NOTE_DS4, 8}, 
    {NOTE_E4, 4}, {REST, 8}, {NOTE_FS4, 8}, {NOTE_G4, 4}, {REST, 8}, {NOTE_DS4, 8}, 
    {NOTE_E4, 8}, {NOTE_FS4, 8}, {NOTE_G4, 8}, {NOTE_C5, 8}, {NOTE_B4, 8}, {NOTE_E4, 8}, {NOTE_G4, 8}, {NOTE_B4, 8}, 

    {NOTE_AS4, 2}, {NOTE_A4, 16}, {NOTE_G4, 16}, {NOTE_E4, 16}, {NOTE_D4, 16}, 
    {NOTE_E4, 4}, {REST, 4}, 
    {REST, 4}, {NOTE_E5, 8}, {NOTE_D5, 8}, {NOTE_B4, 8}, {NOTE_A4, 8}, {NOTE_G4, 8}, {NOTE_E4, 8}, 
    {NOTE_AS4, 16}, {NOTE_A4, 8}, {NOTE_AS4, 16}, {NOTE_A4, 8}, {NOTE_AS4, 16}, {NOTE_A4, 8}, {NOTE_AS4, 16}, {NOTE_A4, 8}, 
    {NOTE_G4, 16}, {NOTE_E4, 16}, {NOTE_D4, 16}, {NOTE_E4, 16}, {NOTE_E4, 16}, {NOTE_E4, 2},
    {REST, 2}, {REST, 4}, {REST, 8}, 
};
#endif


#ifdef STAR_WARS
// 3 - star wars
// https://github.com/hibit-dev/buzzer/blob/master/src/movies/star_wars/star_wars.ino
const struct Note star_wars_melody[] = {
    {NOTE_AS4, 8}, {NOTE_AS4, 8}, {NOTE_AS4, 8},
    {NOTE_F5, 2}, {NOTE_C6, 2},
    {NOTE_AS5, 8}, {NOTE_A5, 8}, {NOTE_G5, 8}, {NOTE_F6, 2}, {NOTE_C6, 4},
    {NOTE_AS5, 8}, {NOTE_A5, 8}, {NOTE_G5, 8}, {NOTE_F6, 2}, {NOTE_C6, 4},
    {NOTE_AS5, 8}, {NOTE_A5, 8}, {NOTE_AS5, 8}, {NOTE_G5, 2}, {NOTE_C5, 8}, {NOTE_C5, 8}, {NOTE_C5, 8},
    {NOTE_F5, 2}, {NOTE_C6, 2},
    {NOTE_AS5, 8}, {NOTE_A5, 8}, {NOTE_G5, 8}, {NOTE_F6, 2}, {NOTE_C6, 4},

    {NOTE_AS5, 8}, {NOTE_A5, 8}, {NOTE_G5, 8}, {NOTE_F6, 2}, {NOTE_C6, 4},
    {NOTE_AS5, 8}, {NOTE_A5, 8}, {NOTE_AS5, 8}, {NOTE_G5, 2}, {NOTE_C5, 8}, {NOTE_C5, 16},
    {NOTE_D5, 4}, {NOTE_D5, 8}, {NOTE_AS5, 8}, {NOTE_A5, 8}, {NOTE_G5, 8}, {NOTE_F5, 8},
    {NOTE_F5, 8}, {NOTE_G5, 8}, {NOTE_A5, 8}, {NOTE_G5, 4}, {NOTE_D5, 8}, {NOTE_E5, 4}, {NOTE_C5, 8}, {NOTE_C5, 16},
    {NOTE_D5, 4}, {NOTE_D5, 8}, {NOTE_AS5, 8}, {NOTE_A5, 8}, {NOTE_G5, 8}, {NOTE_F5, 8},

    {NOTE_C6, 8}, {NOTE_G5, 16}, {NOTE_G5, 2}, {REST, 8}, {NOTE_C5, 8},
    {NOTE_D5, 4}, {NOTE_D5, 8}, {NOTE_AS5, 8}, {NOTE_A5, 8}, {NOTE_G5, 8}, {NOTE_F5, 8},
    {NOTE_F5, 8}, {NOTE_G5, 8}, {NOTE_A5, 8}, {NOTE_G5, 4}, {NOTE_D5, 8}, {NOTE_E5, 4}, {NOTE_C6, 8}, {NOTE_C6, 16},
    {NOTE_F6, 4}, {NOTE_DS6, 8}, {NOTE_CS6, 4}, {NOTE_C6, 8}, {NOTE_AS5, 4}, {NOTE_GS5, 8}, {NOTE_G5, 4}, {NOTE_F5, 8},
    {NOTE_C6, 1}
};
#endif


#ifdef THE_LION_SLEEPS_TONIGHT
// 4 -the lion sleeps tonight
// https://github.com/hibit-dev/buzzer/blob/master/src/movies/the_lion_sleeps_tonight/the_lion_sleeps_tonight.ino
const struct Note the_lion_sleeps_tonight_melody[] = {
    {NOTE_F4, 4}, {NOTE_G4, 4}, {NOTE_A4, 8}, {NOTE_G4, 4}, {NOTE_A4, 8},
    {NOTE_AS4, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_F4, 4}, {NOTE_G4, 8},
    {NOTE_A4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4},
    {NOTE_C4, 1},
    
    {NOTE_F4, 4}, {NOTE_G4, 4}, {NOTE_A4, 8}, {NOTE_G4, 4}, {NOTE_A4, 8},
    {NOTE_AS4, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_F4, 4}, {NOTE_G4, 8},
    {NOTE_A4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4},
    {NOTE_C4, 2}, {REST, 8}, {NOTE_A4, 16},
    
    {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16},
    {NOTE_AS4, 8}, {NOTE_AS4, 16}, {NOTE_AS4, 8}, {NOTE_AS4, 16}, {NOTE_AS4, 8}, {NOTE_AS4, 16}, {NOTE_AS4, 8}, {NOTE_AS4, 16},
    {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16},
    {NOTE_G4, 8}, {NOTE_G4, 16}, {NOTE_G4, 8}, {NOTE_G4, 16}, {NOTE_G4, 8}, {NOTE_G4, 16}, {NOTE_G4, 8}, {NOTE_G4, 16},
    
    {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16},
    {NOTE_AS4, 8}, {NOTE_AS4, 16}, {NOTE_AS4, 8}, {NOTE_AS4, 16}, {NOTE_AS4, 8}, {NOTE_AS4, 16}, {NOTE_AS4, 8}, {NOTE_AS4, 16},
    {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16}, {NOTE_A4, 8}, {NOTE_A4, 16},
    {NOTE_G4, 8}, {NOTE_G4, 16}, {NOTE_G4, 8}, {NOTE_G4, 16}, {NOTE_G4, 8}, {NOTE_G4, 16}, {NOTE_G4, 8}, {NOTE_G4, 16},
    
    {NOTE_F4, 4}, {NOTE_G4, 4}, {NOTE_A4, 8}, {NOTE_G4, 4}, {NOTE_A4, 8},
    {NOTE_AS4, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_F4, 4}, {NOTE_G4, 8},
    {NOTE_A4, 4}, {NOTE_G4, 4}, {NOTE_F4, 4}, {NOTE_A4, 4},
    {NOTE_G4, 1},
    {NOTE_C5, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_A4, 4}, {NOTE_C5, 8},
    {NOTE_AS4, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_F4, 4}, {NOTE_G4, 8},
    {NOTE_A4, 4}, {NOTE_G4, 4}, {NOTE_F4, 4}, {NOTE_A4, 4},
    {NOTE_G4, 1},
    
    {NOTE_C5, 1},
    {NOTE_C5, 4}, {NOTE_AS4, 8}, {NOTE_C5, 8}, {NOTE_AS4, 2},
    {NOTE_A4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4},
    {NOTE_C4, 1},
    
    {REST, 4}, {NOTE_A4, 8}, {NOTE_G4, 8}, {NOTE_F4, 8}, {NOTE_E4, 8}, {NOTE_D4, 8}, {NOTE_C4, 8}, 
    {NOTE_D4, 1},
    {REST, 4}, {NOTE_A4, 8}, {NOTE_G4, 8}, {NOTE_F4, 8}, {NOTE_E4, 8}, {NOTE_D4, 8}, {NOTE_C4, 8}, 
    {NOTE_D4, 1},
    
    {NOTE_F4, 4}, {NOTE_G4, 4}, {NOTE_A4, 8}, {NOTE_G4, 4}, {NOTE_A4, 8},
    {NOTE_AS4, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_F4, 4}, {NOTE_G4, 8},
    {NOTE_A4, 4}, {NOTE_G4, 4}, {NOTE_F4, 4}, {NOTE_A4, 4},
    {NOTE_G4, 1},
    {NOTE_C5, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_A4, 4}, {NOTE_C5, 8},
    {NOTE_AS4, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_F4, 4}, {NOTE_G4, 8},
    {NOTE_A4, 4}, {NOTE_G4, 4}, {NOTE_F4, 4}, {NOTE_A4, 4},
    {NOTE_G4, 1},
    
    {NOTE_C5, 1},
    {NOTE_C5, 4}, {NOTE_AS4, 8}, {NOTE_C5, 8}, {NOTE_AS4, 2},
    {NOTE_A4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4},
    {NOTE_C4, 1},
    
    {REST, 4}, {NOTE_A4, 8}, {NOTE_G4, 8}, {NOTE_F4, 8}, {NOTE_E4, 8}, {NOTE_D4, 8}, {NOTE_C4, 8}, 
    {NOTE_D4, 1},
    {REST, 4}, {NOTE_A4, 8}, {NOTE_G4, 8}, {NOTE_F4, 8}, {NOTE_E4, 8}, {NOTE_D4, 8}, {NOTE_C4, 8}, 
    {NOTE_D4, 1},
    
    {NOTE_F4, 4}, {NOTE_G4, 4}, {NOTE_A4, 8}, {NOTE_G4, 4}, {NOTE_A4, 8},
    {NOTE_AS4, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_F4, 4}, {NOTE_G4, 8},
    {NOTE_A4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4},
    {NOTE_C4, 1}, 
    
    {NOTE_F4, 4}, {NOTE_G4, 4}, {NOTE_A4, 8}, {NOTE_G4, 4}, {NOTE_A4, 8},
    {NOTE_AS4, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_F4, 4}, {NOTE_G4, 8},
    {NOTE_A4, 4}, {NOTE_G4, 4}, {NOTE_F4, 4}, {NOTE_A4, 4},
    {NOTE_G4, 1},
    {NOTE_C5, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_A4, 4}, {NOTE_C5, 8},
    {NOTE_AS4, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_F4, 4}, {NOTE_G4, 8},
    {NOTE_A4, 4}, {NOTE_G4, 4}, {NOTE_F4, 4}, {NOTE_A4, 4},
    {NOTE_G4, 1},
    
    {NOTE_C5, 1},
    {NOTE_C5, 4}, {NOTE_AS4, 8}, {NOTE_C5, 8}, {NOTE_AS4, 2},
    {NOTE_A4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4},
    {NOTE_C4, 1},
    
    {REST, 4}, {NOTE_A4, 8}, {NOTE_G4, 8}, {NOTE_F4, 8}, {NOTE_E4, 8}, {NOTE_D4, 8}, {NOTE_C4, 8}, 
    {NOTE_D4, 1},
    {REST, 4}, {NOTE_A4, 8}, {NOTE_G4, 8}, {NOTE_F4, 8}, {NOTE_E4, 8}, {NOTE_D4, 8}, {NOTE_C4, 8}, 
    {NOTE_D4, 1},
    
    {NOTE_F4, 4}, {NOTE_G4, 4}, {NOTE_A4, 8}, {NOTE_G4, 4}, {NOTE_A4, 8},
    {NOTE_AS4, 4}, {NOTE_A4, 4}, {NOTE_G4, 8}, {NOTE_F4, 4}, {NOTE_G4, 8},
    {NOTE_A4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4}, {NOTE_C4, 8}, {NOTE_C4, 4},
    {NOTE_C4, 1}
};
#endif


#ifdef THE_SIMPSONS
// 5 - the simpsons
// https://github.com/hibit-dev/buzzer/blob/master/src/movies/the_simpsons/the_simpsons.ino
const struct Note the_simpsons_melody[] = {
    {NOTE_C4, 2}, {NOTE_E4, 4}, {NOTE_FS4, 4}, {REST, 32}, {NOTE_A4, 8},
    {NOTE_G4, 2}, {NOTE_E4, 4}, {NOTE_C4, 4}, {NOTE_A3, 8},
    {NOTE_FS3, 8}, {NOTE_FS3, 8}, {NOTE_FS3, 8}, {NOTE_G3, 4}, {REST, 2},
    {NOTE_FS3, 8}, {NOTE_FS3, 8}, {NOTE_FS3, 8}, {NOTE_G3, 4}, {NOTE_AS3, 2},
    {NOTE_B3, 2}, {REST, 2}
};
#endif


#ifdef SUPER_MARIO
// 6 - super mario
// https://github.com/hibit-dev/buzzer/blob/master/src/games/mario_bros/mario_bros.ino
const struct Note super_mario_melody[] = {
    {NOTE_E5, 8}, {NOTE_E5, 8}, {REST, 8}, {NOTE_E5, 8}, {REST, 8}, {NOTE_C5, 8}, {NOTE_E5, 8},
    {NOTE_G5, 4}, {REST, 4}, {NOTE_G4, 8}, {REST, 4}, 
    {NOTE_C5, 4}, {NOTE_G4, 8}, {REST, 4}, {NOTE_E4, 4},
    {NOTE_A4, 4}, {NOTE_B4, 4}, {NOTE_AS4, 8}, {NOTE_A4, 4},
    {NOTE_G4, 8}, {NOTE_E5, 8}, {NOTE_G5, 8}, {NOTE_A5, 4}, {NOTE_F5, 8}, {NOTE_G5, 8},
    {REST, 8}, {NOTE_E5, 4}, {NOTE_C5, 8}, {NOTE_D5, 8}, {NOTE_B4, 4},
    {NOTE_C5, 4}, {NOTE_G4, 8}, {REST, 4}, {NOTE_E4, 4},
    {NOTE_A4, 4}, {NOTE_B4, 4}, {NOTE_AS4, 8}, {NOTE_A4, 4},
    {NOTE_G4, 8}, {NOTE_E5, 8}, {NOTE_G5, 8}, {NOTE_A5, 4}, {NOTE_F5, 8}, {NOTE_G5, 8},
    {REST, 8}, {NOTE_E5, 4}, {NOTE_C5, 8}, {NOTE_D5, 8}, {NOTE_B4, 4},
    
    {REST, 4}, {NOTE_G5, 8}, {NOTE_FS5, 8}, {NOTE_F5, 8}, {NOTE_DS5, 4}, {NOTE_E5, 8},
    {REST, 8}, {NOTE_GS4, 8}, {NOTE_A4, 8}, {NOTE_C4, 8}, {REST, 8}, {NOTE_A4, 8}, {NOTE_C5, 8}, {NOTE_D5, 8},
    {REST, 4}, {NOTE_DS5, 4}, {REST, 8}, {NOTE_D5, 4},
    {NOTE_C5, 2}, {REST, 2},
    
    {REST, 4}, {NOTE_G5, 8}, {NOTE_FS5, 8}, {NOTE_F5, 8}, {NOTE_DS5, 4}, {NOTE_E5, 8},
    {REST, 8}, {NOTE_GS4, 8}, {NOTE_A4, 8}, {NOTE_C4, 8}, {REST, 8}, {NOTE_A4, 8}, {NOTE_C5, 8}, {NOTE_D5, 8},
    {REST, 4}, {NOTE_DS5, 4}, {REST, 8}, {NOTE_D5, 4},
    {NOTE_C5, 2}, {REST, 2},
    
    {NOTE_C5, 8}, {NOTE_C5, 4}, {NOTE_C5, 8}, {REST, 8}, {NOTE_C5, 8}, {NOTE_D5, 4},
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_A4, 8}, {NOTE_G4, 2},
    
    {NOTE_C5, 8}, {NOTE_C5, 4}, {NOTE_C5, 8}, {REST, 8}, {NOTE_C5, 8}, {NOTE_D5, 8}, {NOTE_E5, 8},
    {REST, 1}, 
    {NOTE_C5, 8}, {NOTE_C5, 4}, {NOTE_C5, 8}, {REST, 8}, {NOTE_C5, 8}, {NOTE_D5, 4},
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_A4, 8}, {NOTE_G4, 2},
    {NOTE_E5, 8}, {NOTE_E5, 8}, {REST, 8}, {NOTE_E5, 8}, {REST, 8}, {NOTE_C5, 8}, {NOTE_E5, 4},
    {NOTE_G5, 4}, {REST, 4}, {NOTE_G4, 4}, {REST, 4}, 
    {NOTE_C5, 4}, {NOTE_G4, 8}, {REST, 4}, {NOTE_E4, 4},
    
    {NOTE_A4, 4}, {NOTE_B4, 4}, {NOTE_AS4, 8}, {NOTE_A4, 4},
    {NOTE_G4, 8}, {NOTE_E5, 8}, {NOTE_G5, 8}, {NOTE_A5, 4}, {NOTE_F5, 8}, {NOTE_G5, 8},
    {REST, 8}, {NOTE_E5, 4}, {NOTE_C5, 8}, {NOTE_D5, 8}, {NOTE_B4, 4},
    
    {NOTE_C5, 4}, {NOTE_G4, 8}, {REST, 4}, {NOTE_E4, 4},
    {NOTE_A4, 4}, {NOTE_B4, 4}, {NOTE_AS4, 8}, {NOTE_A4, 4},
    {NOTE_G4, 8}, {NOTE_E5, 8}, {NOTE_G5, 8}, {NOTE_A5, 4}, {NOTE_F5, 8}, {NOTE_G5, 8},
    {REST, 8}, {NOTE_E5, 4}, {NOTE_C5, 8}, {NOTE_D5, 8}, {NOTE_B4, 4},
    
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_G4, 8}, {REST, 4}, {NOTE_GS4, 4},
    {NOTE_A4, 8}, {NOTE_F5, 4}, {NOTE_F5, 8}, {NOTE_A4, 2},
    {NOTE_D5, 8}, {NOTE_A5, 8}, {NOTE_A5, 8}, {NOTE_A5, 8}, {NOTE_G5, 8}, {NOTE_F5, 8},
    
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_A4, 8}, {NOTE_G4, 2},
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_G4, 8}, {REST, 4}, {NOTE_GS4, 4},
    {NOTE_A4, 8}, {NOTE_F5, 4}, {NOTE_F5, 8}, {NOTE_A4, 2},
    {NOTE_B4, 8}, {NOTE_F5, 4}, {NOTE_F5, 8}, {NOTE_F5, 8}, {NOTE_E5, 8}, {NOTE_D5, 8},
    {NOTE_C5, 8}, {NOTE_E4, 4}, {NOTE_E4, 8}, {NOTE_C4, 2},
    
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_G4, 8}, {REST, 4}, {NOTE_GS4, 4},
    {NOTE_A4, 8}, {NOTE_F5, 4}, {NOTE_F5, 8}, {NOTE_A4, 2},
    {NOTE_D5, 8}, {NOTE_A5, 8}, {NOTE_A5, 8}, {NOTE_A5, 8}, {NOTE_G5, 8}, {NOTE_F5, 8},
    
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_A4, 8}, {NOTE_G4, 2},
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_G4, 8}, {REST, 4}, {NOTE_GS4, 4},
    {NOTE_A4, 8}, {NOTE_F5, 4}, {NOTE_F5, 8}, {NOTE_A4, 2},
    {NOTE_B4, 8}, {NOTE_F5, 4}, {NOTE_F5, 8}, {NOTE_F5, 8}, {NOTE_E5, 8}, {NOTE_D5, 8},
    {NOTE_C5, 8}, {NOTE_E4, 4}, {NOTE_E4, 8}, {NOTE_C4, 2},
    {NOTE_C5, 8}, {NOTE_C5, 4}, {NOTE_C5, 8}, {REST, 8}, {NOTE_C5, 8}, {NOTE_D5, 8}, {NOTE_E5, 8},
    {REST, 1},
    
    {NOTE_C5, 8}, {NOTE_C5, 4}, {NOTE_C5, 8}, {REST, 8}, {NOTE_C5, 8}, {NOTE_D5, 4},
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_A4, 8}, {NOTE_G4, 2},
    {NOTE_E5, 8}, {NOTE_E5, 8}, {REST, 8}, {NOTE_E5, 8}, {REST, 8}, {NOTE_C5, 8}, {NOTE_E5, 4},
    {NOTE_G5, 4}, {REST, 4}, {NOTE_G4, 4}, {REST, 4}, 
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_G4, 8}, {REST, 4}, {NOTE_GS4, 4},
    {NOTE_A4, 8}, {NOTE_F5, 4}, {NOTE_F5, 8}, {NOTE_A4, 2},
    {NOTE_D5, 8}, {NOTE_A5, 8}, {NOTE_A5, 8}, {NOTE_A5, 8}, {NOTE_G5, 8}, {NOTE_F5, 8},
    
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_A4, 8}, {NOTE_G4, 2},
    {NOTE_E5, 8}, {NOTE_C5, 4}, {NOTE_G4, 8}, {REST, 4}, {NOTE_GS4, 4},
    {NOTE_A4, 8}, {NOTE_F5, 4}, {NOTE_F5, 8}, {NOTE_A4, 2},
    {NOTE_B4, 8}, {NOTE_F5, 4}, {NOTE_F5, 8}, {NOTE_F5, 8}, {NOTE_E5, 8}, {NOTE_D5, 8},
    {NOTE_C5, 8}, {NOTE_E4, 4}, {NOTE_E4, 8}, {NOTE_C4, 2},
    
    // Game over sound
    {NOTE_C5, 4}, {NOTE_G4, 4}, {NOTE_E4, 4},
    {NOTE_A4, 8}, {NOTE_B4, 8}, {NOTE_A4, 8}, {NOTE_GS4, 8}, {NOTE_AS4, 8}, {NOTE_GS4, 8},
    {NOTE_G4, 8}, {NOTE_D4, 8}, {NOTE_E4, 2}
};
#endif


#ifdef PACMAN
// 7 - pacman
// https://github.com/hibit-dev/buzzer/blob/master/src/games/pacman/pacman.ino
const struct Note pacman_melody[] = {
  {NOTE_B4, 16}, {NOTE_B5, 16}, {NOTE_FS5, 16}, {NOTE_DS5, 16},
  {NOTE_B5, 32}, {NOTE_FS5, 16}, {NOTE_DS5, 8}, {NOTE_C5, 16},
  {NOTE_C6, 16}, {NOTE_G6, 16}, {NOTE_E6, 16}, {NOTE_C6, 32}, {NOTE_G6, 16}, {NOTE_E6, 8},
  {NOTE_B4, 16}, {NOTE_B5, 16}, {NOTE_FS5, 16}, {NOTE_DS5, 16}, {NOTE_B5, 32},
  {NOTE_FS5, 16}, {NOTE_DS5, 8}, {NOTE_DS5, 32}, {NOTE_E5, 32}, {NOTE_F5, 32},
  {NOTE_F5, 32}, {NOTE_FS5, 32}, {NOTE_G5, 32}, {NOTE_G5, 32}, {NOTE_GS5, 32}, {NOTE_A5, 16}, {NOTE_B5, 8}
};
#endif


#ifdef HAPPY_BIRTHDAY
// 8 - happy birthday
// https://github.com/hibit-dev/buzzer/blob/master/src/other/happy_birthday/happy_birthday.ino
const struct Note happy_birthday_melody[] = {
  {NOTE_C4, 4}, {NOTE_C4, 8}, 
  {NOTE_D4, 4}, {NOTE_C4, 4}, {NOTE_F4, 4},
  {NOTE_E4, 2}, {NOTE_C4, 4}, {NOTE_C4, 8}, 
  {NOTE_D4, 4}, {NOTE_C4, 4}, {NOTE_G4, 4},
  {NOTE_F4, 2}, {NOTE_C4, 4}, {NOTE_C4, 8},
  
  {NOTE_C5, 4}, {NOTE_A4, 4}, {NOTE_F4, 4}, 
  {NOTE_E4, 4}, {NOTE_D4, 4}, {NOTE_AS4, 4}, {NOTE_AS4, 8},
  {NOTE_A4, 4}, {NOTE_F4, 4}, {NOTE_G4, 4},
  {NOTE_F4, 2}
};
#endif


#ifdef AMELIE
// 9 - amelie
// extracted from midi
const struct Note amelie_melody[] = {
{ REST, 4 }, {NOTE_D6, 4}, {NOTE_F5, 4}, {NOTE_A5, 1},
{ REST, 4 }, {NOTE_A4, 4}, {NOTE_B4, 4}, {NOTE_E5, 1},
{ REST, 4 }, {NOTE_D6, 4}, {NOTE_F5, 4}, {NOTE_A5, 1},
{ REST, 4 }, {NOTE_A4, 4}, {NOTE_B4, 4}, {NOTE_E5, 1},
{ REST, 4 }, {NOTE_C6, 4}, {NOTE_F5, 4}, {NOTE_B5, 1},
{ REST, 4 }, {NOTE_G4, 4}, {NOTE_B4, 4}, {NOTE_E5, 1},
{ REST, 4 }, {NOTE_C6, 4}, {NOTE_F5, 4}, {NOTE_B5, 1},
{ REST, 4 }, {NOTE_G4, 4}, {NOTE_B4, 4}, {NOTE_E5, 1},
{NOTE_D5, 2}, { REST, 4 }, {NOTE_E5, 2}, { REST, 4 },
{NOTE_B4, 4}, { REST, 4 }, {NOTE_B4, 4}, {NOTE_C5, 4},
{NOTE_B4, 4}, {NOTE_A4, 4}, {NOTE_D5, 2}, { REST, 4 },
{NOTE_E5, 2}, { REST, 4 }, {NOTE_B4, 4}, { REST, 4 },
{NOTE_B4, 4}, {NOTE_C5, 4}, {NOTE_B4, 4}, {NOTE_A4, 4},
{NOTE_C5, 2}, { REST, 4 }, {NOTE_D5, 2}, { REST, 4 },
{NOTE_G4, 4}, { REST, 4 }, {NOTE_G4, 4}, {NOTE_B4, 4},
{ REST, 4 }, {NOTE_B4, 4}, {NOTE_C5, 2}, { REST, 4 },
{NOTE_D5, 2}, { REST, 4 }, {NOTE_G4, 4}, { REST, 4 },
{NOTE_G4, 4}, {NOTE_B4, 4}, { REST, 4 }, {NOTE_B4, 4},
{NOTE_D6, 2}, { REST, 4 }, {NOTE_E6, 2}, { REST, 4 },
{NOTE_B5, 4}, { REST, 2 }, {NOTE_C6, 4}, {NOTE_B5, 4},
{NOTE_A5, 4}, {NOTE_D6, 2}, { REST, 4 }, {NOTE_E6, 2},
{ REST, 4 }, {NOTE_B5, 4}, { REST, 2 }, {NOTE_C6, 4},
{NOTE_B5, 4}, {NOTE_A5, 4}, {NOTE_C6, 2}, { REST, 4 },
{NOTE_D6, 2}, { REST, 4 }, {NOTE_G5, 4}, { REST, 2 },
{NOTE_B5, 4}, { REST, 2 }, {NOTE_C6, 2}, { REST, 4 },
{NOTE_D6, 2}, { REST, 4 }, {NOTE_G5, 4}, { REST, 2 },
{NOTE_B5, 4}, { REST, 1 }, {NOTE_D6, 4}, {NOTE_F5, 4},
{NOTE_A5, 1}, { REST, 4 }, {NOTE_A4, 4}, {NOTE_B4, 4},
{NOTE_E5, 1}, { REST, 4 }, {NOTE_D6, 4}, {NOTE_F5, 4},
{NOTE_A5, 1}, { REST, 4 }, {NOTE_A4, 4}, {NOTE_B4, 4},
{NOTE_E5, 1}, { REST, 4 }, {NOTE_C6, 4}, {NOTE_F5, 4},
{NOTE_B5, 1}, { REST, 4 }, {NOTE_G4, 4}, {NOTE_B4, 4},
{NOTE_E5, 1}, { REST, 4 }, {NOTE_C6, 4}, {NOTE_F5, 4},
{NOTE_B5, 1}, { REST, 4 }, {NOTE_G4, 4}, {NOTE_B4, 4},
{NOTE_E5, 1}, {NOTE_D5, 2}, { REST, 4 }, {NOTE_E5, 2},
{ REST, 4 }, {NOTE_B4, 2}, { REST, 4 }, {NOTE_A4, 2},
{ REST, 4 }, {NOTE_D5, 2}, { REST, 4 }, {NOTE_E5, 2},
{ REST, 4 }, {NOTE_B4, 2}, { REST, 4 }, {NOTE_A4, 2},
{ REST, 4 }, {NOTE_C5, 2}, { REST, 4 }, {NOTE_D5, 2},
{ REST, 4 }, {NOTE_G4, 2}, { REST, 4 }, {NOTE_B4, 2},
{ REST, 4 }, {NOTE_C5, 2}, { REST, 4 }, {NOTE_D5, 2},
{ REST, 4 }, {NOTE_G4, 2} 
};
#endif

#ifdef MERRY_CHRISTMAS
const struct Note we_wish_you_a_merry_christmas_notes[] = {
     // intro bar
    {NOTE_D4, QUARTER},

    // bar 1
    {NOTE_G4, QUARTER},
    {NOTE_G4, EIGHT},
    {NOTE_A4, EIGHT},
    {NOTE_G4, EIGHT},
    {NOTE_FS4, EIGHT},

    // bar 2
    {NOTE_E4, QUARTER},
    {NOTE_E4, QUARTER},
    {NOTE_E4, QUARTER},

    // bar 3
    {NOTE_A4, QUARTER},
    {NOTE_A4, EIGHT},
    {NOTE_B4, EIGHT},
    {NOTE_A4, EIGHT},
    {NOTE_G4, EIGHT},

    // bar 4
    {NOTE_FS4, QUARTER},
    {NOTE_D4, QUARTER},
    {NOTE_D4, QUARTER},

    // bar 5
    {NOTE_B4, QUARTER},
    {NOTE_B4, EIGHT},
    {NOTE_C5, EIGHT},
    {NOTE_B4, EIGHT},
    {NOTE_A4, EIGHT},

    // bar 6
    {NOTE_G4, QUARTER},
    {NOTE_E4, QUARTER},
    {NOTE_D4, EIGHT},
    {NOTE_D4, EIGHT},

    // bar 7
    {NOTE_E4, QUARTER},
    {NOTE_A4, QUARTER},
    {NOTE_FS4, QUARTER},

    // bar 8
    {NOTE_G4, HALF},
    {NOTE_D4, QUARTER},

    // bar 9
    {NOTE_G4, QUARTER},
    {NOTE_G4, QUARTER},
    {NOTE_G4, QUARTER},

    // bar 10
    {NOTE_FS4, HALF},
    {NOTE_FS4, QUARTER},

    // bar 11
    {NOTE_G4, QUARTER},
    {NOTE_FS4, QUARTER},
    {NOTE_E4, QUARTER},

    // bar 12
    {NOTE_D4, HALF},
    {NOTE_A4, QUARTER},

    // bar 13
    {NOTE_B4, QUARTER},
    {NOTE_A4, QUARTER},
    {NOTE_G4, QUARTER},

    // bar 14
    {NOTE_D5, QUARTER},
    {NOTE_D4, QUARTER},
    {NOTE_D4, EIGHT},
    {NOTE_D4, EIGHT},

    // bar 15
    {NOTE_E4, QUARTER},
    {NOTE_A4, QUARTER},
    {NOTE_FS4, QUARTER},

    // bar 16
    {NOTE_G4, HALF},
    {REST, QUARTER},
};
#endif  // MERRY_CHRISTMAS


#ifdef SILENT_NIGHT
const struct Note silent_night_notes[] = {
    // Intro bar
    {REST, QUARTER},

    // --- REPEAT 1 & 2 START ---
    // Bar 1
    {NOTE_G4, DOTTED_QUARTER}, {NOTE_A4, EIGHT}, {NOTE_G4, QUARTER},
    // Bar 2
    {NOTE_E4, DOTTED_HALF},
    // Bar 3
    {NOTE_G4, DOTTED_QUARTER}, {NOTE_A4, EIGHT}, {NOTE_G4, QUARTER},
    // Bar 4
    {NOTE_E4, DOTTED_HALF},
    // Bar 5
    {NOTE_D5, HALF}, {NOTE_D5, QUARTER},
    // Bar 6
    {NOTE_B4, DOTTED_HALF},
    // Bar 7
    {NOTE_C5, HALF}, {NOTE_C5, QUARTER},
    // Bar 8
    {NOTE_G4, DOTTED_HALF},

    // Bar 9 & 13
    {NOTE_A4, HALF}, {NOTE_A4, QUARTER},
    // Bar 10 & 14
    {NOTE_C5, DOTTED_QUARTER}, {NOTE_B4, EIGHT}, {NOTE_A4, QUARTER},
    // Bar 11 & 15
    {NOTE_G4, DOTTED_QUARTER}, {NOTE_A4, EIGHT}, {NOTE_G4, QUARTER},
    // Bar 12 & 16
    {NOTE_E4, DOTTED_HALF},

    // (Second pass of the inner loop)
    // Bar 13 (identical to 9)
    {NOTE_A4, HALF}, {NOTE_A4, QUARTER},
    // Bar 14 (identical to 10)
    {NOTE_C5, DOTTED_QUARTER}, {NOTE_B4, EIGHT}, {NOTE_A4, QUARTER},
    // Bar 15 (identical to 11)
    {NOTE_G4, DOTTED_QUARTER}, {NOTE_A4, EIGHT}, {NOTE_G4, QUARTER},
    // Bar 16 (identical to 12)
    {NOTE_E4, DOTTED_HALF},

    // Bar 17
    {NOTE_D5, HALF}, {NOTE_D5, QUARTER},
    // Bar 18
    {NOTE_F5, DOTTED_QUARTER}, {NOTE_D5, EIGHT}, {NOTE_B4, QUARTER},
    // Bar 19
    {NOTE_C5, DOTTED_HALF},
    // Bar 20
    {NOTE_E5, DOTTED_HALF},
    // Bar 21
    {NOTE_C5, QUARTER}, {NOTE_G4, QUARTER}, {NOTE_E4, QUARTER},
    // Bar 22
    {NOTE_G4, DOTTED_QUARTER}, {NOTE_F4, EIGHT}, {NOTE_D4, QUARTER},
    // Bar 23 & 24 (6 beats total)
    {NOTE_C4, DOTTED_HALF + DOTTED_HALF},
};
#endif

#ifdef JINGLE_BELLS
const struct Note jingle_bells_notes[] = {
    // Intro
    {REST, HALF},

    // --- START OF FULL REPEAT (Bars 1-16) ---
    // Bar 1
    {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, HALF},
    // Bar 2
    {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, HALF},
    // Bar 3
    {NOTE_B3, QUARTER}, {NOTE_D4, QUARTER}, {NOTE_G3, QUARTER}, {NOTE_A3, QUARTER},
    // Bar 4
    {NOTE_B3, WHOLE},
    // Bar 5
    {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER},
    // Bar 6
    {NOTE_C4, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER},
    // Bar 7
    {NOTE_B3, QUARTER}, {NOTE_A3, QUARTER}, {NOTE_A3, QUARTER}, {NOTE_B3, QUARTER},
    // Bar 8
    {NOTE_A3, HALF}, {NOTE_D4, HALF},
    // Bar 9
    {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, HALF},
    // Bar 10
    {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, HALF},
    // Bar 11
    {NOTE_B3, QUARTER}, {NOTE_D4, QUARTER}, {NOTE_G3, QUARTER}, {NOTE_A3, QUARTER},
    // Bar 12
    {NOTE_B3, WHOLE},
    // Bar 13
    {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER},
    // Bar 14
    {NOTE_C4, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER},
    // Bar 15
    {NOTE_D4, QUARTER}, {NOTE_D4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_A3, QUARTER},
    // Bar 16
    {NOTE_G3, WHOLE},

    // --- REPEAT OF BARS 1-16 ---
    {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, HALF},
    {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, HALF},
    {NOTE_B3, QUARTER}, {NOTE_D4, QUARTER}, {NOTE_G3, QUARTER}, {NOTE_A3, QUARTER},
    {NOTE_B3, WHOLE},
    {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER},
    {NOTE_C4, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER},
    {NOTE_B3, QUARTER}, {NOTE_A3, QUARTER}, {NOTE_A3, QUARTER}, {NOTE_B3, QUARTER},
    {NOTE_A3, HALF}, {NOTE_D4, HALF},
    {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, HALF},
    {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, HALF},
    {NOTE_B3, QUARTER}, {NOTE_D4, QUARTER}, {NOTE_G3, QUARTER}, {NOTE_A3, QUARTER},
    {NOTE_B3, WHOLE},
    {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_C4, QUARTER},
    {NOTE_C4, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_B3, QUARTER},
    {NOTE_D4, QUARTER}, {NOTE_D4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_A3, QUARTER},
    {NOTE_G3, WHOLE}
};
#endif


#ifdef SANTA_CLAUS
const struct Note santa_claus_notes[] = {
    {NOTE_E4, EIGHT},  {NOTE_F4, EIGHT}, {NOTE_G4, QUARTER}, {NOTE_G4, QUARTER}, {REST, QUARTER},
    {NOTE_A4, EIGHT}, {NOTE_B4, EIGHT}, {NOTE_C5, QUARTER}, {NOTE_C5, HALF},
    {NOTE_E4, EIGHT}, {NOTE_F4, EIGHT}, {NOTE_G4, QUARTER}, {NOTE_G4, QUARTER}, {NOTE_G4, QUARTER},
    {NOTE_A4, EIGHT}, {NOTE_G4, EIGHT}, {NOTE_F4, QUARTER}, {NOTE_F4, HALF},
    {NOTE_E4, QUARTER}, {NOTE_G4, QUARTER}, {NOTE_C4, QUARTER}, {NOTE_E4, QUARTER},
    {NOTE_D4, QUARTER}, {NOTE_F4, QUARTER}, {NOTE_B3, QUARTER}, {NOTE_D4, QUARTER},
    {NOTE_C4, WHOLE}
};
#endif


#ifdef IHR_KINDERLEIN_KOMMET
const struct Note ihr_kinderlein_kommet_notes[] = {
    // Takt 0: Auftakt
    {NOTE_G4, EIGHT},
    // --- Zeile 1 ---
    // Takt 1: "Kin-der-lein"
    {NOTE_G4, QUARTER}, {NOTE_E4, EIGHT}, {NOTE_G4, EIGHT},
    // Takt 2: "kom-met, o"
    {NOTE_G4, QUARTER}, {NOTE_E4, EIGHT}, {NOTE_G4, EIGHT},
    // Takt 3: "kom-met doch"
    {NOTE_F4, QUARTER}, {NOTE_D4, EIGHT}, {NOTE_F4, EIGHT},
    // Takt 4: "all'!" + Achtelpause
    {NOTE_E4, QUARTER}, {REST, EIGHT},

    
    {NOTE_G4, EIGHT},
    // --- Zeile 1 ---
    // Takt 1: "Kin-der-lein"
    {NOTE_G4, QUARTER}, {NOTE_E4, EIGHT}, {NOTE_G4, EIGHT},
    // Takt 2: "kom-met, o"
    {NOTE_G4, QUARTER}, {NOTE_E4, EIGHT}, {NOTE_G4, EIGHT},
    // Takt 3: "kom-met doch"
    {NOTE_F4, QUARTER}, {NOTE_D4, EIGHT}, {NOTE_F4, EIGHT},
    // Takt 4: "all'!" + Achtelpause
    {NOTE_E4, QUARTER}, {REST, EIGHT},

    {NOTE_E4, EIGHT}, 
    {NOTE_D4, QUARTER}, {NOTE_D4, EIGHT}, {NOTE_D4, EIGHT},
    {NOTE_F4, QUARTER}, {NOTE_F4, EIGHT}, {NOTE_F4, EIGHT},
    {NOTE_E4, QUARTER}, {NOTE_E4, EIGHT}, {NOTE_E4, EIGHT},
    {NOTE_A4, DOTTED_QUARTER}, {NOTE_A4, EIGHT},

    {NOTE_G4, QUARTER}, {NOTE_G4, EIGHT}, {NOTE_G4, EIGHT},
    {NOTE_C5, QUARTER}, {NOTE_G4, EIGHT}, {NOTE_E4, EIGHT},
    {NOTE_G4, QUARTER}, {NOTE_F4, EIGHT}, {NOTE_D4, EIGHT},
    // Takt 12: "macht."
    {NOTE_C4, QUARTER}, {REST, EIGHT}
};
#endif

#ifdef O_TANNENBAUM
const struct Note o_tannenbaum_notes[] = {
// Pickup (Anacrusis)
    { NOTE_C4, EIGHT },

    // O Tan-nen-baum,
    { NOTE_F4, DOTTED_EIGHT }, { NOTE_F4, SIXTEEN },
    { NOTE_F4, DOTTED_QUARTER },
    { NOTE_G4, EIGHT },

    // o Tan-nen-baum,
    { NOTE_A4, DOTTED_EIGHT }, { NOTE_A4, SIXTEEN },
    { NOTE_A4, DOTTED_QUARTER },
    { NOTE_A4, EIGHT },

    // wie treu sind dei-ne 
    { NOTE_G4, EIGHT },
    { NOTE_A4, EIGHT },
    { NOTE_AS4, QUARTER },      
    { NOTE_E4, QUARTER },

    // Blät-ter! - Du
    { NOTE_G4, QUARTER },
    { NOTE_F4, QUARTER },
    { REST,     EIGHT },
    { NOTE_C5, EIGHT },

    // grünst nicht nur zur 
    { NOTE_C5, EIGHT },
    { NOTE_A4, EIGHT },
    { NOTE_D5, DOTTED_QUARTER },
    { NOTE_C5, EIGHT },

    // Som-mer-zeit, nein
    { NOTE_C5, EIGHT },
    { NOTE_B4, EIGHT },
    { NOTE_B4, DOTTED_QUARTER },
    { NOTE_B4, EIGHT },

    // auch im Win-ter,
    { NOTE_B4, EIGHT },
    { NOTE_G4, EIGHT },
    { NOTE_C5, DOTTED_QUARTER },
    { NOTE_B4, EIGHT },

    // wenn es schneit. O.
    { NOTE_B4, EIGHT },
    { NOTE_A4, EIGHT },
    { NOTE_A4, QUARTER },
    { REST, EIGHT },
    { NOTE_C4, EIGHT},

    //Tan-nen-baum, o
    { NOTE_F4, DOTTED_EIGHT }, { NOTE_F4, SIXTEEN },
    { NOTE_F4, DOTTED_QUARTER },
    { NOTE_G4, EIGHT },

    //Tan-nen-baum, wie
    { NOTE_A4, DOTTED_EIGHT }, { NOTE_A4, SIXTEEN },
    { NOTE_A4, DOTTED_QUARTER },
    { NOTE_A4, EIGHT },

    // treu sind dei-ne 
    { NOTE_G4, EIGHT },
    { NOTE_A4, EIGHT },
    { NOTE_B4, QUARTER },
    { NOTE_E4, QUARTER },

    // Blät-ter.
    { NOTE_G4, QUARTER },
    { NOTE_F4, QUARTER },
    { REST, EIGHT },
};
#endif





// Create the melodies array
const struct Melody melodies[] = {
#ifdef INTERNATIONALE
    {
        .notes = internationale_melody,
        .length = sizeof(internationale_melody) / sizeof(internationale_melody[0]),
        .speed = 2000,
    },
#endif
#ifdef TETRIS
    {
        .notes = tetris_melody,
        .length = sizeof(tetris_melody) / sizeof(tetris_melody[0]),
        .speed = 2000,
    },
#endif
#ifdef PINK_PANTHER
    {
        .notes = pink_panther_melody,
        .length = sizeof(pink_panther_melody) / sizeof(pink_panther_melody[0]),
        .speed = 2000,
    },
#endif
#ifdef STAR_WARS
    {
        .notes = star_wars_melody,
        .length = sizeof(star_wars_melody) / sizeof(star_wars_melody[0]),
        .speed = 2000,
    },
#endif
#ifdef THE_LION_SLEEPS_TONIGHT
    {
        .notes = the_lion_sleeps_tonight_melody,
        .length = sizeof(the_lion_sleeps_tonight_melody) / sizeof(the_lion_sleeps_tonight_melody[0]),
        .speed = 2000,
    },
#endif
#ifdef THE_SIMPSONS
    {
        .notes = the_simpsons_melody,
        .length = sizeof(the_simpsons_melody) / sizeof(the_simpsons_melody[0]),
        .speed = 2000,
    },
#endif
#ifdef SUPER_MARIO
    {
        .notes = super_mario_melody,
        .length = sizeof(super_mario_melody) / sizeof(super_mario_melody[0]),
        .speed = 2000,
    },
#endif
#ifdef PACMAN
    {
        .notes = pacman_melody,
        .length = sizeof(pacman_melody) / sizeof(pacman_melody[0]),
        .speed = 2000,
    },
#endif
#ifdef HAPPY_BIRTHDAY
    {
        .notes = happy_birthday_melody,
        .length = sizeof(happy_birthday_melody) / sizeof(happy_birthday_melody[0]),
        .speed = 2000,
    },
#endif
#ifdef AMELIE
    {
        .notes = amelie_melody,
        .length = sizeof(amelie_melody) / sizeof(amelie_melody[0]),
        .speed = 1000,
    },
#endif
#ifdef SILENT_NIGHT
    {
        .notes = silent_night_notes,
        .length = sizeof(silent_night_notes) / sizeof(silent_night_notes[0]),
        .speed = 2000,
    },
#endif 
#ifdef MERRY_CHRISTMAS
    {
        .notes = we_wish_you_a_merry_christmas_notes,
        .length = sizeof(we_wish_you_a_merry_christmas_notes) / sizeof(we_wish_you_a_merry_christmas_notes[0]),
        .speed = 2000,
    },
#endif
#ifdef JINGLE_BELLS
    {
        .notes = jingle_bells_notes,
        .length = sizeof(jingle_bells_notes) / sizeof(jingle_bells_notes[0]),
        .speed = 1000,
    },
#endif
#ifdef SANTA_CLAUS
    {
        .notes = santa_claus_notes,
        .length = sizeof(santa_claus_notes) / sizeof(santa_claus_notes[0]),
        .speed = 2000,
    },
#endif    
#ifdef IHR_KINDERLEIN_KOMMET
    {
        .notes = ihr_kinderlein_kommet_notes,
        .length = sizeof(ihr_kinderlein_kommet_notes) / sizeof(ihr_kinderlein_kommet_notes[0]),
        .speed = 2000,
    },
#endif
#ifdef O_TANNENBAUM
    {
        .notes = o_tannenbaum_notes,
        .length = sizeof(o_tannenbaum_notes) / sizeof(o_tannenbaum_notes[0]),
        .speed = 1500,
    },
#endif   
};

// Number of melodies
#define NUM_MELODIES (sizeof(melodies) / sizeof(melodies[0]))

#ifdef	__cplusplus
}
#endif

#endif	/* MELODIES_H */