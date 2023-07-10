#include <stdio.h>

int main(void)
{
    int toes = 10;
    int toes_2x;
    int toes_square;
    
    toes_2x = 2 * toes;
    toes_square = toes * toes;
    
    printf("Human got %d toes\n", toes);
    printf("Two humans got %d toes\n", toes_2x);
    printf("Ten humans got %d toes", toes_square);
    getchar();
    
    return 0;
}