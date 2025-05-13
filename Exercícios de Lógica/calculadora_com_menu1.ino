int escolhaDaOperacao;
	float r = 0;
int contador = 0;
int repetir = 0;
/*      ↑  void subtrair2(float n1Param, float n2Param);
        |   {Serial.println("WOW!!! o resultado foi: " + String(r));}
        |
        |  // Se você usar somente o subtrair2 ele vai fazer o println, pois ele está no
        |     "codigo" dele.
		|
        |
	    | 	 Nesse caso o n3 e n4 são usados somente dentro de somar
		 \ 	 eles não vão conseguir ser utilizados no codigo, você teria que 
		  \_ commitar ele ali em cima. Os dois valores tem que ter um valor agora ou
             depoius no codigo*/
//float somar(float n3, int n4 = 0){
// O n3 é considerado um valor obrigatorio pois ele não tem um valor definido, o n4 é considerado
// opcional pois ele já tem um valor atribuido.
 //return (n1 + n2 + n3 + n4);

float somar(float n1, float n2, float n3 = 0){
// precisa pegar os valores da variavel n1 e n2
//Criar um parametro n3 que seja opciona
  return(n1 + n2 + n3);//se não por valor inicial aos parametros, eles tornal obrigatorios
}
float subtracao(float n1, float n2, float n3 = 0){
  return(n1 - n2 - n3);
}
float multiplicacao(float n1, float n2, float n3 = 1){
   return(n1 * n2 * n3);
}
float divisao(float n1, float n2, float n3 = 1){
   return(n1 / n2 / n3);
}

void setup()
{
  
  Serial.begin(9600);
  float n1b = 0.0;
  float n2b = 0.0;
  
   do{
     
     
     Serial.println();
     Serial.println();
     Serial.println();
    Serial.println("------------------------------------------------");
    Serial.println("|                                              |");
    Serial.println("|Bem-vindo(a) calculador mega inteligente :p!!!|");
    Serial.println("|                                              |");
    Serial.println("------------------------------------------------");
    
     Serial.println();
    Serial.println("Agora, digite o primeiro numero:");
    while(!Serial.available ()){}
    n1b = Serial.parseFloat();

    Serial.println();
    Serial.println("Agora, digite o segundo numero:");
    while(!Serial.available ()){}
    n2b = Serial.parseFloat();
     
     Serial.println();
     Serial.println();
     Serial.println("Agora, escolha uma das opcoes/operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");  
    Serial.println("3 - Multiplicar");
    Serial.println("4 - Dividir"); 


    while(!Serial.available ()){}//espera o usúario digitar


    escolhaDaOperacao = Serial.parseInt();//armazena o que o usúario digitou na variável
      
    if(escolhaDaOperacao != 1){}// só entra no corpo do if se a condição for verdadeira 
    else if(escolhaDaOperacao == 2){}// só entra no corpo do if se a condição for verdadeira
    else if(escolhaDaOperacao == 3){}// só entra no corpo do if se a condição for verdadeira 
    else if(escolhaDaOperacao == 4){}// só entra no corpo do if se a condição for verdadeira 

     Serial.println();
    
    switch(escolhaDaOperacao){
      case 1:
      // 1a opção - float r = somar()
      // 1a opção - Serial.println("WOW!!! o resultado foi: " + String(r));
      
      	float r;
      //Ela está querendo dizer que o valor de n3 mudou para 10 e n4 para 5
      //1a opção:
        r = somar(n1b, n2b);
        Serial.println("WOW!!! o resultado foi: " + String(r));
      
      // 2a opção - Serial.println("WOW!!! o resultado foi: " + String(somar()));
      break;
      
      case 2:

      r = subtracao(n1b, n2b);
      Serial.println("WOW!!! o resultado foi: " + String(r));
      break;
      
      case 3:

      r = multiplicacao(n1b, n2b);// só entra no corpo do if se a condição for verdadeira 
      Serial.println("WOW!!! o resultado foi: " + String(r));  
      break;
      
      case 4:

      r = divisao(n1b, n2b);
      Serial.println("WOW!!! o resultado foi: " + String(r));       
      break;
      
      
      default:
       Serial.println("Opçao inválida");
      
      
      }
    
    Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(! Serial.available());//espera o usúario digitar


    if(Serial.readString() == "s"){
      repetir++;
    }else{
     repetir = 0;
      Serial.println();
      Serial.println();
      Serial.println("Ate breve, obrigado por usar a calculadora inteligente");
      Serial.println("Caso queira voltar, reinicie o sistema.");
    }
  }
  while(repetir != 0);
  
}

void loop()
 {
  //sem codigo]]
 }
  