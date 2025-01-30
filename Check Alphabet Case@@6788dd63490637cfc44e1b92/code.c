#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("Uppercase");
    }
    else if(islower(ch)){
        printf("Loweracase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;

}