#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p\n", &n); //pointer
    printf("%i\n", *&n); //* go to address
}
