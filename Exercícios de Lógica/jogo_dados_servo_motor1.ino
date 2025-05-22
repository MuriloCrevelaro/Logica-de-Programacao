// C++ code
//
#include <Servo.h>
Servo motor; 

int ledVerde = 7;
int ledVermelho = 10;
int led4 = 4;
int led3 = 3;
int led2 = 2;
int R = 0;

void espera(int pontos = 5, int t = 700){
  for(int i = 0; i <= pontos; i++){
    Serial.print(".");
    delay(t);
  }
}
int n = 0;
void cabecalho(){
  Serial.println(" --- PROGRAMA JOGO DE DADOS --- ");
  Serial.println();
  Serial.println();
  delay(500);
}

void setup()
{
  Serial.begin(9600);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led2, OUTPUT);
  randomSeed(analogRead(0));//indica e normaliza a porta randômica para evitar pega o mesmo valor
  motor.attach(12);
  motor.write(0);
}
void loop()
{
  
  
  cabecalho();
  
  Serial.println("Digite um palpite de 1 a 6:");
  while(!Serial.available());
  n = Serial.parseInt();
  
  
   //Sorteia o dado - sorteia um número randômico/aleatório de 1 até 7-1, ou seja,6
  int nS = random(1,2);// número aleatório de 1 a 6
  
  
  Serial.print("Sorteando dado");
  espera();
  
  Serial.println();						
  //exibir o palpite do usuário
  Serial.println("Seu palpite: " + String(n));
  //exibir onúmero sorteado
  Serial.println("Numero do Dado: " + String(nS));
  
  if(n == nS){
    R++;
    digitalWrite(ledVerde, HIGH);
    Serial.println("Parabens! Voce foi certeiro");
    Serial.println("Reiniciando o programa ...");
    delay(1000);
    digitalWrite(ledVerde, LOW);
  }else {
    digitalWrite(ledVermelho, HIGH);
    Serial.println("Que pena, tente outra vez!");
    Serial.println("Reiniciando o programa ...");
    delay(1000);
    digitalWrite(ledVermelho, LOW);
  }
  if(R == 1){
   digitalWrite(led4, HIGH);
  }else if(R == 2){
   digitalWrite(led3, HIGH);
  }else if(R == 3){
   digitalWrite(led2, HIGH);
    motor.write(90);
  delay(1500);
    Serial.println("Boa!!!");
    Serial.println("Caso queira jogar de novo, reinicie.");
  }

   Serial.println();
   Serial.println();
  delay(4000);
  
}