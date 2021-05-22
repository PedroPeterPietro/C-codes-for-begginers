
#include <stdio.h>

int main() {
    
  int n, i, nota, x = 0;
  float media;
  
  //Primeiro o usuário digita o número de notas.
    scanf("%d", &n);
    
    
    
  //Após isso ele terá de digitar o valor de cada nota
  //Para isso usamos um for, que irá add uma nota e somar essa nota com o valor das outras notas e amarzenar isso na variável x.
    for (i = 1; i<=n ; i++){
        scanf("%d", &nota);
        x += nota;
    }
   
   //Aqui ele faz a média sendo x a soma total das notas e n o número de notas digitadas 
    media = (float) x/n;
    
    
    //De acordo com a média do usuário o sistema irá dizer qual a classificação do aluno (Excelente, Muito Bom, Bom, Regular ou Reprovado)
        if ( media <= 100 && media >= 90){
            printf("media: %.2f (Excelente)", media);
        }
            if ( media <= 89 && media >= 80){
            printf("media: %.2f (Muito Bom)", media);
        }
                if ( media <= 79 && media >= 70){
            printf("media: %.2f (Bom)", media);
        }
                if ( media <= 69 && media >= 50){
            printf("media: %.2f (Regular)", media);
        }
         if ( media <= 49 && media >= 0){
            printf("media: %.2f (Reprovado)", media);
        }


    return 0;
}
