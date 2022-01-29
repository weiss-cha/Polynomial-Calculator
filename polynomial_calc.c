#include <stdio.h>

void get_poly(double*);
double poly(double, double*);

int main(void)
{
    double coef[4] = {0.0};
    double x;
    get_poly(coef);
    double sum = poly(x, coef);
    printf("%lf", sum);
}

void get_poly(double* coef)
{
    double a, b, c, d;
    printf("Enter the coefficients: ");
    scanf("%lf %lf %lf %lf", &coef[0], &coef[1], &coef[2], &coef[3]);
}

double poly(double x, double* coef)
{
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    return coef[0]*x*x*x + coef[1]*x*x + coef[2]*x + coef[3];
}
