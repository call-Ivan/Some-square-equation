#include <TXLib.h>
#include <stdio.h>
#include <math.h>

void solve_equation(double , double, double );          // ввожу прототип общей функции для решения квадратки
double line_equation(double, double, double);           // ввожу прототип функции для случая a = 0
double solve_square(double, double, double);            // ввожу прототип функции для a != 0
void prodram_desigh();                                  // прототип функции приветственного окна для пользователя
void input_coefficients(double a, double b, double c);  // прототип функции ввода коэффициентов
void Poltorashka_text();                                // отдельная функция Полторашки) для неккоретных символов

/*struct Solves     здесь я попытался ввести структуру для завершения return в solve_square
    {            но пока чето не получилось
    double a;
    double b;
    double c;
    }*/
/*int main() {  общая структура main'а
int abc
    get_coefs
    solve
    output
} */

int main()
{
    void program_desigh();

    void solve_equation(double a, double b, double c);

return 0;
}

void prodram_desigh()       // я правильно расставил порядок функций??
    {
    printf("Привет крутыш! Эта программа решает квадратное уравнение\n");

    printf("Общая формула уравнения: ax^2 + bx + c = 0\n");

    printf("Для того чтобы решить уравнение введи коэффциенты a, b и с:\n");
    }

void solve_equation(double a, double b, double c)
    {
    if (a == 0)
        {

        double root = line_equation(a,b,c);

        }
    else
        {

        double roots = solve_square(a,b,c);

        }
    }

double line_equation(double a, double b, double c)   // Определение новой функции для a == 0
{
    printf("Это линейный случай bx + c = 0\n");

    double one_root = 0;
    one_root = -c/b;

    printf("Твой корень(в знаниях), а этот x = %lg", one_root);

return one_root;
}

double solve_square(double a = 0, double b = 0, double c = 0)
    {
    void input_coefficients();

    double D = b*b - 4*a*c;

    if (D > 0)    // abs(a) < EPSILON, пока не понял как это реализовать
        {
        double first_root = 0, second_root = 0;

        first_root = (-b - sqrt(D))/(2 * a);
        second_root = (-b + sqrt(D))/(2 * a);

        printf("У тебя есть два корня - ты про. X1 = %f, x2 = %f", first_root, second_root);
        }
    else if (D == 0)
        {
        double zero_root = 0;

        zero_root = (-b)/(2*a);

        printf("У тебя только одно решение(ты не инженер) ). Вот оно: x0 = %f", zero_root);
        }
    else if (D < 0)
        {
        printf("Нет решений в действительных числах");
        }
return D;
}

void Poltorashka_text()
    {
    printf("Ты явно не гладил Полторашку(\n");

    printf("Посмотри вокруг!\n");

    printf("Найди Полторашку и погладь её!");

    printf("После перезапуска программы введи коэффициенты заново)");
    }

void input_coefficients(double a, double b, double c)
    {
    if (scanf("%lg %lg %lg",&a,&b,&c) == 3)
        {
        solve_equation(a, b, c);
        }

    else
        {
        Poltorashka_text();
        }
    }







