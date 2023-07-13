#include <stdio.h>

int main(void)
{
    float cm, meters;
    char name[20];
    
    printf("Enter your name:\n");
    scanf("%s", &name);
    printf("Enter your height in cm:\n");
    scanf("%f", &cm);

    meters = cm / 100;
    
    printf("%s, you height is %.2f meters", name, meters);
    getchar();
    
    return 0;
}