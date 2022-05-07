//Esse programa verifica se o user inserido é valido ou n
//O nome não pode conter caractere especial, apenas letras e num
//O nome DEVE conter ao menos uma letra maiuscula, uma minuscula e um algarismo.
#include <stdio.h>
#include <string.h>
int main()
{
    char user[29];
    int i,c=0,a=0,b=0, d=0;

    scanf("%s", user);
    
 //Após a entrada do nome do user,irei usar um for, com a variavel i para indentificar cada caracter da linha
    
    
    for( i=0; user[i]!= '\0'; i++){
 //Usarei os int(a,b e c) para verificar respectivamente se naquele caracter contém uma letra maiscula ou minuscula ou um número.
 //Caso a afirmação seja verdadeira para algum desses argumentos o prog ira acrescentar +1 no variavel int designada para a afirmação verdadeira
        if(user[i] >= 'a' && user[i] <= 'z'){
        a++;}
        else if (user[i] >= 'A' && user[i] <= 'Z'){
        b++;}
        else if(user[i] >= '0' && user[i] <= '9'){
        c++;}
//Caso nenhum dos argumentos sejam validos, logo o caracter é especial, então será add +1 no int d, que representa caracter especial
        else {
        d++;}
        }

//Caso tenha 1 ou mais caracter especiais o user irá receber a mensagem de user invalido
//se tb n tiver todos os tres tipos de caracter ira receber o aviso sobre isso
    if(d>=1){
        printf("Username invalido\nPossui caracter especial\n");
        if(a<1 || b<1 || c<1){
            printf("Nao possui os tres tipos de caracteres\n");
        }
    }
    //Caso não possua caracter especial e possua os tres tipos de caracteres desejado, o user irá receber a mensagem de ok
    else if (a>=1 && b>=1 && c>=1){
            printf("Username OK\n");
        }
      //caso nãp possua os 3 caracteres então irá receber esse aviso
        else {
            printf("Username invalido\nNao possui os tres tipos de caracteres");
        }
    
    

    return 0;
}
