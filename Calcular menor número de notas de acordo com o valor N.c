#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

int N, nota50 = 0,nota100 = 0, nota5 = 0, nota1 = 0, nota10 = 0 ;
 
//Pedimos para que o usuário digite um valor N 
    scanf("%d", &N);
    
//Aqui usaremos o while para conseguimos operar todas as condições contidas no loop até que o valor de N seja igual a zero.

    while (N != 0){
        
//Para que o número de notas seja o menor possivel precisamos criar parâmetros para dar preferência ao maior valor de nota possível 
//É importante perceber que para cada if temos duas operações.
//Sendo a adição de alguma nota(nota++) e a diminuição do valor do N restante de acordo com a nota add (N -= nota adicionada)
    if(N>=100)
    {
    N-=100;
   nota100++;}

    if(N>=50 && N<100)
    {
    N-=50;
   nota50++;}
   
    if(N>=10 && N<50)
    {
    N-=10;
   nota10++;}
   
    if(N>=5 && N<10)
    {
    N-=5;
   nota5++;}
    
      if(N>=1 && N<5)
    {
    N-=1;
   nota1++;}
    }
    
   //Após isso é só demonstrar o número total de cada nota.
         printf("%03d notas de 100.00", nota100);
             printf("\n%03d notas de 50.00", nota50);
             printf("\n%03d notas de 10.00", nota10);
             printf("\n%03d notas de 5.00", nota5);
             printf("\n%03d notas de 1.00", nota1);
      
     
  
   

	return 0;
}