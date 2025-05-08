/* Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.
*/

int N = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero inteiro");
  while(!Serial.available());
  N = Serial.parseInt();
    
  if(N > 0)
  Serial.println("Seu numero e positivo");
    
  if(N < 0)
  Serial.println("Seu numero e negativo");
    
  if(N == 0)
  Serial.println("O baitola o 0 nao e nem positivo em nem negativo");
  
  delay(1000);
  
  Serial.println();
  Serial.println();
}