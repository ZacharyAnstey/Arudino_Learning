void setup() {
  // put your setup code here, to run once:

pinMode(12,OUTPUT); // Telling the arduino which power pin to use. 


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(12,HIGH); // Turn the pin on ( turn light on)
delay(1000); // Weight 1 second 
digitalWrite(12,LOW); // Turn the pin off ( turn light off)
delay(1000); // Weight another second
}
