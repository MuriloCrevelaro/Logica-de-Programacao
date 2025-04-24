//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

float P = 0;
float C = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        LOPAL - EX_06         |");//Pular linha
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  Serial.println("Qual a medida em polegadas");
  while(! Serial.available());
  P = Serial.parseFloat();
  
  C = float(P) / float(2.54);
  Serial.println(C);
  
  Serial.println("Sua medida em centimetros eh: " + String(C, 4));
  delay (1000);
}