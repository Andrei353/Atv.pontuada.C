#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // determinando variaveis
    float temperatura;

    // coletando dados
    printf("o jogo basiarão o clima atraveis da temperatura da onde você estão\n");
    printf("qual ? a temperatura do seu ambiente em graus celsius: ");
    scanf("%f", &temperatura);
    system("cls||clear");

    // validando informa??es
    if (temperatura >= 15 && temperatura <= 25)
    {
        printf(" o clima do jogo est? nublado");
    }
    else if (temperatura > 25)
    {
        printf(" o clima do jogo est? ensolarado");
    }
    else
    {
        printf(" o clima do jogo est? chuvoso");
    }
    return 0;
}
