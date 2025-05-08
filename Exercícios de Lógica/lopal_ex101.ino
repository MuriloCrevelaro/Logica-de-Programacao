/*Elabore um programa para cálculo de preços de produtos que solicite o preço de
compra do produto e o percentual a ser aplicado em cima desse valor para a venda. Calcular o preço do produto solicitando o preço
Calcule e exiba o preço de venda do produto. Se o percentual a ser aplicado for
inferior a 50%, exiba uma mensagem informando ao usuário que o produto será
vendido com uma margem muito pequena de lucro.
*/

float pv = 0;
float pc = 0;
float pa = 0;

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
  
  Serial.println("Qual o presso do produto");
  while (!Serial.available());
  pc = Serial.parseFloat();
    
  Serial.println("Qual o valor do percentual a ser aplicado");
  while (!Serial.available());
  pa = Serial.parseFloat();
    
 
    
    pv = pc + (pc / 100 * pa);
  
  	Serial.println("O valor do produto eh: R$" + String(pc));
  	Serial.println("O percentual eh:" + String(pa));
  	Serial.println("Preco de venda: R$" + String(pv));
    
    if(pa < 50){
    Serial.println("O produto sera vendido com uma margem muito pequena de lucro");
    } 
  
  
  delay(4000);
  
  Serial.println();
  Serial.println();
}