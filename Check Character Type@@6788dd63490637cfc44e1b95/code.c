#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char ch;
    scanf("%c",&ch)
    if(isalpha(ch)){
        //ch=tolower(ch);
        if(ch=='a' || ch=='e'||ch=='i'||ch=='o'|| ch=='u' ||ch='A' || ch=='E'|| ch=='I' || ch=='O'|| ch=='U')printf("Vowel");
        else printf("Consonant");
    }
    else if(0<=ch<=9)printf("Digit");
    else printf("Special Character");


    return 0;
}