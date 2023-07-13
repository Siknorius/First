#include <stdio.h>
#include <float.h>

int main (void)
{
    float numf = 1.0/3.0;
    double numd = 1.0/3.0;

    printf("float: %.4f; double: %.4f \n", numf, numd);
    printf("float: %.12f; double: %.12f \n", numf, numd);
    printf("float: %.16f; double: %.16f \n", numf, numd);
    printf("%d %d", FLT_DIG, DBL_DIG);
    getchar();

    return 0;
}