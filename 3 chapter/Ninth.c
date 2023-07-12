#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Max int value = %d\n", INT_MAX);
    printf("Max float val = %e\n", FLT_MAX);
    printf("Min float val = %e\n", FLT_MIN);

    printf("Int overflow: %d + 1 = %d\n", INT_MAX, INT_MAX + 1);
    printf("Float-point overflow: %e * 2 = %e\n", FLT_MAX, FLT_MAX * 2);
    printf("Float-point underflow: %e / 2 = %e", FLT_MIN, FLT_MIN / 2);
    getchar();
    
    return 0;
}