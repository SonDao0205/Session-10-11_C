#include<stdio.h>
int main(){
    int arr[10] = {1,3,5,7,9,11,13,1,15,17};
    int k=0;
    int count[100];
    int n;
    printf("Nhap so nguyen bat ki : ");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        if (n == arr[i])
        {
            count[k++] = i;
        }
    }
    if (k > 0) {
        printf("So %d trong mang tai vi tri : \n", n);
        for (int i = 0; i < k; i++) {
            printf("arr[%d]\n", count[i]);
        }
    } else {
        printf("Khong ton tai trong mang.\n");
    }

}