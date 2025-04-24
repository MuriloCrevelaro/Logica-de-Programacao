//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

String nome = "Cleber";
String cargo = "Secretário";
float S = 0;
float S10 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        LOPAL - EX_07         |");//Pular linha
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  Serial.println("Qual o seu nome");
  while(! Serial.available());
  nome = Serial.readString();
  Serial.println("Qual o seu cargo");
  while(! Serial.available());
  cargo = Serial.readString();
  Serial.println("Qual o seu salario");
  while(! Serial.available());
  S = Serial.parseFloat();
  
  S10 = S * 1.10;
    
  Serial.println("Seu nome eh: " + String(nome));
  Serial.println("Seu cargo eh: " + String(cargo));
  Serial.println("Seu salario com 10% a mais eh: " + String(S10));
}