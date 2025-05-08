/*Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/

//Não usei nada de exemplo(Não abri outro arquivo)

float n1 = 0;
float n2 = 0;
float m = 0;
float f = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual a primeira nota do aluno?");
  while(!Serial.available());
  n1 = Serial.parseFloat();
    
  Serial.println("Qual a segunda nota do aluno?");
  while(!Serial.available());
  n2 = Serial.parseFloat();
    
  Serial.println("Qual a frequencia do aluno?");
  while(!Serial.available());
  f = Serial.parseFloat();
    
    m = (n1 + n2) / 2;
  
  Serial.println("	Resolucao			");
  Serial.println("-------------------------------");
  Serial.println();
    
    if( m == 10){
     Serial.println("Parabens! Nota maxima!");
    } else if( m >= 6){
     Serial.println("Parabens! Aprovado.");
    }else if(m <= 6 && f < 75){
     Serial.print("Que pena!");
   } else {
     Serial.println("Que pena! Reprovado por nota!");
    }
  
  
   if( f >= 75){
     Serial.println("Parabens! A frequencia esta boa.");
   } else if(m <= 6 && f < 75){
     Serial.println(" O aluno foi reprovado por nota e fraquencia.");
   } else if( f < 75){
     Serial.println("Que pena! Foi reprovado por falta");
    }
  
  Serial.println();
  
  delay(4000);
  
  
  
  
  
  
  
  
  
}