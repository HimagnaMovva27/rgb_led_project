int redpin=13;
int bluepin=12;
int greenpin=11;
void setup()
{
pinMode(redpin,OUTPUT);
pinMode(bluepin,OUTPUT);
pinMode(greenpin,OUTPUT);
}
void loop()
{
digitalWrite(redpin,HIGH);
delay(1000);
digitalWrite(redpin,LOW);
delay(1000);
digitalWrite(bluepin,HIGH);
delay(1000);
digitalWrite(bluepin,LOW);
delay(1000);
digitalWrite(greenpin,HIGH);
delay(1000);
digitalWrite(greenpin,LOW);
delay(1000);
}