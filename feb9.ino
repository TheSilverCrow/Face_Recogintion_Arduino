

void setup() { 
  Serial.begin(9600); //initialize serial COM at 9600 baudrate
  pinMode(13, OUTPUT); //make the LED pin (13) as output
  digitalWrite (13, HIGH);
  

}
 
void loop() {

if (Serial.available())
{
  Serial.print(Serial.read());
  switch( Serial.read())
  {
      case 0 : digitalWrite(13,HIGH);
               break;
      default: digitalWrite(13,LOW);  
               break;  
  }

  
}
  
  
}
