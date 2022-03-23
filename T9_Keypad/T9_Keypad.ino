#include <Keypad.h>

const byte numROWS = 4; //four rows
const byte numCOLS = 4; //four columns

char keymap[numROWS][numCOLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

byte rowPins[numROWS] = {11, 10, 9, 8}; //connect to the row pinouts of the keypad
byte colPins[numCOLS] = {7, 6, 5}; //connect to the column pinouts of the keypad

unsigned long keypressMillis = 0;
const long interval = 700;
int count;
bool displayReady = false;
int displayKey;

char key1[] = " .,?!1";
char key2[] = " ABC2";
char key3[] = " DEF3";

char key4[] = " GHI4";
char key5[] = " JKL5";
char key6[] = " MNO6";

char key7[] = " PQRS7";
char key8[] = " TUV8";
char key9[] = " WXYZ9";

char keyAst[] = " *";
char key0[] = "  0";
char keyHash[] = " #";


Keypad myKeypad = Keypad( makeKeymap(keymap), rowPins, colPins, numROWS, numCOLS);

void setup() {
  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();
  char keypressed = myKeypad.getKey();



  if (keypressed == '1') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 1;
    if (count > 6) {
      count = 0;
    }
  }
  else if (keypressed == '2') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 2;
    if (count > 5) {
      count = 0;
    }
  }
  else if (keypressed == '3') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 3;
    if (count > 5) {
      count = 0;
    }
  }
  else if (keypressed == '4') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 4;
    if (count > 5) {
      count = 0;
    }
  }
  else if (keypressed == '5') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 5;
    if (count > 5) {
      count = 0;
    }
  }
  else if (keypressed == '6') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 6;
    if (count > 5) {
      count = 0;
    }
  }
  else if (keypressed == '7') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 7;
    if (count > 6) {
      count = 0;
    }
  }
  else if (keypressed == '8') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 8;
    if (count > 5) {
      count = 0;
    }
  }
  else if (keypressed == '9') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 9;
    if (count > 6) {
      count = 0;
    }
  }
  else if (keypressed == '*') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 10;
    if (count > 2) {
      count = 0;
    }
  }
  else if (keypressed == '0') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 11;
    if (count > 3) {
      count = 0;
    }
  }
  else if (keypressed == '#') {
    count++;
    keypressMillis = currentMillis;
    displayReady = true;
    displayKey = 12;
    if (count > 2) {
      count = 0;
    }
  }


  if (displayReady) {
    if ((currentMillis - keypressMillis) >= interval) {
      if (displayKey == 1) {
        Serial.print(key1[count]);
      }
      else if (displayKey == 2) {
        Serial.print(key2[count]);
      }
      else if (displayKey == 3) {
        Serial.print(key3[count]);
      }
      else if (displayKey == 4) {
        Serial.print(key4[count]);
      }
      else if (displayKey == 5) {
        Serial.print(key5[count]);
      }
      else if (displayKey == 6) {
        Serial.print(key6[count]);
      }
      else if (displayKey == 7) {
        Serial.print(key7[count]);
      }
      else if (displayKey == 8) {
        Serial.print(key8[count]);
      }
      else if (displayKey == 9) {
        Serial.print(key9[count]);
      }
      else if (displayKey == 10) {
        Serial.print(keyAst[count]);
      }
      else if (displayKey == 11) {
        Serial.print(key0[count]);
      }
      else if (displayKey == 12) {
        Serial.print(keyHash[count]);
      }
      displayReady = false;
      count = 0;
    }
  }
}
