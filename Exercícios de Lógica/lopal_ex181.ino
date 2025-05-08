/* Faça um programa que receba um código de origem de um produto 
e informe sua procedencia conforme a lista abaixo

Código de origem 		Procedência
1 							Sul
2 						   Norte
3 				  	   	   Leste
4 					 	   Oeste
5 ou 6 				 	  Nordeste
7, 8 ou 9 	 		 	  Sudeste
10 até 20 				Centro-Oeste
acima de 20 	  Código ainda sem definição
*/
int n = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual o codigo de origem do produto");
  while(!Serial.available());
  n = Serial.parseInt();

  if(n <= 0){
   Serial.println("Para de gracinha");
  }else if(n == 1){
    Serial.println("Procedencia: Sul");
  }else if(n == 2){
    Serial.println("Procedencia: Leste");
  }else if(n == 3){
    Serial.println("Procedencia: Oeste");
  }else if(n == 4){
    Serial.println("Procedencia: Norte");
  }else if(n == 5 || n == 6){
    Serial.println("Procedencia: Nordeste");
  }else if(n <= 9){
    Serial.println("Procedencia: Sudeste");
  }else if(n >= 10 && n <= 20){
    Serial.println("Procedencia: Centro-Oeste");
  }else {
  Serial.println("Procedencia: Codigo ainda sem definicao");
  }
  
  delay(5000);
 
 Serial.println();
 Serial.println();
}