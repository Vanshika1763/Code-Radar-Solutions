#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(isupper(a)){
        printf("Uppercase");
    }
    else if(islower(a)){
        printf("Loweracase");
    }
    else{
        printf("Not an alphaber");
    }
    return 0;

}