// main.c
// A test program for convertNoteToMidi C library
//
// v1.0
//
// G. Elvin White
// 22 November 2022
//
// Installation: Place convertNoteToMidi.h,
// convertNotetoMidi.c, and Makefile in the same directory as
// main.c. Notice the include statement modeled below. Then,
// run 'make convertNotetoMidi'. Examine the Makefile for
// the necessary compiling steps.
//
// Copyright (c) G. Elvin White, 2022. All rights reserved.
// Distributed under MIT License
//


// Includes
#include "convertNoteToMidi.h"
#include <stdio.h>
#include <string.h>

// Main Function
int main(void)
{
    // An example usage of convertNoteToMidi with G# at octave -2
    char *note = "G#";
    int octave = -2;
    int test = convertNoteToMidi(note, octave);
    printf("The midi value of %s at octave %i is: %i\n", note, octave, test);
}
