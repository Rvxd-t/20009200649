// C++ code
//
int i=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  for(i=13;i>4;i--)
  {
  	digitalWrite(i, HIGH);
 	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(i, LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
  }
}
