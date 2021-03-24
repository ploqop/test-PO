#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include <myfunc.h>

int square()
{
    double a = 0,b = 0,c = 0,x_1 = 0,x_2 = 0,D = 0;
    printf("ax^2+bx+c=0\n");
    printf("Input a, b and c: \n");
    scanf("%lf%lf%lf", &a, &b, &c);

    D = powl(b,2) - 4*a*c;

    if (D < 0)
    {
        printf("Discriminant = %f, %f < 0, there is no roots\n",D,D);
        return 0;
    }
    else if (D == 0)
    {
        x_1 = -b/2*a;
        printf("Discriminant = %f, there is one root: x = %f\n",D,x_1);
        return 1;
    }
    else
    {
        x_1 = (-b+sqrtl(D))/2*a;
        x_2 = (-b-sqrtl(D))/2*a;
        printf("Discriminant = %f, %f > 0, there are two roots: x1 = %f, x2 = %f\n",D,D,x_1,x_2);
        return 1;
    }
}
