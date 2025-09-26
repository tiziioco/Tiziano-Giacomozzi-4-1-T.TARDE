const int BUZZER_PIN = 9;
const int TEMPO = 120;
const int PAUSE_SECONDS = 3;
const int LENGTH = 36;

const int NOTE_C4 = 262;
const int NOTE_D4 = 294;
const int NOTE_E4 = 330;
const int NOTE_F4 = 349;
const int NOTE_G4 = 392;
const int NOTE_A4 = 440;
const int NOTE_B4 = 494;
const int NOTE_C5 = 523;
const int NOTE_REST = 0;

const int notes[] = {
    NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, 
    NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, 
    NOTE_G4, NOTE_REST, NOTE_G4, NOTE_REST, NOTE_A4, NOTE_REST, NOTE_A4, NOTE_REST, 
    NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, 
    NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, 
    NOTE_C5, NOTE_REST, NOTE_C5, NOTE_REST
};

const int figures[] = {
    16, 16, 16, 16, 16, 16, 16, 16, 
    16, 16, 16, 16, 16, 16, 16, 16, 
    8, -8, 8, -8, 8, -8, 8, -8,
    32, 32, 32, 32,
    16, 16, 16, 16, 16, 16, 16, 16, 
    8, -8, 4
};


int convertFigureToDuration(int figure) {
    const long durationRound = (60000L * 4L) / TEMPO;
    return durationRound / figure;
}

void playNote(int note, int figure) {
    int figureAbs = abs(figure);
    int duration = convertFigureToDuration(figureAbs);
    
    if (note != NOTE_REST) {
        tone(BUZZER_PIN, note, duration * 0.95);
        delay(duration);
        noTone(BUZZER_PIN);
    } else {
        delay(duration);
    }
}

void playMelody(const int notes[], const int figures[], int length) {
    for (int i = 0; i < length; i++) {
        playNote(notes[i], figures[i]);
    }
}

void pauseBetweenLoops(int seconds) {
    delay(seconds * 1000);
}


void setup() {
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
    playMelody(notes, figures, LENGTH);
    pauseBetweenLoops(PAUSE_SECONDS);
}

