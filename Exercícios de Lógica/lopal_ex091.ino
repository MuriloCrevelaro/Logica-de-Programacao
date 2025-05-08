/*Uma empresa decide dar aumento de 30% aos funcionários cujo salário é inferior a
500 reais. Escreva um programa que receba o salário de um funcionário e imprima o
valor do salário reajustado ou uma mensagem caso o funcionário não tenha direito a
aumento.
*/

int S = 0;
int S30 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual e o seu salario");
  while(! Serial.available());
  S = Serial.parseInt();

    S30 = S * 1.30;
    
  if(S < 500){
  Serial.println("Seu salario tera um almeto de 30%");
  Serial.println("Seu salario agora e de: R$ " + String(S30));
  } else {
  Serial.println("Seu salario nao tera um almeto de 30%");
  Serial.println("Seu salario e de: R$ " + String(S));
  } 
  
}