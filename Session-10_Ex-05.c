#include<stdio.h>
int main(){
    int arr[10] = {8,6,9,4,2,3,5,1,7,10};
    int n,size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j+1]<arr[j])
            {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Nhap so nguyen bat ki : ");
    scanf("%d",&n);
    int mid, start = 0, end = size - 1;
    while (start <= end)
    {
        mid = (start + end)/2;
        if (arr[mid]>n)
        {
            end = mid - 1;
        }
        else if(arr[mid]<n)
        {
            start = mid + 1;
        }
        else{
            printf("phan tu %d co vi tri arr[%d]\n",n,mid);
            break;
        }
    }
}