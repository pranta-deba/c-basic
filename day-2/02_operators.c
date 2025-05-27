#include <stdio.h>

int main()
{

    // Arithmetic operators : +, -, *, /, %, ++, --
    int a = 50, b = 10;
    printf("\n01. a + b = %d", a + b);
    printf("\n02. a - b = %d", a - b);
    printf("\n03. a * b = %d", a * b);
    printf("\n04. a / b = %d", a / b);
    printf("\n05. a parcentage b = %d", a % b);
    printf("\n05. a ++ = %d", ++a);
    printf("\n05. a -- = %d", --b);

    // Assignment operators : =, +=, -=, /=, %=
    int x = 5;
    x = 10;
    x += 10; // x = x + 10
    x -= 2;  // x = x - 10
    x /= 2;  // x = x / 10
    x %= 2;  // x = x % 10
    printf("%d", x);

    // Comparison operators: ==, !=, > , < , >=, <=
    int m = 10;
    int n = 10;
    printf("\n== : %d", m == n);
    printf("\n!= :%d", m != n);
    printf("\n> : %d", m > n);
    printf("\n< : %d", m < n);
    printf("\n>= : %d", m >= n);
    printf("\n<= : %d", m <= n);

    // Logical Operators: &&, ||, !
    int y = 10;
    int z = 1;
    printf("\n&& : %d", y && z);
    printf("\n|| : %d", y || z);
    printf("\n! : %d", !z);

    return 0;
}