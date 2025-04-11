#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 3, 1, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[n];

    // Initialize the visited array to 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Element Frequency\n");

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip already counted elements
        }

        int count = 1; // Count starts at 1 for the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicates as visited
            }
        }
        printf("%d %d\n", arr[i], count); // Print the element and its frequency
    }

    return 0;
}
