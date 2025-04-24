//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa
//IMC = peso / (altura * altura).

float IMC = 0;
float P = 0;
float A = 0;
String nome = "Murilo";

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        LOPAL - EX_04         |");//Pular linha
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  Serial.println("Qual o seu nome");
  while(! Serial.available() );
  nome = Serial.readString();
  
  Serial.println("Qual o seu peso");
  while(! Serial.available() );
  P = Serial.parseFloat();
  
  Serial.println("Qual a sua altura");
  while(! Serial.available() );
  A = Serial.parseFloat();
  
  IMC = float(P) / (float(A) * float(A));
    
  Serial.println("Seu nome e: " + String(nome));
  Serial.println("Seu IMC e: " + String(IMC));
  
  delay(1000);
  
}