#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x*x*x - x - 2;   
}

float df(float x)
{
    return 3*x*x - 1;       
}

int main()
{
    float x0, x1;
    float tol;
    int iter = 0;

    printf("Enter initial guess: ");
    scanf("%f", &x0);

    printf("Enter tolerance: ");
    scanf("%f", &tol);

    do
    {
        x1 = x0 - (f(x0) / df(x0));
        iter++;

        if (fabs(x1 - x0) < tol)
            break;

        x0 = x1;

    } while (1);

    printf("\nRoot = %f", x1);
    printf("\nNumber of iterations = %d\n", iter);

    return 0;
}

