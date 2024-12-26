#include <stdio.h>



// Recursive Binary Search

int binarySearch(int arr[], int low, int high, int target) {

    if (low > high) {

        return -1; // Element not found

    }



    int mid = (low + high) / 2;



    if (arr[mid] == target) {

        return mid; // Element found at index 'mid'

    } else if (arr[mid] > target) {

        return binarySearch(arr, low, mid - 1, target); // Search in the left half

    } else {

        return binarySearch(arr, mid + 1, high, target); // Search in the right half

    }

}



// Recursive Selection Sort

void selectionSort(int arr[], int n, int index) {

    if (index >= n - 1) {

        return;

    }



    int minIndex = index;

    for (int i = index + 1; i < n; i++) {

        if (arr[i] < arr[minIndex]) {

            minIndex = i;

        }

    }



    // Swap the minimum element with the current element

    if (minIndex != index) {

        int temp = arr[minIndex];

        arr[minIndex] = arr[index];

        arr[index] = temp;

    }



    selectionSort(arr, n, index + 1);

}



// Recursive Multiplication using Repeated Addition

int multiply(int a, int b) {

    if (b == 0) {

        return 0;

    } else if (b > 0) {

        return a + multiply(a, b - 1);

    } else {

        return -multiply(a, -b); // Handle negative numbers

    }

}



int main() {

    int arr[] = {64, 25, 12, 22, 11};

    int n = sizeof(arr) / sizeof(arr[0]);



    int searchElement, result;



    printf("Enter an element to search: ");

    scanf("%d", &searchElement);



    result = binarySearch(arr, 0, n - 1, searchElement);



    if (result != -1) {

        printf("Element found at index %d\n", result);

    } else {

        printf("Element not found\n");

    }



    selectionSort(arr, n, 0);

    printf("Sorted Array: ");

    for (int i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");



    int num1, num2;

    printf("Enter two numbers to multiply: ");

    scanf("%d %d", &num1, &num2);

    int product = multiply(num1, num2);

    printf("Product of %d and %d is: %d\n", num1, num2, product);



    return 0;

}
