/*
  Created by: Leonardo Camp
  Github: github.com/leofrederiche
*/

int ENGINE = 11;
int LED = 13;

void setup()
{
  pinMode(ENGINE, OUTPUT);
  pinMode(LED, OUTPUT);
}

void blink(int TIME){
  digitalWrite(LED, HIGH);
  delay(TIME);
  digitalWrite(LED, LOW);
  delay(TIME);
}

void loop()
{
  int TIME = 500;
  
  for(TIME = 500; TIME > 100; TIME = TIME - 100){
  	blink(TIME);
  }
  
  for(TIME = 100; TIME > 10; TIME = TIME - 10){
  	blink(TIME);
  }
  
  analogWrite(ENGINE, 100);
  delay(5000);
  analogWrite(ENGINE, 0);
}
