#include <stdio.h>

#include "myfunc.h"
#include "square.h"

int main()
{
    double a, b, c;
    a = 3;
    b = 5;
    c = 2;
 /*   printf("Hello World!\n");
    printf("ax^2+bx+c=0\n");
    printf("Input a, b and c: \n");
    if(scanf("%lf%lf%lf", &a, &b, &c) != 3)
    {
        printf("Ошибка ввода данных");
        return 0;
    } */
    square(a, b, c);
    return myfunc(2);
}
