// Linear Search

#include<stdio.h>

int main(){
    int a[5], element;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter element at a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to search : ");
    scanf("%d", &element);

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == element)
        {
            printf("Element found at index : %d", i);
            return 0;
        }
    }
    
    printf("Element is not present in array...");
    return 0;
}