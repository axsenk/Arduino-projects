const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Red
  setColor(255, 0, 0);
  delay(1000);
  // Green
  setColor(0, 255, 0);
  delay(1000);
  // Blue
  setColor(0, 0, 255);
  delay(1000);
  // Custom color (e.g., purple)
  setColor(150, 0, 150);
  delay(1000);
}

void setColor(int r, int g, int b) {
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);
}
