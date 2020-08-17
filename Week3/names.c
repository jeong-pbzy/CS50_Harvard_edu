#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string names[4];
    names[0] = "EMMA"; //EMMA\0
    names[1] = "RODRIGO"; //RODRIGO\0
    names[2] = "BRIAN"; //BRIAN\0
    names[3] = "DAVID"; //DAVID\0

    printf("%s\n", names[0]);
    printf("%c%c%c%c\n", names[0][0], names[0][1],names[0][2],names[0][3]);
    
}
