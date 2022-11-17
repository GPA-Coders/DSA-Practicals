// Delete element from array

#include<stdio.h>

void main(){
    printf("Enter the size of array : ");
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    int index;
    printf("Enter the index for deletion : ");
    scanf("%d", &index);

    for (int i = index+1; i < n; i++)
    {
        a[i-1] = a[i];
    }

    printf("\n\n");
    for (int i = 0; i < n-1; i++)
    {
        printf("The element at a[%d] : %d\n", i, a[i]);
    }
}