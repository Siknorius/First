#include <stdio.h>

void jolly();

void deny();

int main (void)
{
    jolly();
    jolly();
    jolly();
    deny();
    getchar();
    
    return 0;
}

void jolly()

{
    printf("He is funny good lad!\n");
}

void deny()

{
    printf("No one can't deny it!\n");
}