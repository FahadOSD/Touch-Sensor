
// NeuralMesh Solution

const int ledPin = 13;
const int touchPin = 2;

boolean metalTouched = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(touchPin, INPUT);
}

void loop() {
  int touchState = digitalRead(touchPin);

  // Metal touch sensor is touched (LOW signal)
  if (touchState == LOW) {
    metalTouched = true;
  } else {
    metalTouched = false;
  }

  // Turn on or off the LED based on the metal touch sensor state
  digitalWrite(ledPin, metalTouched ? HIGH : LOW);
}


