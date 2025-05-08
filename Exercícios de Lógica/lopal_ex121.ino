/* Faça um programa que receba um número do usuário e informe se este número é
par ou ímpar.
*/

int n = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha um numero");
  while (!Serial.available());
  n = Serial.parseInt();
  
  n = n % 2;
    
    if(n == 1) {
  Serial.println ("Seu numero e impar");
  }
  
  if(n == 0) {
  Serial.println("Seu numero e par");
  }
  
  delay(1000);
 
 Serial.println();
 Serial.println();
   
}