#include <stdio.h>
int main()
{
    char ch;
    int a;
    scanf("%c",&ch);
    scanf("%d",&a);
    if((ch==a)||(ch==e)||(ch==i)||(ch==o)||(ch==u)){
        printf("Vowel");
    }
    else if((ch>=a)&&(ch<=z)){
        printf("Consonant");
    }
    else if((a>=0)&&(a<=9)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}