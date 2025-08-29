#include <TXLib.h>
#include <stdio.h>                                      // f - function
#include <math.h>
#define EPS 1e-10

void solve_equation( double a, double b, double c);          // enter prototype of general f
double line_equation();                                 // enter a prototype for f a = 0
void  solve_QUADRATIC();            // enter prototype of f to case a != 0
void program_desigh();                                  // prototype f for greeting window to the user
void Poltorashka_text();                                // another f for Poltorashka for uncorrectly symbols

/*struct Solves     here i tried to enter new structure to return â solve_square
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
    program_desigh();

    double a = 0, b = 0, c = 0;
    if (scanf("%lg %lg %lg",&a,&b,&c) == 3)
    {
        solve_equation(a, b, c);
    }
    else
    {
        printf("You have't caressed Poltorashka yet.(\n");

        printf("Open your eyes!\n");

        printf("Hide the Poltorashka and caress her!\n");

        printf("After program restart enter you coefficients again)");
    }

    return 0;
    }
void program_desigh()
    {
    printf("Hi cool guy! This program can solve the square equation\n");

    printf("The main formula: ax^2 + bx + c = 0\n");

    printf("To solve your equation enter the coefficients:a, b and ñ.\n");
    }
void solve_equation(double a, double b, double c)
    {
    if (a == 0)
    {
        double one_root = 0;
        if ( b == 0 && c != 0)
        {
            printf("You don't have any solves");
        }
        else if( b == 0 && c == 0)
        {
            printf("You have a infinity solves");
        }
        else if( c == 0)
        {
            printf("This is a line variant bx + c = 0\n");
            one_root = 0;
            printf("Your root (in the knowings), but this x = %lg", one_root);
        }
        else
        {
            printf("This is a line variant bx + c = 0\n");
            one_root = -c/b;
            printf("Your root (in the knowings), but this x = %lg", one_root);
        }
    }
    else if( a != 0 && b == 0 && c == 0)
    {
        double root;

        root = 0;

        printf("You have only one root: x = %f", root);
    }
    else if( a != 0)
    {
        double D = b*b - 4*a*c;

        if (D > 0)    // abs(a) < EPSILON, unfortunately, I didn't get how it works
        {
            double first_root = 0;
            double second_root = 0;

            first_root = (-b - sqrt(D))/(2 * a);
            second_root = (-b + sqrt(D))/(2 * a);

            printf("You have two roots - you steep. X1 = %f, x2 = %f", first_root, second_root);
        }
        else if (D == 0)
        {
            double zero_root = 0;

            zero_root = (-b)/(2*a);

            printf("You have only one solve, you're not the engineer( Yours?: x0 = %f", zero_root);
        }
        else if (D < 0)
        {
            printf("Didn't have any solves in valid ones");
        }
    }
}










