 void setup()
{
 pinMode(12, OUTPUT); 
}
 void loop()
{
 tone(12,500);
 delay(1000);        
 noTone(12);     
 delay(1000);        
}
