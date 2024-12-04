#include<stdio.h>
int main(){
    int arr[5] = {5,2,6,7,1};
    printf("Mang truoc khi sap xep : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < 5; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;   
        }
    }
    printf("Mang sau khi sap xep : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }   
}