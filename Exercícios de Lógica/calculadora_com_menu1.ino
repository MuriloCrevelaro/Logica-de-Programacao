// C++ code
//

float n, n2, r = 0;
int c = 0;
int repetir = 0;
void setup()
{
  Serial.begin(9600);
  
  //Jeito que a professora fez
  //É para estar no void setup mesmo, é para repitir somente uma vez(ao não ser que queiram).
  do{
      Serial.println("----------------------------------------------");
      Serial.println();
      Serial.println("Bem-vindo(a) calculador mega inteligente :p!!!");
      Serial.println();
      Serial.println("----------------------------------------------");

      Serial.println("Agora, para realizar a operacao, digite o primeiro numero");
      while(!Serial.available());
      n = Serial.parseFloat();

      Serial.println("Agora, para realizar a operacao, digite o segundo numero");
      while(!Serial.available());
      n2 = Serial.parseFloat();
  
        Serial.println("Escolha um tipo de conta");
        Serial.println("1: Soma");
        Serial.println("2: Subtracao");
        Serial.println("3: Multiplicacao");
        Serial.println("4: Divisao");

      while(!Serial.available());
      c = Serial.parseInt();
    
    //Fazendo com switch
    //jeito que a professora fez
     switch(c){
       case 1:
       r = n + n2;
      Serial.println("WOW!!! O resultado foi: " + String(r));
      break;
      
       case 2:
        r = n - n2;
      Serial.println("WOW!!! O resultado foi: " + String(r));
      break;
      
       case 3:
       r = n * n2;
      Serial.println("WOW!!! O resultado foi: " + String(r));
      break;
      
       case 4:
        r = n + n2;
      Serial.println("WOW!!! O resultado foi: " + String(r));
      break;
      
      default:
       Serial.println("Opcao invalida.");
    }
    
    //VERIFICANDO A ESCOLHA DA OPERAÇÃO(que no caso e "c")
    //Fazendo com if
    /*
    if(c == 1){
      r = n + n2;
      Serial.println("WOW!!! O resultado foi: " + String(r));
    } 
     
    if(c == 2){
      r = n - n2;
      Serial.println("WOW!!! O resultado foi: " + String(r));
    } 
    
    if(c == 3){
      r = n * n2;
      Serial.println("WOW!!! O resultado foi: " + String(r));
    } 
    
    if(c == 4){
      r = n + n2;
      Serial.println("WOW!!! O resultado foi: " + String(r));
    } else {
      Serial.println("WOW!!! Voce e um incompetente que nao sabe diferenciar numeros");
    }
    Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(! Serial.available());
    
    if(Serial.readString() == "s"){
      repetir++;
    }else{
     repetir = 0;
      Serial.println("Ate breve, obrigado por usar a calculadora inteligente");
      Serial.println("Caso queira voltar, reinicie o sistema.");
    }
  }
  while(repetir != 0);
  
}
*/
void loop()
{
    //Jeito que eu fiz.
        /* Serial.println("----------------------------------------------");
      Serial.println();
      Serial.println("Bem-vindo(a) calculador mega inteligente :p!!!");
      Serial.println();
      Serial.println("----------------------------------------------");

      Serial.println("Agora, para realizar a operação, digite o 1º numero");
      while(!Serial.available());
      n = Serial.parseFloat();

      Serial.println("Agora, para realizar a operação, digite o 2º numero");
      while(!Serial.available());
      n2 = Serial.parseFloat();
  
        Serial.println("Escolha um tipo de conta");
        Serial.println("1: Soma");
        Serial.println("2: Subtracao");
        Serial.println("3: Multiplicacao");
        Serial.println("4: Divisao");

      while(!Serial.available());
      c = Serial.parseInt();
      
      	  switch(c){
          case 1:
          Serial.println("Voce escolheu: Soma");
          r = n + n2;
          Serial.println("O resultado e: " + String(r));
          break;
          case 2:
          Serial.println("Voce escolheu: Subtracao");
          r = n - n2;
          Serial.println("O resultado e: " + String(r));
          break;
          case 3:
          Serial.println("Voce escolheu: Multiplicacao");
          r = n * n2;
          Serial.println("O resultado e: " + String(r));
          break;
          case 4:
          Serial.println("Voce escolheu: Divisao");
          r = n / n2;
          Serial.println("O resultado e: " + String(r));
          break;
          default:
            Serial.println("Conta nao computada");
  }
  
  */
  
    delay(2000);
  
  }