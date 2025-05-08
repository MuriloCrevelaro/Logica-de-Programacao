/* Faça um programa que receba um número de usuário e exiba este número, apenas
se for par. Caso contrário informe apenas “DIGITE APENAS NÚMEROS PARES”.
*/

int n = 0;
int n1 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha um numero");
  while(!Serial.available());
  n = Serial.parseInt();
    
    n1 = n % 2;
    
  if(n1 == 0) {
  Serial.println("Seu numero e: " + String(n));
  } else {
  Serial.println("DIGITE APENAS NUMEROS PARES");
  }
  
  delay(5000);
 
 Serial.println();
 Serial.println();
}