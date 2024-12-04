#include<stdio.h>
int main(){
    int arr[10] = {1,3,5,7,9,11,13,15,17,19};
    int n,i,check = 0;
    printf("Nhap so nguyen bat ki : ");
    scanf("%d",&n);
    for (i = 0; i < 10; i++)
    {
        if (n == arr[i])
        {
            printf("Vi tri cua phan tu la : arr[%d] = %d\n",i,arr[i]);
            check++;
        }
    }
    if (check == 0)
    {
        printf("Phan tu khong ton tai trong mang!\n");
    }   
}