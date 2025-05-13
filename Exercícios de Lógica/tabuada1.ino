// C++ code
//

int t = 0;
int r = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Bem-vindo(a) ! :)");
  Serial.println("Digite qual tabuada voce deseja ver:");
  while(!Serial.available());
  t = Serial.parseInt();
  
  for(int c = 1; c <= 10; c++){
   r = c * t;
   Serial.println(String(t) + " X " + String(c) + " = " + String(r));
  }
  
  delay(4000);
}