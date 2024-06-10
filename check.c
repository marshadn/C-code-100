#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int arr[5] = {1, 2};
    //  int k = sizeof(arr) / sizeof(arr[0]);
    // printf("%d", arr[5]);

    int a;
    int arr[] = {1, 2, 3, 4, 5, 6};
    // arr[1] = ++arr[1];
    // a = arr[1]++;
    // arr[1] = arr[a++];
    // printf("%d,%d", a, arr[1]);

    int i, j, k;
    j = ++arr[2];
    k = arr[1]++;
    i = arr[j++];
    printf("i=%d,j=%d,k=%d", i, j, k);
    return 0;  
}