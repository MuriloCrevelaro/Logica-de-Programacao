//Os dois são a mesma coisa se você não estcrever nada eleconta como ""
 //String frutas[6] = {"","","","","",""};
  	String frutas[6];
	float pf[6];
    
void setup()
{
  Serial.begin(9600);

  Serial.println("**** Sacolao do Zeh ****");
  Serial.println();

  String frutas[6]{};                  //cria um vetor de tamanho 6 vazio
  float  precos[6]{};

  Serial.println("oh Zeh, bora cadastrar as frutas!");
  Serial.println();



  for(int i = 0; i <= 5; i++) {

    Serial.println("informe a " + String(i + 1) + "a Fruta");
    while (! Serial.available()); 
    frutas[i] = Serial.readString(); 

    Serial.println("informe o preco da " + frutas[i]); 
    while (! Serial.available());
    precos [i] = Serial.parseFloat();

  }

  for(int numeroFruta = 0; numeroFruta < 6; numeroFruta++ ) {
    Serial.println("a " + frutas[numeroFruta] + " custa por Kg: R$ " + precos[numeroFruta]);
    Serial.println();

  }
}


void loop()
{

}

  
 /* 
  for(int i = 0; i <= 2; i++){
    Serial.println(String(i + 1) + "a fruta" + frutas[i]);
  }
  
  
  Serial.println("informe a 1a Fruta");
  while(!Serial.available());
 fruta = Serial.readString();
  frutas[0] = fruta;//Guarda a resposta do usuário
    
  Serial.println("informe a 2a Fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  frutas[1] = fruta;
  
   Serial.println("informe a 3a Fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  frutas[2] = fruta;
    
     Serial.println("informe a 4a Fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  frutas[3] = fruta;
  
   Serial.println("informe a 5a Fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  frutas[4] = fruta;
    
     Serial.println("informe a 6a Fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  frutas[5] = fruta;
  */
