#include <stdio.h>

int main(void)
{
    char ascii;

    printf("Enter ASCII code:\n");
    scanf("%d", &ascii);
    printf("ASCII code for %d is %c", ascii, ascii);
    getchar();
    getchar();
    
    return 0;
}