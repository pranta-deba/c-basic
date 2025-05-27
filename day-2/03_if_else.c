#include <stdio.h>

int main()
{

    /*
    Statement :
        if(condition) {
            true statement
        } else {
            false statement
        }
    */

    // if (2 > 5 || 4 < 5)
    // {
    //    printf("Yes!");
    // }
    // else
    // {
    //     printf("No!");
    // }

    /**
     * Example 01
     * */
    // int age;
    // printf("Tomar Age Dao : ");
    // scanf("%d", &age);

    // if (age >= 18)
    // {
    //     printf("\nYes! Tumi Driving Korte Parbe!");
    // }
    // else
    // {
    //     printf("\nNo! Tumi Driving Korte Parbe Na!");
    // }

    /**
     * Example 02
     * */

    int bangla;
    printf("Bangla : ");
    scanf("%d", &bangla);

    if (bangla >= 33 && bangla <= 39)
    {
        printf("Tumi D Peyecho!");
    }
    else if (bangla >= 40 && bangla <= 49)
    {
        printf("Tumi C Peyecho!");
    }
    else if (bangla >= 50 && bangla <= 59)
    {
        printf("Tumi B Peyecho!");
    }
    else if (bangla >= 60 && bangla <= 69)
    {
        printf("Tumi A- Peyecho!");
    }
    else if (bangla >= 70 && bangla <= 79)
    {
        printf("Tumi A Peyecho!");
    }
    else if (bangla >= 80 && bangla <= 100)
    {
        printf("Tumi A+ Peyecho!");
    }
    else
    {
        printf("Tumi Fail Korcho!");
    }

    return 0;
}