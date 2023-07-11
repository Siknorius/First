#include <stdio.h>

int main(void)
{
    float quarts, grams, molecules;
    
    printf("How much water do you drink daily (in quarts):\n");
    scanf("%f", &quarts);
    
    grams = quarts * 950;
    molecules = grams / 3.0e-23;
    
    printf("You consume daily %e water molecules", molecules);
    getchar();getchar();

    return 0;
}