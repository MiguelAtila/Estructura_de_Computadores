const int inputPin =7;
int input7=0;
int lastState=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin, INPUT);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  input7 = digitalRead(inputPin);
  if(lastState == LOW && input7 == HIGH)
  {
    Serial.println("1");
  }
  else if (lastState == HIGH && input7 == LOW)
  {
    Serial.println("0");
  }
  lastState = input7;
  delay(100);
}
