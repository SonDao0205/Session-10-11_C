#include<stdio.h>
int main(){
    int arr[5] = {4,2,6,3,8};
    printf("Mang ban dau : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    for (int i = 1; i < 5; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] =arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
    printf("\nMang sap xep theo thu tu tang dan : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
}