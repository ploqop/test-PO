#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include "myfunc.h"
#include "square.h"

solution square(double a, double b, double c)
{
    solution POPUSHb;
    POPUSHb.D = POPUSHb.roots = POPUSHb.is_done = 0;

    if (a == 0)
    {
        printf("Error: Coefficient \"a\" cannot equals zero");
        POPUSHb.roots = -1;

        return POPUSHb;
    }

    POPUSHb.D = powl(b,2) - 4*a*c;

    if (POPUSHb.D < 0)
    {
        printf("Discriminant = %f, %f < 0, there is %d roots\n",POPUSHb.D,POPUSHb.D,POPUSHb.roots);

        POPUSHb.is_done = 1;
        return POPUSHb;
    }
    else if (POPUSHb.D == 0)
    {
        POPUSHb.x_1 = -b/(2*a);
        POPUSHb.roots = 1;
        printf("Discriminant = %f, there is %d root: x = %f\n",POPUSHb.D,POPUSHb.roots,POPUSHb.x_1);

        POPUSHb.is_done = 1;
        return POPUSHb;
    }
    else
    {
        POPUSHb.x_1 = (-b+sqrtl(POPUSHb.D))/(2*a);
        POPUSHb.x_2 = (-b-sqrtl(POPUSHb.D))/(2*a);
        POPUSHb.roots = 2;
        printf("Discriminant = %f, %f > 0, there are %d roots: x1 = %f, x2 = %f\n",POPUSHb.D,POPUSHb.D,POPUSHb.roots,POPUSHb.x_1,POPUSHb.x_2);

        POPUSHb.is_done = 1;
        return POPUSHb;
    }
}
