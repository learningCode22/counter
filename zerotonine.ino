int led = 6;
int led2 = 13;
int led3 = 12;
int led4 = 11;
int led5 = 10;
int led6 = 7;
int led7 = 9;
int led8 = 8;
int led9 = 5;
int led10 = 4;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
}

void loop() {
  zero();
  one();
  two();
  three();
  four();
  five();
  six();
  seven();
  eight();
  nine();
  delay(1000);
}

void zero(){
  digitalWrite(led, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(2500);
}

void one() {
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  delay(2500);
}

void two(){
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(2500);
}

void three(){
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, LOW);
  delay(2500);
}

void four(){
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  delay(2500);
}

void five(){
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, LOW);
  delay(2500);
}

void six(){
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(2500);
}

void seven(){
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  delay(2500);
}

void eight(){
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  delay(2500);
}

void nine(){
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  delay(2500);
}
