#include <stdio.h>
#include <stdlib.h>
//Hi, any question in english or portuguese u can send to me in my email pidedro2801@gmail.com

int main(int argc, char *argv[]) {

    int a,b, soma, multi, sub, mod;
    float div;
    
//Após a declaração da variáveis pedimos para que o usuário entre com dois valores inteiros
    scanf("%d , %d", &a , &b);
   
    
//Aqui fazemos todas as operações matemáticas (Soma, subtração, multiplicação, divisão e módulo)
//Importante notar que transformamos as variáveis a e b em float para a operação de divisão
      soma = a + b;
      sub = a - b;
      multi = a * b;
      div = (float) a / b;
      mod = a%b;

//Depois é só mostrar os resultados para o usuário    
      printf("A soma dos números dados é : %d", soma);
      printf("\nA subtração dos números dados é : %d", sub);
      printf("\nO multiplicação dos números dados é : %d", multi);
      printf("\nA divisão dos números dados é : %.6f", div);
      printf("\nO modulo é = %d", mod);
      
  
   

	return 0;
}