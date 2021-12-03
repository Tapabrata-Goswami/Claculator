#include <stdio.h>

int main (){

    printf ("This calculator ony for Intiger Number.\n");

    int a,b,sum;
    char opretor;

    printf("\nChoose a opretor(+,-,*,/) = ");
    scanf ("%c", &opretor);

    printf("\nChoose your first number = ");
    scanf("%d", &a);

    printf("\nChoose your first number = ");
    scanf("%d", &b);



    switch (opretor)
    {
    case '+':
         sum = (a+b);
         printf("\nCalculation answer is = %d\n", sum);
        break;

    case '-':
         sum = (a-b);
         printf("\nCalculation answer is = %d\n", sum);
        break;

    case '*':
         sum = (a*b);
         printf("\nCalculation answer is = %d\n", sum);
        break;

    case '/':
         sum = (a/b);
         printf("\nCalculation answer is = %d\n", sum);
        break;

    default:
         printf("Something is worng....");
        break;
    }
    return 0;
}