const int LED=9;
void setup()
{
pinMode (LED, OUTPUT); 
}
void loop() {
  for (int i =0; i<1000; i+=100){
    digitalWrite(LED, HIGH); 
    delay(i);
    digitalWrite(LED, LOW);
    delay(i);
    }
}
