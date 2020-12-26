#include <stdio.h>

void printArr(int A[], int n) {
int i;
for (i = 0; i < n; i++)
        printf("%d |", A[i]);
    printf("\n");
}
void InsertionSort(int A[], int n)
{
    int i, j , key;
    printArr(A,n);
    for (j = 1; j < n; j++) {
        key = A[j];
        //insertion of A[j] in the sorted numbers
        i = j - 1;
        while (i >= 0 && A[i]> key) {
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = key;
        printArr(A,n); //this is just for clearer view of the whole algorithm
    }
}

void main()
{
    int A[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(A) / sizeof(A[0]);
    int i;
    InsertionSort(A, n);
}
