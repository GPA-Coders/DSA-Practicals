// Insert element into array

#include<stdio.h>

void main(){
    printf("Enter the size of array : ");
    int n;
    scanf("%d", &n);

    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    int index, element;
    printf("Enter the index for insertion : ");
    scanf("%d", &index);
    printf("Enter the element for insertion : ");
    scanf("%d", &element);

    for (int i = n-1; i >= index; i--)
    {
        a[i+1] = a[i];
    }

    a[index] = element;

    printf("\n\n");
    for (int i = 0; i <= n; i++)
    {
        printf("The element at a[%d] : %d\n", i, a[i]);
    }
}