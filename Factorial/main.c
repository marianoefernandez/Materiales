int main()
{
    int a , b, c, d;
    unsigned long long factoriala = 1, factorialb = 1;

    printf("Pone un factorial: ");
    scanf("%d",&a);
    printf ("Pone otro factorial: ");
    scanf("%d",&b);

    // show error if the user enters a negative integer
    if (a < 0 && b < 0)
        printf("Error! FACTORIAL NEGATIVO NO EXISTE");

    else
    {
        for(c=1; c<=a; ++c)
        {
            factoriala *= c;              // factorial = factorial*i;
        }
        printf("Factorial de %d = %llu\n", a, factoriala);

        for(d=1; d<=b; ++d)
        {
            factorialb *= d;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", b, factorialb);
    }

    return 0;
}
