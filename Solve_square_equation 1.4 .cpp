#include <TXLib.h>
#include <stdio.h>
#include <math.h>

double minus_zero(double a, double b, double c);     // ввожу прототип фунции для случая a !=0, b == 0, c == 0
double zero_cof(double a, double b, double c);    // ввожу прототип функции для случая a = 0


int main(void)
{
    double a = 0, b = 0, c = 0;     // Ввел 4 переменные a,b,с - коэффициенты уравнения, и D - дискриминант
    double D = 0;

    printf("Привет крутыш! Эта программа решает квадратное уравнение\n");

    printf("Общая формула уравнения: ax^2 + bx + c = 0\n");

    printf("Для того чтобы решить уравнение введи коэффциенты a, b и с:\n");

    scanf("%lg %lg %lg",&a,&b,&c);

    double line_equation = zero_cof(a,b,c);           // вызов фунции для a = 0

    D = b*b - 4*a*c;

    if (D > 0 && a != 0)
        {
        double first = 0, second = 0;

        first = (-b - sqrt(D))/(2 * a);
        second = (-b + sqrt(D))/(2 * a);

        printf("У тебя есть два корня - ты про. X1 = %f, x2 = %f", first, second);
        }
    else if (D == 0)
        {
        double zero_root;   // Ввел новую переменную для случая с одним корнем

        zero_root = (-b)/(2*a);

        double strange_root = minus_zero(a,b,c); // Вызов функции для a != 0, b = 0, c = 0

        printf("У тебя только одно решение(ты не инженер) ). Вот оно: x0 = %f", zero_root);
        }
    else if (D < 0)   // Третий случай для дискриминанта меньшего нуля
        {
        printf("Нет решений в действительных числах");
        }
return 0;
}

    double zero_cof(double a, double b, double c)   // Определение новой функции для a == 0
    {
        if (a == 0 && b != 0 && c != 0)
            {
            printf("Это линейный случай bx + c = 0\n");

            double one_root = 0;
            one_root = -c/b;

            printf("Твой корень(в знаниях), а этот x = %lg", one_root);
            return one_root;
            }
    }


    double minus_zero(double a, double b, double c)     // Определение фунции для a != 0, b == 0, c == 0
    {
        if (a != 0 && b == 0 && c == 0)
            {
            int root_zero;

            root_zero == 0;
            printf("Твой корень(в земле), а этот x = %lg", root_zero );

            return root_zero;
            }
    }



