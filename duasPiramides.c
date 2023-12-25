#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do{
        h = get_int("How tall is the pyramid? ");
    } while ( h < 1 || h > 8);

    for ( int i = 0; i < h; i++)
    {
      for (int j = 0; j < h - i - 1; j++)
        {
            printf(" ");
        }
        for ( int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");

        for ( int d = 0; d <=i; d++)
        {
            printf("#");
        }
        printf("\n");
    }
}
