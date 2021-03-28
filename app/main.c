#include <stdio.h>

#include "myfunc.h"
#include "square.h"

int main()
{
    double a, b, c;
    printf("Hello World!\n");
    printf("ax^2+bx+c=0\n");
    printf("Input a, b and c: \n");
    scanf("%lf%lf%lf", &a, &b, &c);
    square(a, b, c);
    return myfunc(2);
}
