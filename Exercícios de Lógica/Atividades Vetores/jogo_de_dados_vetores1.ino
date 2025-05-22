// C++ code
//
int n = 0;

void espera(int pontos = 5, int t = 700){
  for(int i = 0; i <= pontos; i++){
    Serial.print(".");
    delay(t);
  }
}

void cabecalho(){
  Serial.println(" --- PROGRAMA JOGO DE DADOS --- ");
  Serial.println();
  Serial.println();
  delay(500);
}

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//indica e normaliza a porta randômica para evitar pega o mesmo valor
}

void loop()
{
  
 cabecalho();

  //Perguntar ao usuário quantas vezas ele  quer jogar
  //criar os vetores baseados na quantidade de rodadas
  //jogar apenas essa quantidade (laço de repetição)
  Serial.println("Quantas vezes voce deseja jogar?");
  while(!Serial.available());
  int rodadas = Serial.parseInt();
  
  //cirar os arays de estatísticas para o relatório final
  //os vetores do tamanho da quantidade de jogadas
  int vPalp[rodadas];// a quantidade depende do numero de rodadas(o jogador que escolhe)
  int vResu[rodadas];
  
  for(int r = 0; r < rodadas; r++)
  {//aqui dentro, o jogo todo! 

    Serial.println("Digite um palpite de 1 a 6:");
    while(!Serial.available());
    n = Serial.parseInt();

    //Sorteia o dado - sorteia um número randômico/aleatório de 1 até 7-1, ou seja,6
    int nS = random(1,7);// número aleatório de 1 a 6
    
    //guardar os resultados para estatísticas
    vPalp[r] = n;
    vResu[r] = nS;

    Serial.print("Sorteando dado");
    espera();

    Serial.println();

    //exibir o palpite do usuário
    Serial.println("Seu palpite: " + String(n));
    //exibir onúmero sorteado
    Serial.println("Numero do Dado: " + String(nS));

    if(n == nS){
      Serial.println("Parabens! Voce foi certeiro");
      Serial.println("Reiniciando o programa ...");
    }else {
      Serial.println("Que pena, tente outra vez!");
      Serial.println("Reiniciando o programa ...");
    }
    Serial.println();
    Serial.println();
    delay(4000);

  }
  
  Serial.println("ESTATISTICAS DO JOGO");
  Serial.println();
  for(int i = 0; i < rodadas; i++){
    Serial.println("Rodada 	" + String(i + 1) + ":");
    Serial.println("	Palpite: " + String(vPalp[i]));
    Serial.println("	Dado: " + String(vResu[i]));
    Serial.println("	Resultado: " + String(vResu[i] == vPalp[i] ? "Acertou!" : "Errou!"));
    Serial.println("----------------------------");
    Serial.println();
  }
  
  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
  espera(3, 500);
  Serial.println();
  delay(700);//pausa de 3 segundos para reiniciar o jogo

}