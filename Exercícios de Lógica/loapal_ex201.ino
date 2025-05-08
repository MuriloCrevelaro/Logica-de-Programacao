/*Faça um programa que receba o nome, salário e código correspondente ao cargo do
funcionário e imprima o seu nome, salário, código, cargo, Percentual de aumento e
salário com aumento de acordo com o percentual da tabela abaixo:
Código Cargo Percentual
1 Escriturário 50%
2 Secretário 35%
3 Caixa 20%
4 Gerente 10%
5 Diretor O cargo não receberá

aumento
*/

String nome = "";
float S = 0;
int cCargo = 0;

// inicializar/carregar configurações iniciais no Arduino
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual o seu nome?");
  while(!Serial.available());
  nome = Serial.readString();
  
  Serial.println("Qual o seu salario?");
  while(!Serial.available());
  S = Serial.parseFloat();
  
  
  Serial.println("Qual o seu codigo correspondente ao seu cargo?");
  Serial.println("1: Escrituraria");
  Serial.println("2: Secretario");
  Serial.println("3: Caixa");
  Serial.println("4: Gerente");
  Serial.println("5: Diretor");
  
  while(!Serial.available());
  cCargo = Serial.parseInt();
  
  Serial.println("Nome: " + nome);
	

    switch(cCargo){
      case 1:
          S = S * 1.50;
      	  Serial.println("Cargo: Escrituraria");
          Serial.println("O seu salario atualizado e: R$" + String(S));
      break;
      case 2:
          S = S * 1.35;
      	  Serial.println("Cargo: Secretario");
          Serial.println("O seu salario atualizado e: R$" + String(S));
      break;
      case 3:
          S = S * 1.20;
      	  Serial.println("Cargo: Caixa");
          Serial.println("O seu salario atualizado e: R$" + String(S));
      break;
	  case 4:
          S = S * 1.10;
      	  Serial.println("Cargo: Gerente");
          Serial.println("O seu salario atualizado e: R$" + String(S));
      break ;
      case 5:
      	  Serial.println("Cargo: Diretor");
          Serial.println("O seu salario nao sera atualizado: R$" + String(S));
      break;
 	  default:
  		  Serial.println("Codigo de cargo nao computado");
}
  
  delay(4000);
  
}