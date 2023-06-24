int rled = 11;
void setup() 
{
  pinMode(rled,OUTPUT);
}
void loop() 
{
  for(int i=0; i<6; i++){
    digitalWrite(rled,HIGH);
    delay(1000);
    digitalWrite(rled,LOW);
    delay(1000);

  }
  delay(5000);
 }
  

