// Prints a row of question marks
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; // not yet don't know what value is n. Garbage Value.
    do
    {
        n = get_int ("width: ");
    }
    while (n < 1);
    for (int i =0; i <n; i++)
    {
        printf("?");
    }
    printf("\n");
}
