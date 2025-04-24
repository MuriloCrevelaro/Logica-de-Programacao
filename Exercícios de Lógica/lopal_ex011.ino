// Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Variáveis
int idade = 0;//inicia a idade
int idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        LOPAL - EX_01         |");//Pular linha
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  //Entrada
  Serial.println("Digite sua idade");//pergunta a idade do usuário
  while(! Serial.available() );//Aguarde o usuário digitar(para o loop)
  idade = Serial.parseInt();// É considerado um texto mesmo sendo um número
  							// Converte o texto que o usuario digitar em inteiro
  
  //Processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idadeDias * 24;
  idadeMinutos = idadeHoras * 60;
  
  //Saída
  Serial.println( "Sua idade em meses: " + String(idadeMeses) );
  Serial.println( "Sua idade em dias: " + String(idadeDias) );
  Serial.println( "Sua idade em horas: " + String(idadeHoras) );
  Serial.println( "Sua idade em minutos: " + String(idadeMinutos) );
  
}