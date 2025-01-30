#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("Uppercase",ch);
    }
    else if(islower(ch)){
        printf("Loweracase",ch);
    }
    else{
        printf("Not an alphabet",ch);
    }
    return 0;

}