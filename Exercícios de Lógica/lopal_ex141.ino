/* Faça um programa receba dois valores
e imprima qual é o maior número digitado.
*/

float n1 = 0;
float n2 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha o primeiro numero");
  while(!Serial.available());
  n1 = Serial.parseInt();
  
  Serial.println("Escolha o segundo numero");
  while(!Serial.available());
  n2 = Serial.parseInt();
  
   if(n1 == n2){
   Serial.println("O primeiro numero e o segundo numero sao iguais");
   }
  if(n1 > n2)
  {
    Serial.println("O primeiro numero e maior");
  } 
  if(n1 < n2){
    Serial.println("O  numero  e maior");
  }
  
 delay(4000);
}