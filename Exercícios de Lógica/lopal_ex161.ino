/* Uma empresa decide dar aumento aos funcionários de acordo com o seu cargo,
disposto na tabela abaixo:
Cargo 			% Aumento
Produção 		  6.5
Administrativo	  7.5
Diretoria	 	   12
De acordo com a tabela acima faça um programa que receba o cargo e o salário de
um funcionário e calcule e imprima o salário reajustado.
*/

String cargo = "";
String Producao = "";
String Administrativo = "";
String Diretoria = "";
float s = 0;
float sp = 0;
float sa = 0;
float sd = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual e o seu cargo?");
  while(! Serial.available());
  cargo = Serial.readString();
    
    
  Serial.println("Qual e o seu salario?");
  while(! Serial.available());
  s = Serial.parseFloat();
  
  sp = s * 1.065;
  sa = s * 1.75;
  sd = s * 1.12;
  
  if(cargo == Producao){
   Serial.println("O seu cargo e: " + cargo);
   Serial.println("O seu salario atualizado e: R$" + String(sp));
  } else if(cargo == Administrativo){
   Serial.println("O seu cargo e: " + cargo);
   Serial.println("O seu salario atualizado e: R$" + String(sa));
  } else if(cargo == Diretoria){
   Serial.println("O seu cargo e: " + cargo);
   Serial.println("O seu salario atualizado e: R$" + String(sd));
  } else {
  Serial.println("Voce tera seu salario normal");
  }
    delay(4000);
  
      Serial.println();
      Serial.println();
}