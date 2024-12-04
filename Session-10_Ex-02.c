#include<stdio.h>
int main(){
    int arr[5] = {4,2,6,3,8};
    printf("Mang ban dau : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-1-i; j++)
        {
            if (arr[j+1]<arr[j])
            {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nMang sap xep theo thu tu tang dan : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
}