#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num;
    num = (int*) malloc(sizeof (int) * 5);

    if (num == NULL)
    {
        printf("No hay memoria");
        system("pause ");
        exit(1);
    }

    for (int i = 0; i<5;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", num + i);
    }

    for (int i = 0; i<5;i++)
    {
        printf("%d\n", *(num + i));
    }




/*  *num = 10;
    printf("%d\n",*num);

    *num = 7;
    printf("%d\n",*num);

    *num = 18;
    printf("%d\n",*num);

    *num = 27;
    printf("%d\n",*num);

    *num = 5;
    printf("%d\n",*num);
    free(num);*/

    return 0;
}
