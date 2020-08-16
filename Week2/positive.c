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
// 인트가 출력의 종류. 괄호안의 보이드는 입력의 종류 . 만약 입출력이 없다면 보이드.
// int mean output type.
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
