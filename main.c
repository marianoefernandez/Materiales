#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float altura;
    char sexo;

    int mayorEdad=0;
    int menorEdad=0;
    float alturaDeLaVieja=0;
    float alturaDelMasJoven=0;
    char sexoMasAlto;
    float masAlto=0;
    float masBajo=0;
    int edadDelEnano;

    char seguir;

    do
    {
        printf("\nIngrese edad: ");
        scanf("%d,", &edad);
        fflush(stdin);
        printf("\nIngrese sexo (f/m): ");
        scanf("%c,", &sexo);
        printf("\nIngrese altura: ");
        scanf("%f,", &altura);
        fflush(stdin);
        printf("\n¿Continuar? (s/n): ");
        scanf("%c", &seguir);

        if(mayorEdad<edad && sexo=='f')
        {
            alturaDeLaVieja = altura;
            mayorEdad = edad;
        }

        if (menorEdad>edad && menorEdad>mayorEdad)
        {
            alturaDelMasJoven = altura;
            menorEdad = edad;
        }

        if (masAlto<altura)
        {
            sexoMasAlto = sexo;
            masAlto = altura;
        }

        if (masBajo>altura)
        {
            edadDelEnano = edad;
            masBajo = altura;
        }


    }while (seguir == 's');

    printf("La altura de la vieja es de %.2f cm", alturaDeLaVieja); //ESTE ANDA PIOLA
    printf("\nLa altura del mas joven es %.2f cm", alturaDelMasJoven);
    //printf("\nEl sexo del mas alto es %c", sexoMasAlto);
    //printf("\nLa edad del enano es de %d", edadDelEnano);

    return 0;
}

