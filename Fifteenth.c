#include <stdio.h>

int main(void)
{
    float height_cm, height_inches;
    float cm_to_inch = 2.54;

    printf("Your height in cm:\n");
    scanf("%f", &height_cm);
    
    height_inches = height_cm / cm_to_inch;
    
    printf("Your height in inches is %f", height_inches);
    getchar();getchar();
    
    return 0;
}