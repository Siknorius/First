#include <stdio.h>

int main(void)
{
    char name[20], surname[20];

    printf("Enter your name and surname:\n");
    scanf("%s %s", name, surname);
    printf("Your surname is %s, %s", surname, name);
    getchar();

    return 0;
}