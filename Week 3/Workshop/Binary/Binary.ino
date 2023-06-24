int rled = 11;
int gled=12;
int aled=8;
int oled=9;
void setup() 
{
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  pinMode(aled,OUTPUT);
  pinMode(oled,OUTPUT);
}
void loop() 
{
  digitalWrite(rled,HIGH);
  digitalWrite(gled,LOW);
  digitalWrite(aled,LOW);
  digitalWrite(oled,LOW);
  delay(3000);
  digitalWrite(rled,HIGH);
  digitalWrite(gled,LOW);
  digitalWrite(aled,LOW);
  digitalWrite(oled,HIGH);
  delay(500);
  digitalWrite(rled,LOW);
  digitalWrite(gled,HIGH);
  digitalWrite(aled,LOW);
  digitalWrite(oled,LOW);
  delay(1800);
  digitalWrite(rled,LOW);
  digitalWrite(gled,LOW);
  digitalWrite(aled,HIGH);
  digitalWrite(oled,LOW);
  delay(500);

 }
  

