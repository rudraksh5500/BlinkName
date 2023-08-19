int led1 = LED_BUILTIN;

int buttonPin = 2; // Push button for resetting the name
bool isButtonPressed = false;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(buttonPin), resetName, FALLING);
}

void loop() 
{
  if (isButtonPressed) {
    resetName();
    isButtonPressed = false;
  }

  // R
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(500);

  // u
  blinkDot(); delay(1000);
  blinkDot(); delay(1000);
  blinkDash(); delay(500);

  // d
  blinkDash(); delay(500);
  blinkDot(); delay(1000);
  blinkDot(); delay(500);

  // r
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(500);

  // a
  blinkDot(); delay(500);
  blinkDash(); delay(1000);

  // k
  blinkDash(); delay(500);
  blinkDot(); delay(1000);
  blinkDash(); delay(500);
  blinkDot(); delay(500);

  // s
  blinkDot(); delay(1000);
  blinkDot(); delay(1000);
  blinkDot(); delay(1000);

  // h
  blinkDot(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(500);

  blinkSpace(); // Gap between words
}

void blinkDot() {
  digitalWrite(led1, HIGH);
  delay(200);
  digitalWrite(led1, LOW);
  delay(200);
}

void blinkDash() {
  digitalWrite(led1, HIGH);
  delay(600);
  digitalWrite(led1, LOW);
  delay(200);
}

void blinkSpace() {
  delay(2000); // Gap between words
}

void resetName() {
  // Reset the name display here
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
}