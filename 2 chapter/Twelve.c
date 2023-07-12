#include <stdio.h>

int main(void)
{
    float num1;

    printf("Enter float value: ");
    scanf("%f", &num1);
    printf("Fixed-point: %f\n", num1);
    printf("Exponential: %e\n", num1);
    getchar();getchar();
    
    return 0;
}