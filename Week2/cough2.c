#include <stdio.h>
//User-defined functions
void cough(void);

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        cough();
    }
}

void cough(void)
{
    printf("cough\n");
}