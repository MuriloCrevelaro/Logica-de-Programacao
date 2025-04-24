//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
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
  Serial.println("|        LOPAL - EX_05         |");//Pular linha
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  Serial.println("Qual a medida em centimetros");
  while(! Serial.available());
  C = Serial.parseFloat();
  
  P = float(C) * float(2.54);
  
  Serial.println("Sua medida em polegadas eh: " + String(P));
  delay (1000);
}