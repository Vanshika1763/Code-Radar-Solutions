#include <stdio.h>
int main()
{
    char s[100];
   // int a;
    //scanf("%d",&a);
    //printf("%d",a);
    scanf("%99[^\n]",&s);
    printf("You entered : %s\n",s);
    return 0;
}