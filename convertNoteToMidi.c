// convertNotetoMidi.c
// A useful C library for converting a string of a note
// to a midi value, taking into account octave.
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

// Include the header file
#include "convertNoteToMidi.h"

// Include others
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function definition
int convertNoteToMidi(char *note, int octave)
{

  // Adjust octave to zero base (Midi octaves are -2 to 8)
  octave = octave + 2;
  if (octave < 0)
  {
    octave = 0;
    printf("WARNING: Octave below -2. Resetting to -2\n");
  }
  if (octave > 10)
  {
    octave = 10;
    printf("WARNING: Octave above 8. Resetting to 8.\n");
  }
  int octaveAdjust = octave * 12;

  // Make a copy of the note in all lowercase
  int noteLength = strlen(note);
  char thisNote[noteLength];
  for (int i = 0; i < noteLength; i++)
  {
    char thisLetter = note[i];
    thisNote[i] = tolower(thisLetter);
  }

  // Return correct midi note
  int noteBase = 0;

  // C
  if (!strcmp(thisNote, "b#"))
  {
    noteBase = 0;
  }
  else if (!strcmp(thisNote, "c"))
  {
    noteBase = 0;
  }

  // C# Db
  else if (!strcmp(thisNote, "c#"))
  {
    noteBase = 1;
  }
  else if (!strcmp(thisNote, "db"))
  {
    noteBase = 1;
  }

  // D
  else if (!strcmp(thisNote, "d"))
  {
    noteBase = 2;
  }


  // D# Eb
  else if (!strcmp(thisNote, "d#"))
  {
    noteBase = 3;
  }
  else if (!strcmp(thisNote, "eb"))
  {
    noteBase = 3;
  }

  // E Fb
  else if (!strcmp(thisNote, "e"))
  {
    noteBase = 4;
  }
  else if (!strcmp(thisNote, "fb"))
  {
    noteBase = 4;
  }

  // F E#
  else if (!strcmp(thisNote, "f"))
  {
    noteBase = 5;
  }
  else if (!strcmp(thisNote, "e#"))
  {
    noteBase = 5;
  }

  // F# Gb
  else if (!strcmp(thisNote, "f#"))
  {
    noteBase = 6;
  }
  else if (!strcmp(thisNote, "gb"))
  {
    noteBase = 6;
  }

  // G
  else if (!strcmp(thisNote, "g"))
  {
    noteBase = 7;
  }

  // G# Ab
  else if (!strcmp(thisNote, "g#"))
  {
    noteBase = 8;
  }
  else if (!strcmp(thisNote, "ab"))
  {
    noteBase = 8;
  }

  // A
  else if (!strcmp(thisNote, "a"))
  {
    noteBase = 9;
  }

  // A# Bb
  else if (!strcmp(thisNote, "a#"))
  {
    noteBase = 10;
  }
  else if (!strcmp(thisNote, "bb"))
  {
    noteBase = 10;
  }

  // B Cb
  // A# Bb
  else if (!strcmp(thisNote, "b"))
  {
    noteBase = 11;
  }
  else if (!strcmp(thisNote, "cb"))
  {
    noteBase = 11;
  }
  else
  {
    noteBase = 0;
  }

  // Adjust midi note for octave
  int midiNote = noteBase + octaveAdjust;

  // Adjust to ceiling of 127 if note over 127
  if (midiNote > 127)
  {
    midiNote = noteBase + 108;
    printf("WARNING: Note above range 127. Lowering to octave 7.\n");
  }

  return midiNote;

}
