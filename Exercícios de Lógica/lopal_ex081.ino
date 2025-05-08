/*Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
Ao final exiba o nome, o cargo e o salário desse funcionário.
*/
String nome = "Cleber", cargo = "Secretário";
float S = 0;
float S10 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{

  Serial.println("Qual o nome do funcionario");
  while(! Serial.available());
  nome = Serial.readString();
  Serial.println("Qual o cargo de " + nome);
  while(! Serial.available());
  cargo = Serial.readString();
  Serial.println("Qual o salario de " + nome);
  while(! Serial.available());
  S = Serial.parseFloat();
  
  
  
  S10 = S * 1.10;
  
  Serial.println();
  Serial.println();
  Serial.println("Relatorio");
  Serial.println();
  Serial.println("--------------------------------------------");
  
  Serial.println("Seu nome eh: " + nome);
  Serial.println("Seu cargo eh: " + cargo);
  
  if(S < 1000){
    Serial.println("Salario e abaixo de 1000.");
    Serial.println("Entao ele tera 10% de aumento: R$" + String(S10));
 } else {
    Serial.println("Seu salario é maior, ou igual, a 1000 reais");
    Serial.println("Entao ele nao tera aumento: R$" + String(S));
  }
  
  Serial.println("-------------------------------------------");
  Serial.println("Digite uma letra + <Enter> para continuar..."); //gambiarra para fazer o programa parar
  while(! Serial.available());
  Serial.println();
  Serial.println();
  
  Serial.read();//limpa o chace do \n - o <Enter>
  }