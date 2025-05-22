//Faça um programa que imprima os números ímpares de 0 a 50;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int n = 0; n <= 50; n ++){
    if(n % 2 == 1){
      Serial.println(n);
    }
  }
  delay(4000);
}