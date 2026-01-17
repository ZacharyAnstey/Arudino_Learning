// This is code to turn on two LED lights 

void setup() {
  // put your setup code here, to run once:

pinMode(12,OUTPUT); // Telling the arduino which power pin to use. 
pinMode(8,OUTPUT); // Using a second power output 

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(12,HIGH); // Turn the pin on ( turn light on)
delay(1000);
digitalWrite(8,HIGH); // Turn the pin on (Turn second light on)
delay(1000); // Weight 1 second 
digitalWrite(12,LOW); // Turn the pin off ( turn light off)
delay(1000);
digitalWrite(8,LOW); // Turn the pin off (turn second light off)
delay(1000); // Weight another second
}
