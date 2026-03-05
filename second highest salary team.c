#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n < 2) {
        printf("No second highest salary");
        return 0;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
        printf("No second highest salary");
    else
        printf("%d", secondLargest);

    return 0;
}