#include <stdlib.h>

int leds[35] = {3,4,5,6,7,8,9,10,11,12,13,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44};
int btnPin = 2;
bool btnState;

int formas[5][35] = {
  {
  0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,
  0,0,0,0,0,0,0,
  0,0,0,0,0,0,0
  },
  
  {
  0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,
  0,0,1,0,0,0,1,
  0,0,0,0,0,0,0,
  0,0,1,0,0,0,1
  },
  {
  0,0,0,1,0,0,0,
  0,1,1,0,1,1,0,
  0,0,1,1,1,0,0,
  0,1,0,0,0,1,0,
  0,0,0,0,0,0,0
  },
  {
  0,0,1,0,1,0,0,
  0,0,0,0,0,0,0,
  0,1,0,0,0,1,0,
  0,0,0,0,0,0,0,
  0,0,0,0,0,0,0
  },
  {
  0,0,0,0,0,1,0,
  0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,
  0,0,0,0,0,1,0,
  0,0,0,0,0,0,0
  }
};

int num_formas;
int indice_aleatorio = 0;

void setup() {
  for (int i = 0; i < 35; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(btnPin, INPUT_PULLUP);
  num_formas = sizeof(formas) / sizeof(formas[0]);
}

void loop() {
  if (digitalRead(btnPin) == LOW) {
      indice_aleatorio = (indice_aleatorio + 1) % num_formas;
      for (int i = 0; i < 35; i++) {
        digitalWrite(leds[i], formas[indice_aleatorio][i]);
      }
      delay(500);
  }
}
