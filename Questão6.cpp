#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL,"portuguese");

//variaveis
int opcao;


//codigos
printf("1-camiseta\n");
printf("2-cal�a \n");
printf("3-sapato \n");

printf("Digite uma das op��es acima :\n");
scanf("%i",&opcao);


switch (opcao)
{
case 1 :
    printf("Produto :camiseta\n");
    printf("Pre�o : 30,00R$");
    break;
case 2 :
    printf("Produto : cal�a\n");
    printf("Pre�o : 25,00R$");
    break;
case 3 :
    printf("Produto : sapato\n");
    printf("Pre�o : 50,00R$");
}
 return 0;
}

