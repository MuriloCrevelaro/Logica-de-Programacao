/* Faça um programa que receba a idade de uma pessoa e classifique usando o
seguinte critério:
Idade					 Classificação
0 a 2 anos 				 Recém-Nascido
3 a 11 anos				    Criança
12 a 19 anos		 	  Adolescente
20 a 55 anos				 Adulto
Acima de 55 anos 			 Idoso
*/

int n = 0;

void setup()
{
  Serial.berin(9600);
}

void loop()
{
  Serial.println("Qual a sua idade em anos");
  while(!Seial.available());
  n = Serial.parseInt
    
    if(n <= 2){
    Seria.println("Voce e classificado como Recem-nascido")
  }else if(n >= 3 && n <= 11){
    Seria.println("Voce e classificado como criança")
  }else if(n <= 19 && n >= 12){
    Seria.println("Voce e classificado como adolecente")
  }else if(n <= 20 && n >= 55){
    Seria.println("Voce e classificado como Adulto")
  } else {
    Seria.println("Voce e classificado como idoso")
    Seria.println("kkkkkkkkkkkkkkkkkkkkkkkkkkk")
  }
  
  delay(4000)
}