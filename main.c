// bubble sort
// big o (n^2) - omega (n^2) - omega (n)

#include <stdio.h>
void swap(int *a, int *b);
void bubble(int arr[], int n);
int main(void)
{
    int arr[] = {12, 77, 88 ,99 ,33 ,1 ,44,-5,-9,-1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble(arr,n);
    for (int i = 0 ; i < n ; i++) {
        printf("%i\t",arr[i]);
    }

}
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubble(int arr[], int n) {
    for (int i = 0 ; i < (n-1) ; i++) {
        for (int j = 0 ; j < n - 1 - i ; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j],&arr[j+1]);
                if (arr[j] == arr[n]){
                    return ;
                }
            }
        }
    }
}