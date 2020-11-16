#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int left, int middle, int right)
{
    int i, j, k;
    int left_size = middle - left + 1;
    int right_size = right - middle;

    /* create temp arrays */
    int L[left_size], R[right_size];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < left_size; i++)
        L[i] = arr[left + i];
    for (j = 0; j < right_size; j++)
        R[j] = arr[middle + 1 + j];
    i = 0;
    j = 0;
    k = left;
    while (i < left_size && j < right_size) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < left_size) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < right_size) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left < right) {
        int center = left + (right - left) / 2;
        mergeSort(arr, left, center);
        mergeSort(arr, center + 1, right);

        merge(arr, left, center, right);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

/* Driver code */
int main()
{
    int n,left=0,right,input;
    printf("\t\t\tHow many numbers do want to enter ? :");
    scanf("%d",&n);
    int arr[n];
    printf("\t\t\tPlease enter %d numbers? :",n);
    for(input=0;input<n;input++){
        scanf("%d",&arr[input]);
    }
    mergeSort(arr, left, n - 1);

    printf("\t\t\Shorted numbers is \n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
