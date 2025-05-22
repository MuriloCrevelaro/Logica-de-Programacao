// Variáveis globais
/* Cria cada vetor tamanho 4 
   fazendo parte do mesmo cadastro
*/

String con[4];
int idade[4];
String emai[4];
  

void desenhaCabecalho()
{
  Serial.println("|------------------------------|");
  Serial.println("|          Bem vindo,          |");
  Serial.println("|      fassa seu cadastro      |");
  Serial.println("|        para entrar na        |");
  Serial.println("|    o nosso churrascaria      |");
  Serial.println("|------------------------------|");
  Serial.println();
  Serial.println();
  
  /*
  				OU
    Serial.println("CHURRACÃO DO ZÉ"); 
    Serial.println();
    Serial.println();
  */
}
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Fazer o cabeçalho
  desenhaCabecalho();
 
  
  //Cadastrar os dados
  for(int i = 0; i <= 1; i++){
    
    //Nome do úsuario
    Serial.println("Informe o " + String(i +1) + "o nome para cadastrar.");
    while(!Serial.available());
    con[i] = Serial.readString();
    
    //Idade 
    Serial.println("Informe sua idade de " + con[i] + ".");
    while(!Serial.available());
    idade[i] = Serial.parseInt();
    
    //Email
    Serial.println("Informe o seu e-mail de " + con[i] + ".");
    while(!Serial.available());
    emai[i] = Serial.readString();
    
  }
  
  //Exibir a lista de convidados
  //Obs: só vai para a festa se for maior de idade >= 18
  
  //criar um for, exibir o print cada um dos arrays
  //pular uma linha
  for(int i = 0; i <= 1;i++){
    if(idade[i] >= 18){
    Serial.println("Nome:" + con[i]);
    Serial.println("Idade" + String(idade[i]));
    Serial.println("Email" + emai[i]);
    Serial.println("Permissao para a festa:" + String(idade[i] >= 18 ? "OK" : "Menor de idade"));
    Serial.println("-----------------");
    Serial.println();
    /*
    if(idade[c] >= 18){
    Serial.println("Voce foi cadastrado");
    Serial.println("Nome:" + con[i]);
    Serial.println("Idade:"  + idade[i]);
    Serial.println("E mail:" + emai[i]);
    }else{
      Serial.println("Que pena. Nao foi cadastrado");
      Serial.println("Nome:"  + con[i]);
      Serial.println("Idade:" + idade[i]);
   	  Serial.println("E mail:" + emai[i]);*/
    }
  }
  
   delay(2000);
}