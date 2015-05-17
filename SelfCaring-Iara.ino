/* 
  SelfCaring-Iara
  
  Descriçao: Projeto cujo objetivo visa monitorar, automatizar e 
  cuidar de uma planta por intermedio da tecnologia.
  
  Este codigo pertence ao dominio publico. Use-o para seus proprios
  projetos e afins!
  
  Para informaçoes, updates e novidades sobre este projeto,
  acompanhe: https://github.com/MilvoG/SelfCaring-Iara
  
  Modificado em: 17/05/2015
  
  Por: Milvo Gabriel P. Di Domenico
  
*/
void setup()
{
  Serial.begin(9600);
  int pin;
  for (pin=2; pin<=6; pin++)
  {
    pinMode(pin, OUTPUT);
  }
}

void loop()
{
  int pin;
  
  int sensorValue = analogRead(A0);
  
  Serial.println(sensorValue);
  
  while (sensorValue >= 850)
  {
    pin = 6;
    digitalWrite(pin, HIGH);
    sensorValue = analogRead(A0);
    Serial.println(A0);
  }
  ledOff();
   
  
  while (sensorValue < 850 && sensorValue >= 700)
  {
    for (pin=5; pin<=6; pin++)
    digitalWrite(pin, HIGH);
    sensorValue = analogRead(A0);
    Serial.println(A0);
  }
  ledOff();
  
  while (sensorValue < 700 && sensorValue >= 550)
  {
    for (pin=4; pin<=6; pin++)
    digitalWrite(pin, HIGH);
    sensorValue = analogRead(A0);
    Serial.println(A0);
  }
  ledOff();
  
  while (sensorValue < 550 && sensorValue >= 400)
  {
    for (pin=3; pin<=6; pin++)
    digitalWrite(pin, HIGH);
    sensorValue = analogRead(A0);
    Serial.println(A0);
  }
  ledOff();
  
  while (sensorValue < 400)
  {
    for (pin=2; pin<=6; pin++)
    digitalWrite(pin, HIGH);
    sensorValue = analogRead(A0);
    Serial.println(A0);
  }
  ledOff();
  
}

void ledOff()
{
  int pin;
  for (pin=2; pin<=6; pin++)
  {
    digitalWrite(pin, LOW);
  }
}
