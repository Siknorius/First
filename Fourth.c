#include <stdio.h>
void jolly();
void deny();
int main (void)
{
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}
    void jolly()
{
    printf("Он весёлый молодец!\n");
}
    void deny()
{
    printf("Никто не может это отрицать!\n");
}