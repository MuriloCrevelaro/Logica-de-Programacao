/*Faça um programa que imprima na tela a tabuada de 1 a 10.
*/
int r = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{ 
  for(int c = 1; c <= 10; c++){
   r = c * 1;
    
  
   Serial.println("1 X " + String(c) + " = " + String(r));
  }
  for(int c = 1; c <= 10; c++){
   r = c * 2;
    
    //Exibir assim: 2 X 1 = 2
   Serial.println("2 X " + String(c) + " = " + String(r));
  }
  for(int c = 1; c <= 10; c++){
   r = c * 3;
    
   
   Serial.println("3 X " + String(c) + " = " + String(r));
  }
  for(int c = 1; c <= 10; c++){
   r = c * 4;
    
    
   Serial.println("4 X " + String(c) + " = " + String(r));
  }
  for(int c = 1; c <= 10; c++){
   r = c * 5;
    
   
   Serial.println("5 X " + String(c) + " = " + String(r));
  }
  for(int c = 1; c <= 10; c++){
   r = c * 6;
    
   
   Serial.println("6 X " + String(c) + " = " + String(r));
  }
  for(int c = 1; c <= 10; c++){
   r = c * 7;
    
   Serial.println("7 X " + String(c) + " = " + String(r));
  }
  for(int c = 1; c <= 10; c++){
   r = c * 8;
    
    
   Serial.println("8 X " + String(c) + " = " + String(r));
  }
  for(int c = 1; c <= 10; c++){
   r = c * 9;
    
  
   Serial.println("9 X " + String(c) + " = " + String(r));
  }
  for(int c = 1; c <= 10; c++){
   r = c * 10;
    
   
   Serial.println("10 X " + String(c) + " = " + String(r));
  }
  
  delay(4000);
}