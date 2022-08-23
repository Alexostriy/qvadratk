#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void discr(double a, double b, double c)
{
    if (b*b-4*a*c==0)
    {
        printf("1 корень\n");
        double result=-b/(2*a);
        printf("%f\n",result);
    }
    else if (b*b-4*a*c<0)
    {
        printf("Нет корней");
    }
    else
    {
        printf("2 корня\n");
        double result1=(sqrt(b*b-4*a*c)-b)/(2*a);
        double result2=(-sqrt(b*b-4*a*c)-b)/(2*a);
        printf("%f %f\n",result1,result2);
    }
}

void line (double b, double c)
{
    if (b==0)
    {
        if (c==0) printf ("Решением являетися любое число\n");
        else printf("Нет корней\n");
    }
    else
    {
        printf("1 корень");
        printf("%f\n",-c/b);
    }
}

int main()
{
    double a,b,c;
    do
    {
        printf("Введите коэфиценты квадоратного Вашего уравнения\n");
        if (scanf("%lf %lf %lf", &a, &b, &c) ==3)
            {
                if (a==0) line(b,c);
                else discr(a, b, c);
            }
        else printf("Вы ввели неправильно, попробуйте еще раз");
    }
    while (1==1);
    return 0;
}
