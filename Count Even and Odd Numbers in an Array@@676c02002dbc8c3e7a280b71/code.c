#include<stdio.h>
int main()
{
    int i,n,evencount=0,oddcount=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0,i<n;i++){
        if(arr[i]==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("%d %d",evencount,oddcount);
    return 0;
}