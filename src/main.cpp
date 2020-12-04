#include <Arduino.h>

const int C = 0;
const int D = 1;
const int E = 2;
const int F = 3;
const int G = 4;
const int A = 5;
const int B = 6;

const int BUZZ = 11;
const int LED = 13;

void setup() {
  
  pinMode(LED, OUTPUT);
  pinMode(C, INPUT);
  digitalWrite(C, HIGH);

  pinMode(D, INPUT);
  digitalWrite(D, HIGH);

  pinMode(E, INPUT);
  digitalWrite(E, HIGH);

  pinMode(F, INPUT);
  digitalWrite(F, HIGH);

  pinMode(G, INPUT);
  digitalWrite(G, HIGH);

  pinMode(A, INPUT);
  digitalWrite(A, HIGH);

  pinMode(B, INPUT);
  digitalWrite(B, HIGH);

  digitalWrite(LED, LOW);
}

void loop() {
  while(digitalRead(C) == LOW)
  {
    tone(BUZZ, 262);
    digitalWrite(LED, HIGH);
  }

  while(digitalRead(D) == LOW)
  {
    tone(BUZZ, 294);
    digitalWrite(LED, HIGH);
  }

  while(digitalRead(E) == LOW)
  {
    tone(BUZZ, 330);
    digitalWrite(LED, HIGH);
  }

  while(digitalRead(F) == LOW)
  {
    tone(BUZZ, 342);
    digitalWrite(LED, HIGH);
  }

  while(digitalRead(G) == LOW)
  {
    tone(BUZZ, 392);
    digitalWrite(LED, HIGH);
  }

  while(digitalRead(A) == LOW)
  {
    tone(BUZZ, 440);
    digitalWrite(LED, HIGH);
  }

  while(digitalRead(B) == LOW)
  {
    tone(BUZZ, 493);
    digitalWrite(LED, HIGH);
  }

  noTone(BUZZ);
  digitalWrite(LED, LOW);
}