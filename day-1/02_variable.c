#include <stdio.h> // header file

int main()
{
    // Variable declare
    int age = 10;
    int price = 1000;
    printf("Your Age: %d\n", age);
    printf("Price: %d\n", price);

    //  One line in integer variable
    int a = 5, b = 10, c = 20;
    printf("Numbers : %d ", c, a, b);

    // User Input
    // int value;
    // printf("\n\nVhai Value ta dao : ");
    // scanf("%d", &value);
    // printf("\nYour Value is : %d", value);

    // change value
    //int myNum = 15; // myNum is 15
    //myNum = 10000;  // Now myNum is 10
    //printf("\nmyNum = %d", myNum);

    //  real life example
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    float m = 5;
    float n = 2.4;

    printf("\n Sum = %f", m + n);

    // data type:
    int myNum = 5;              // Integer (whole number)
    char myLetter = 'D';        // Character
    float myFloatNum = 5.99;    // Floating point number (limitation = 0000000000)
    double myDoubleNum = 19.99; // Floating point number (limitation = any)

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("%lf\n", myDoubleNum);

   

    return 0;
}
