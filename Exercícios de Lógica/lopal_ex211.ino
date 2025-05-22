/*Faça um programa que receba 15 números inteiros e imprima na tela
a somatória dos 15 números.
*/
int n = 0;
int ns = 0;



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  for(int i = 0; i <= 14; i++){
  Serial.println("Insira o " + String(i + 1) + "o numero");
   while(!Serial.available());
   n = Serial.parseInt();
   ns += n;
  }
  
  Serial.println("A soma dos numeros escolhidos eh:" + String(ns));
  

}