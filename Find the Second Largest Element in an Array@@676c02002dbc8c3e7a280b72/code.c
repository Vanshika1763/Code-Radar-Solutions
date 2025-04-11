#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int largest = INT_MIN; // Initialize largest to the smallest possible value
    int second_largest = INT_MIN; // Initialize second largest to the smallest possible value

    if (size < 2) {
        printf("-1\n"); // Not enough elements for a second largest
        return 0;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = array[i];
        } else if (array[i] > second_largest && array[i] != largest) {
            second_largest = array[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("-1\n"); // If second largest is not found
    } else {
        printf("Second Largest Element: %d\n", second_largest);
    }

    return 0;
}
