
#include <stdio.h>
//O programa ler um vetor de 16 posições(vetor inteiro).
// se existir um elemento negativo o cod trocará o elemento pelo zero.
// O programa colocará os oito primeiros valores nas ultimas posições e vice-e-versa.
int main()
{
    int vetor[15],i = 0, ant;
    
    //Para o primeiro passo foi criado um while para ler os 16 primeiros números escritos pelo user.
    //Cada número será alocado em sua respectiva posição no vetor.
    //Caso algum número digitado pelo user seja negativo, o cod irá trocar o número por 0.
   while(i < 16){
        scanf("%d", &vetor[i]);
        if(vetor[i]<0){
        vetor[i] = 0;
        }
        i++;
    }
    
    //No segundo passo será utilizado um for que será repetido 8 vezes, visto que são 16 posições e ele irá alterar duas posições a cada laço
    //Nessa passo o cod irá alterar as posições, fazendo a troca do primeiro número pelo oitavo, segundo pelo nono e assim respectivamente
    //Foi utilizado uma variavel do int ant, para guardar o valor anterior daquela respectiva posição, para ser alocado na nova
    for( i=0; i<8; i++){
        ant = vetor[i+8];
        vetor [i+8] = vetor [i];
        vetor [i] = ant;
    }
    
    //Nesse último passo o user irá ver a solução do cod
   for( i=0; i<16; i++){
        printf("%d ", vetor[i]);
    }
  

    return 0;
}
