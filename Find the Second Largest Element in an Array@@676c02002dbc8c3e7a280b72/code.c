#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int size,i;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    if(size<2){
        printf("-1\n");
    }
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest&&arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    if(second_largest==arr[i]){
        printf("-1\n");
    }
    else{
        printf("%d",second_largest);
    }
    return 0;
}