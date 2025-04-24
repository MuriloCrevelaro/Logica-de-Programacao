// Faça um programa que receba um número e exiba o seu dobro.

float numero = 0;
float resultado = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        LOPAL - EX_03         |");//Pular linha
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  Serial.println();
  
  Serial.println("Digite sua numero");
  while(! Serial.available() );
  numero = Serial.parseInt();
  
  float(resultado) = 2 * float(numero);
    
  Serial.println( "Seu numero e: " + String(numero));
  Serial.println( "Seu numero dobrado e: " + String(resultado));
}