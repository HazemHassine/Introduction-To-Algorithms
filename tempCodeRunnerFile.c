void Merge(int A[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1],i,j,k;
    int R[n2];
    for (i = 0; i < n1; i++)
        L[i] = A[p + 1];
    for (j = 0; j < n2; j++)
        R[j] = A[q + 1 + j];
    i = 0;
    j = 0;
    k= 1;
    L[n1 + 1] = 9000;
    R[n2 + 1] = 9000;
    for (k = p; k < r; k++)
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i = i + 1;
        }
        else if (A[k] = R[j])
            j = j + 1;
}
void printArr(int T[])
{
    int i;
    int n = sizeof(*T) / sizeof(T[0]);
    for (int i = 0; i < n; i++)
        printf("%d |", T[i]);
    printf("\n");
}