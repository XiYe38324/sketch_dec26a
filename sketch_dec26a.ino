void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void ShortLight()
{
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(200);
}
void LongLight()
{
  digitalWrite(13,HIGH);
  delay(900);
  digitalWrite(13,LOW);
  delay(200);
}
void loop()
{
  char flag;
 //while(Serial.available()>0)
 //{
 //  myString+=char(Serial.read());
 //  delay(2);
 //}
 // char myChar = 'B';
 //for(int i = 0;i<myString,length();i++）
 //{
 // myChar[i] = myString[i];
   String myString = "HELLO";
   for(int i = 0;i<myString.length();i++)
   {
    flag = myString[i];
    switch(flag)
    {
      case'A'：
      ShortLight();
      LongLight();
      delay(400);
      break;
      case'B'：
      LongLight();
      ShortLight();
      ShortLight();
      ShortLight();
      delay(400);
      break;
      case'C'：
      LongLight();
      ShortLight();
      LongLight();
      ShortLight();
      delay(400);
      break;
      case'D'：
      LongLight();
      ShortLight();
      ShortLight();
      delay(400);
      break;
      case'E'：
      ShortLight();
      delay(400);
      break;
      case'F'：
      ShortLight();
      ShortLight();
      LongLight();
      ShortLight();
      delay(400);
      break;
      case'G'：
      LongLight();
      LongLight();
      ShortLight();
      delay(400);
      break;
      case'H'：
      ShortLight();
      ShortLight();
      ShortLight();
      ShortLight();
      delay(400);
      break;
      case'I'：
      ShortLight();
      ShortLight();
      delay(400);
      break;
      case'J'：
      ShortLight();
      LongLight();
      LongLight();
      LongLight();
      delay(400);
      break;
      case'K'：
      LongLight();
      ShortLight();
      LongLight();
      delay(400);
      break;
      case'L'：
      ShortLight();
      LongLight();
      ShortLight();
      ShortLight();
      delay(400);
      break;
      case'M'：
      LongLight();
      LongLight();
      delay(400);
      break;
      case'N'：
      LongLight();
      ShortLight();
      delay(400);
      break;
      case'O'：
      LongLight();
      LongLight();
      LongLight();
      delay(400);
      break;
      case'P'：
      ShortLight();
      LongLight();
      LongLight();
      delay(400);
      break;
      case'Q'：
      LongLight();
      LongLight();
      ShortLight();
      LongLight();
      delay(400);
      break;
      case'R'：
      ShortLight();
      LongLight();
      ShortLight();
      delay(400);
      break;
      case'S'：
      ShortLight();
      ShortLight();
      ShortLight();
      delay(400);
      break;
      case'T'：
      LongLight();
      delay(400);
      break;
      case'U'：
      ShortLight();
      ShortLight();
      LongLight();
      delay(400);
      break;
      case'V'：
      ShortLight();
      ShortLight();
      ShortLight();
      LongLight();
      delay(400);
      break;
      case'W'：
      ShortLight();
      LongLight();
      LongLight();
      delay(400);
      break;
      case'X'：
      LongLight();
      ShortLight();
      ShortLight();
      LongLight();
      delay(400);
      break;
      case'Y'：
      LongLight();
      ShortLight();
      LongLight();
      LongLight();
      delay(400);
      break;
      
    }
   }
