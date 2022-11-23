// convertNotetoMidi.h
// A header file for the convertNotetoMidi C library.
//
// v1.0
//
// G. Elvin White
// 22 November 2022
//
// Installation: Place convertNoteToMidi.h,
// convertNotetoMidi.c, and Makefile in the same directory as
// main.c. Then, run 'make convertNotetoMidi'. Examine the
// Makefile for the necessary compiling steps.
//
// Copyright (c) G. Elvin White, 2022. All rights reserved.
// Distributed under MIT License
//

// Include Guard
#ifndef CONVERTNOTETOMIDI_DOT_H

// Prevents from being called twice
#define CONVERTNOTETOMIDI_DOT_H

// Function declaration
int convertNoteToMidi(char *note, int octave);

// CONVERTNOTETOMIDI_DOT_H
#endif
