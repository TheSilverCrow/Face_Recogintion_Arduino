int data;

void setup() 
{ 
  Serial.begin(9600); 
  pinMode(8, OUTPUT); 
  digitalWrite (8, LOW); //initially set to low
  Serial.println("Arduino.");
}
 
void loop() 
{
while (Serial.available())
  {
    data = Serial.read();
  }

  if (data == '0')
  digitalWrite (8, LOW);
  else {
  digitalWrite (8, HIGH);
  delay(10000);
  }
}
