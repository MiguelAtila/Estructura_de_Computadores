const int inputPin =7;
int input7=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin, INPUT);
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  input7 = digitalRead(inputPin);
  if(input7 == HIGH)
  {
    Serial.println("1");
  }
  else
  {
    Serial.println("0");
  }
  delay(100);
}
