const byte ledPins[] = {15, 2, 4};
const byte pwmChns[] = {0, 1, 2};
const byte adcChns[] = {13, 12, 14};
int colors[] = {0, 0, 0};

void setup() {
  for (int i = 0; i < 3; i++) {
    ledcAttachChannel(ledPins[i], 1000, 8, pwmChns[i]);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    colors[i] = map(analogRead(adcChns[i]), 0, 4096, 0, 255);
    ledcWrite(ledPins[i], 256 - colors[i]);
  }
  delay(10);
}