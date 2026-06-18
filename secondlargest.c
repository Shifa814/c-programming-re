#include <stdio.h>

int secondLargest(int arr[], int n)
{
    int largest, secondLargest;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    int arr[] = {10, 25, 8, 40, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Second Largest Element = %d\n", secondLargest(arr, n));

    return 0;
}