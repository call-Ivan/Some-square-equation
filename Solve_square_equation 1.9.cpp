#include <TXLib.h>
#include <stdio.h>                                      // f - function
#include <math.h>

void solve_equation(double , double, double );          // enter prototype of general f
double line_equation(double, double, double);           // enter a prototype for f a = 0
double solve_square(double, double, double);            // enter prototype of f to case a != 0
void prodram_desigh();                                  // prototype f for greeting window to the user
void input_coefficients(double a, double b, double c);  // prototype f to enter coefficients
void Poltorashka_text();                                // another f for Poltorashka for uncorrectly symbols

/*struct Solves     here i tried to enter new structure to return � solve_square
    {            but for that moment it doesn't work
    double a;
    double b;
    double c;
    }*/
/*int main() {  common composition of main's
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

void prodram_desigh()       // did I wright my functions in right order??
    {
    printf("������ ������! ��� ��������� ������ ���������� ���������\n");

    printf("����� ������� ���������: ax^2 + bx + c = 0\n");

    printf("��� ���� ����� ������ ��������� ����� ����������� a, b � �:\n");
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

double line_equation(double a, double b, double c)   // Definition for new function a == 0
    {
    printf("��� �������� ������ bx + c = 0\n");

    double one_root = 0;
    one_root = -c/b;

    printf("���� ������(� �������), � ���� x = %lg", one_root);

    return one_root;
    }

double solve_square(double a = 0, double b = 0, double c = 0)
    {
    void input_coefficients();

    double D = b*b - 4*a*c;

    if (D > 0)    // abs(a) < EPSILON, unfortunately, I didn't get how it works
        {
        double first_root = 0, second_root = 0;

        first_root = (-b - sqrt(D))/(2 * a);
        second_root = (-b + sqrt(D))/(2 * a);

        printf("� ���� ���� ��� ����� - �� ���. X1 = %f, x2 = %f", first_root, second_root);
        }
    else if (D == 0)
        {
        double zero_root = 0;

        zero_root = (-b)/(2*a);

        printf("� ���� ������ ���� �������(�� �� �������) ). ��� ���: x0 = %f", zero_root);
        }
    else if (D < 0)
        {
        printf("��� ������� � �������������� ������");
        }
return D;
}

void Poltorashka_text()
    {
    printf("�� ���� �� ������ ����������(\n");

    printf("�������� ������!\n");

    printf("����� ���������� � ������� �!");

    printf("����� ����������� ��������� ����� ������������ ������)");
    }

void input_coefficients(double a, double b, double c)        // funct to have a correctly input
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







