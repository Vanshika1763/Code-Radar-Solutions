#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='R'&&ch!='G'&&ch!='y'){
        printf("Stop");
    }
    else if(ch=='G'&&ch!='R'&&ch!='Y'){
        printf("Go");
    }
    else if(ch=='Y'&&ch!='R'&&ch!='G'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}