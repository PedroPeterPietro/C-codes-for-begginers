#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

int r, R;
    float vol, pi;
    
 //Primeiro pedimos o valor do raio para o usuário.  
    scanf("%d", &r );
   
//Após isso fazemos os calculos, sendo que o volume de uma circunferencia é (4/3*PI*r^3).    
      R = r*r*r;
      pi = 3.14;
      vol =  1.3333333*pi*R ;

//A partir daí é só mostrar o valor do volume para o usuário.    
     printf("(raio: %d, pi: %.2f)", r, pi);
      
      printf(" volume: %.2f", vol);
     
  
   

	return 0;
}