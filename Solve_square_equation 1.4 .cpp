#include <TXLib.h>
#include <stdio.h>
#include <math.h>

double minus_zero(double a, double b, double c);     // ����� �������� ������ ��� ������ a !=0, b == 0, c == 0
double zero_cof(double a, double b, double c);    // ����� �������� ������� ��� ������ a = 0


int main(void)
{
    double a = 0, b = 0, c = 0;     // ���� 4 ���������� a,b,� - ������������ ���������, � D - ������������
    double D = 0;

    printf("������ ������! ��� ��������� ������ ���������� ���������\n");

    printf("����� ������� ���������: ax^2 + bx + c = 0\n");

    printf("��� ���� ����� ������ ��������� ����� ����������� a, b � �:\n");

    scanf("%lg %lg %lg",&a,&b,&c);

    double line_equation = zero_cof(a,b,c);           // ����� ������ ��� a = 0

    D = b*b - 4*a*c;

    if (D > 0 && a != 0)
        {
        double first = 0, second = 0;

        first = (-b - sqrt(D))/(2 * a);
        second = (-b + sqrt(D))/(2 * a);

        printf("� ���� ���� ��� ����� - �� ���. X1 = %f, x2 = %f", first, second);
        }
    else if (D == 0)
        {
        double zero_root;   // ���� ����� ���������� ��� ������ � ����� ������

        zero_root = (-b)/(2*a);

        double strange_root = minus_zero(a,b,c); // ����� ������� ��� a != 0, b = 0, c = 0

        printf("� ���� ������ ���� �������(�� �� �������) ). ��� ���: x0 = %f", zero_root);
        }
    else if (D < 0)   // ������ ������ ��� ������������� �������� ����
        {
        printf("��� ������� � �������������� ������");
        }
return 0;
}

    double zero_cof(double a, double b, double c)   // ����������� ����� ������� ��� a == 0
    {
        if (a == 0 && b != 0 && c != 0)
            {
            printf("��� �������� ������ bx + c = 0\n");

            double one_root = 0;
            one_root = -c/b;

            printf("���� ������(� �������), � ���� x = %lg", one_root);
            return one_root;
            }
    }


    double minus_zero(double a, double b, double c)     // ����������� ������ ��� a != 0, b == 0, c == 0
    {
        if (a != 0 && b == 0 && c == 0)
            {
            int root_zero;

            root_zero == 0;
            printf("���� ������(� �����), � ���� x = %lg", root_zero );

            return root_zero;
            }
    }



