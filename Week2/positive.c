// Abstraction and scope

#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf("%i\n", i);
}

// Prompt user for positive integer
int get_positive_int(void) 
// funtion not input antyting. it just input anyting integer
// but, it function do want output something = int
// int is type of output. (void) is type of input.
// input and output is nothing. it just use Void.

{
    int n;
    do
    {
        n = get_int("Positive Integer: ");
    }
    while(n < 1);
    return n;
}
