String overflow;


void setup() {
  // put your setup code here, to run once:
  for (int i; i<1024; i++)
  {
    if(i<=255)
    {
      EEPROM.write(i,i);
    }
    else
    {
      EEPROM.write(i, i-255);
    }
  }
}
 
