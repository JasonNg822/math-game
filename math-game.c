#include <stdio.h>
#include "cs50.h"


int math_game (void);

int main (void)
{
    string name = get_string("What is your name?\n");
    printf("Hello, %s. Welcome to math game\n", name);
    char ans = get_char("Are you ready to start the math question?\n");
    if (ans == 'y' || ans == 'Y' || ans == 'Yes' || ans == 'yes')
    {
        math_game();
    }
    else if (ans == 'n' || ans == 'N' || ans == 'No' || ans == 'no')
    {
        printf("Come back when you ready\n");
    }
}

int math_game (void)
{
    int x = 1;
    printf("Q1 1+1=?\n");
    int ansQ1 = get_int("Answer is\n");
    if (ansQ1 == 2)
    {
        printf("Correct,now you get %i point!\n", x);
    }
    else
    {
        printf("Wrong,you do correct 0 question!\n");
        return 0;
    }

    printf("Q2 2x2=?\n");
    int ansQ2 = get_int("Answer is");
    if (ansQ2 == 4)
    {
        printf("Correct ");
        x ++;
        printf("Now you get %i points\n",x);
    }
    else
    {
        printf("Wrong, do correct %i question!\n", x);
        return 0;
    }

    printf("Q3 4/2=?\n");
    int ansQ3 = get_int("Answer is");
    if (ansQ3 == 2)
    {
        printf("Correct ");
        x ++;
        printf("Now you get %i points!\n",x);
    }
    else
    {
        printf("Wrong, do correct %i question!\n", x);
        return 0;
    }

    printf("Q4 8+7*2=?\n");
    int ansQ4 = get_int("Answer is");
    if (ansQ4 == 22)
    {
        printf("Correct ");
        x ++;
        printf("Now you get %i points!\n",x);
    }
    else
    {
        printf("Wrong, do correct %i question!\n", x);
        return 0;
    }

    printf("Q5 23*17/8(4+7-6)=?\n");
    float ansQ5 = get_float("Answer is");
    if (ansQ5 == 244.375)
    {
        printf("Correct ");
        x ++;
        printf("Now you get %i points!\n",x);
    }
    else
    {
        printf("Wrong, do correct %i question!\n", x);
        return 0;
    }

    printf("Q6 27+45-20%%=?\n");
    double ansQ6 = get_double("Answer is");
    if (ansQ6 == 57.6)
    {
        printf("Correct ");
        x ++;
        printf("Now you get %i points!\n",x);
    }
    else
    {
        printf("Wrong, do correct %i question!\n", x);
        return 0;
    }

    printf("Q7 39+70+55%%=?\n");
    double ansQ7 = get_double("Answer is");
    if (ansQ7 == 168.95)
    {
        printf("Correct ");
        x ++;
        printf("Now you get %i points!\n",x);
    }
    else
    {
        printf("Wrong, do correct %i question!\n", x);
        return 0;
    }

    printf("Q8 7^5=?\n");
    int ansQ8 = get_int("Answer is");
    if (ansQ8 == 2401)
    {
        printf("Correct ");
        x ++;
        printf("Now you get %i points\n",x);
    }
    else
    {
        printf("Wrong, do correct %i question!\n", x);
        return 0;
    }

    printf("Q9 8^3/5=?\n");
    double ansQ9 = get_double("Answer is");
    if (ansQ9 == 102.4)
    {
        printf("Correct ");
        x ++;
        printf("Now you get %i points!\n",x);
    }
    else
    {
        printf("Wrong, do correct %i question!\n", x);
        return 0;
    }

    printf("Q10 2^9*3-60%%=?\n");
    double ansQ10 = get_double("Answer is");
    if (ansQ10 == 614.4)
    {
        printf("Correct ");
        x ++;
        printf("Now you get %i points!\n",x);
        printf("Congratulation,you do all the question correctly!\n");
    }
    else
    {
        printf("Wrong, do correct %i question!\n", x);
        return 0;
    }
    return 0;
}
