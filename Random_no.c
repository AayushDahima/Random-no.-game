#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, guess, nguess = 1;
    srand(time(0)); // These both lines generates rand no bw 1 to 100
    n = rand() % 100 + 1;
    // printf("The no. is %d \n",n);
    // keep running the loop until no. is guessed
    do
    {
       printf("Guess the no. between 1 to 100 \n");
       scanf("%d", &guess);
        if (guess > n)
        {
            printf("Lower no. Please .\n");
        }
        else if (guess < n)
        {
            printf("Higher no. Please .\n");
        }
        else
        {
            printf("You guessed it in %d attempts .\n", nguess);
        }
        nguess++;
    } while (guess != n);

    return 0;
}