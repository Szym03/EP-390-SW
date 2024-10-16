const int trigPin = 9;
const int echoPin = 10;
const int buttonPin = 2;
const int potPin = A0;

float duration, distance;

int buttonState;
int potState = 0;

void setup() {

  pinMode(trigPin, OUTPUT);

  pinMode(echoPin, INPUT);

  pinMode(buttonPin, INPUT_PULLUP);

  Serial.begin(9600);

}

void loop() {

  potState = analogRead(potPin);

  Serial.print("p ");

  Serial.println(potState);

  digitalWrite(trigPin, LOW);

  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration*.0343)/2;

  Serial.print("Distance: ");

  Serial.println(distance);

  delay(100);

  buttonState = digitalRead(buttonPin);

  Serial.print("b ");
  Serial.println(buttonState);

}
