#include<stdio.h>

int main() {
    int n, i, j, min, temp;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Elements of the array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Selection sort algorithm
    for(i = 0; i < n - 1; i++) {
        min = i; // Assume the current element is the minimum
        
        // Find the index of the minimum element in the unsorted portion
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        
        // Swap the minimum element with the current element
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
    printf("\nSorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
