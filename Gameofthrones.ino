 #include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_G6, NOTE_C6, NOTE_DS5, NOTE_F5, NOTE_G6, NOTE_C5, NOTE_DS5, NOTE_F5, NOTE_D5,
  NOTE_F6, NOTE_AS5, NOTE_DS5, NOTE_D6, NOTE_F6, NOTE_AS5, NOTE_DS5, NOTE_D6, NOTE_C6,
  NOTE_G6, NOTE_C6, NOTE_DS5, NOTE_F5, NOTE_G6, NOTE_C5, NOTE_DS5, NOTE_F5, NOTE_D5,
  NOTE_F6, NOTE_AS5, NOTE_DS5, NOTE_D6, NOTE_F6, NOTE_AS5, NOTE_DS5, NOTE_D6, NOTE_C6,
  NOTE_G6, NOTE_C6, NOTE_DS5, NOTE_F5, NOTE_G6, NOTE_C5, NOTE_DS5, NOTE_F5, NOTE_D5,
  NOTE_F6, NOTE_AS5, NOTE_D6, NOTE_DS5, NOTE_D6, NOTE_AS5, NOTE_C6,
  NOTE_C7, NOTE_AS6, NOTE_C6, NOTE_G6, NOTE_GS5, NOTE_DS5, NOTE_F6, NOTE_G6,
  NOTE_C8, NOTE_AS7, NOTE_C7, NOTE_G7, NOTE_GS6, NOTE_DS6, NOTE_D7, NOTE_C7
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  2, 2, 6, 6, 2, 2, 6, 6, 1,
  2, 2, 6, 6, 2, 2, 6, 6, 1,
  2, 2, 6, 6, 2, 2, 6, 6, 1,
  2, 2, 6, 6, 2, 2, 6, 6, 1,
  2, 2, 6, 6, 2, 2, 6, 6, 1,
  2, 2, 2, 4, 2, 2, 1,
  2, 2, 2, 1, 1, 2, 6, 2,
  2, 2, 2, 2, 2, 5, 3, 1
  };

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 68  ; thisNote++) {

    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
