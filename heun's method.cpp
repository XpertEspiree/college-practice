#include <stdio.h>

float f(float x, float y)
{
    return x + y;  
}

int main()
{
    float x0, y0, x, h, xn;
    float yp, y1;

    printf("Enter initial values x0 and y0: ");
    scanf("%f %f", &x0, &y0);

    printf("Enter the step size h: ");
    scanf("%f", &h);

    printf("Enter the value of x at which y is required: ");
    scanf("%f", &xn);

    x = x0;
    y1 = y0;

    while (x < xn)
    {
        yp = y1 + h * f(x, y1);                 
        y1 = y1 + (h / 2) * (f(x, y1) + f(x + h, yp));  
        x = x + h;
    }

    printf("\nApproximate solution at x = %f is y = %f\n", x, y1);

    return 0;
}

