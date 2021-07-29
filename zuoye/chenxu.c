void setup()
{
  int i=0;
  for(i=2;i<14;i++)
  {
    pinMode(i, OUTPUT);
  }
}
void loop()
{
  int i=0,j=0,k=0;
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  for(i=0;i<100;i++)
  {
    j=i/10;
    k=i%10;
    switch(j)
    {
      case 0:
      {
         digitalWrite(7,LOW);
    	 digitalWrite(8,LOW);
    	 digitalWrite(9,LOW);
    	 digitalWrite(10,LOW);
         break;
      }
      case 1:
      {
         digitalWrite(7,HIGH);
    	 digitalWrite(8,LOW);
    	 digitalWrite(9,LOW);
    	 digitalWrite(10,LOW);
         break;
      }
      case 2:
      {
         digitalWrite(7,LOW);
    	 digitalWrite(8,HIGH);
    	 digitalWrite(9,LOW);
    	 digitalWrite(10,LOW);
         break;
      }
      case 3:
      {
         digitalWrite(7,HIGH);
    	 digitalWrite(8,HIGH);
    	 digitalWrite(9,LOW);
    	 digitalWrite(10,LOW);
         break;
      }
      case 4:
      {
         digitalWrite(7,LOW);
    	 digitalWrite(8,LOW);
    	 digitalWrite(9,HIGH);
    	 digitalWrite(10,LOW);
         break;
      }
      case 5:
      {
         digitalWrite(7,HIGH);
    	 digitalWrite(8,LOW);
    	 digitalWrite(9,HIGH);
    	 digitalWrite(10,LOW);
         break;
      }
      case 6:
      {
         digitalWrite(7,LOW);
    	 digitalWrite(8,HIGH);
    	 digitalWrite(9,HIGH);
    	 digitalWrite(10,LOW);
         break;
      }
      case 7:
      {
         digitalWrite(7,HIGH);
    	 digitalWrite(8,HIGH);
    	 digitalWrite(9,HIGH);
    	 digitalWrite(10,LOW);
         break;
      }
      case 8:
      {
         digitalWrite(7,LOW);
    	 digitalWrite(8,LOW);
    	 digitalWrite(9,LOW);
    	 digitalWrite(10,HIGH);
         break;
      }
      case 9:
      {
         digitalWrite(7,HIGH);
    	 digitalWrite(8,LOW);
    	 digitalWrite(9,LOW);
    	 digitalWrite(10,HIGH);
         break;
      }
    }
    switch(k)
    {
      case 0:
      {
         digitalWrite(3,LOW);
    	 digitalWrite(4,LOW);
    	 digitalWrite(5,LOW);
    	 digitalWrite(6,LOW);
         delay(1000);
         break;
      }
      case 1:
      {
         digitalWrite(7,HIGH);
    	 digitalWrite(8,LOW);
    	 digitalWrite(9,LOW);
    	 digitalWrite(10,LOW);
         delay(1000);
         break;
      }
      case 2:
      {
         digitalWrite(3,LOW);
    	 digitalWrite(4,HIGH);
    	 digitalWrite(5,LOW);
    	 digitalWrite(6,LOW);
         delay(1000);
         break;
      }
      case 3:
      {
         digitalWrite(3,HIGH);
    	 digitalWrite(4,HIGH);
    	 digitalWrite(5,LOW);
    	 digitalWrite(6,LOW);
         delay(1000);
         break;
      }
      case 4:
      {
         digitalWrite(3,LOW);
    	 digitalWrite(4,LOW);
    	 digitalWrite(5,HIGH);
    	 digitalWrite(6,LOW);
         delay(1000);
         break;
      }
      case 5:
      {
         digitalWrite(3,HIGH);
    	 digitalWrite(4,LOW);
    	 digitalWrite(5,HIGH);
    	 digitalWrite(6,LOW);
         delay(1000);
         break;
      }
      case 6:
      {
         digitalWrite(3,LOW);
    	 digitalWrite(4,HIGH);
    	 digitalWrite(5,HIGH);
    	 digitalWrite(6,LOW);
         delay(1000);
         break;
      }
      case 7:
      {
         digitalWrite(3,HIGH);
    	 digitalWrite(4,HIGH);
    	 digitalWrite(5,HIGH);
    	 digitalWrite(6,LOW);
         delay(1000);
         break;
      }
      case 8:
      {
         digitalWrite(3,LOW);
    	 digitalWrite(4,LOW);
    	 digitalWrite(5,LOW);
    	 digitalWrite(6,HIGH);
         delay(1000);
         break;
      }
      case 9:
      {
         digitalWrite(3,HIGH);
    	 digitalWrite(4,LOW);
    	 digitalWrite(5,LOW);
    	 digitalWrite(6,HIGH);
         delay(1000);
         break;
      }
    }
    if ( digitalRead(2) == HIGH )
    {
      i=99;
    }
  }
}
