#include <stdio.h>
int main()
{
    char s[100];
    scanf("%99[^\n]",&s);
    printf("You entered :%s",s);
    return 0;
}