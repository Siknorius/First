#include <stdio.h>

int main(void)
{
int years, seconds;

    printf("Your age:\n");
    scanf("%d", &years);
    
    seconds = years * 3.156e7;
    
    printf("Your live already more than %d seconds", seconds);
    getchar();getchar();

    return 0;
}