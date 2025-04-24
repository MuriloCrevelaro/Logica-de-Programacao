//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

int AnoNascimento = 0;
int AnoAtual = 0;
int idade = 0;
long idadeSemana = 0;

void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  //Cabeçalho - 2 pipes + 30 linhas
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        LOPAL - EX_02         |");//Pular linha
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  Serial.println();
    
  //Entrada
  Serial.println("Digite sua ano de nasciento");
  while(! Serial.available() );
  AnoNascimento = Serial.parseInt();// É considerado um texto mesmo sendo um número
  								    // Converte o texto que o usuario digitar em inteiro
  Serial.println("Digite o ano de hoje");
  while(! Serial.available() );
  AnoAtual = Serial.parseInt();
  
  //Processamento
  idade =  AnoAtual - AnoNascimento;
  idadeSemana = idade * 52;
  //Saida
  Serial.println( "Sua idade em semanas: " + String(idadeSemana) );
  Serial.println( "Sua idade: " + String(idade) );
  
  delay(10000);	
  
}
