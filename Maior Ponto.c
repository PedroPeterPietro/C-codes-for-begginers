
#include <stdio.h>
// O programa recebe 5 pontos distintos de coordenadas cartesianas (x,y). O programa fornece como saída o valor da maior média, a coordenada x e a coordenada y do respctivo ponto
int main()
{
    int vetorx [10], vetory[10], i,soma = 0, x, y;
    float media = 0, f = 2, total;
    
    for(i = 0; i<5; i++){
        scanf("%d", &vetorx[i]);
          scanf("%d", &vetory[i]);
    }
    
    for(i = 0; i<5; i++){
       total = vetorx[i]+vetory[i];
       if (total>soma){
           soma = total;
           x = vetorx[i];
           y = vetory[i];
        media = (float) total/f;
       }
    }
    
  
    printf("%.2f", media);
    printf(" %d", x);
    printf(" %d", y);

    return 0;
}
