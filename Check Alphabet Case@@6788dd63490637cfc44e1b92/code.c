#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(isupper(a)){
        printf("Uppercase",a);
    }
    else if(islower(a)){
        printf("Loweracase",a);
    }
    else{
        printf("Not an alphaber",a);
    }
    return 0;

}