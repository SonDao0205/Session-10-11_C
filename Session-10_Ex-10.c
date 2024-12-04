#include<stdio.h>
int main(){
    int m,n;
    printf("Nhap so hang : ");
    scanf("%d",&m);
    printf("Nhap so cot : ");
    scanf("%d",&n);
    if (m == n)
    {
        int arr[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("arr[%d][%d] = ",i,j);
                scanf("%d",&arr[i][j]);
            }
        }
        printf("Mang ban dau : \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i][n-i-1]<arr[j][n-j-1])
                {
                    int temp = arr[i][n-i-1];
                    arr[i][n-i-1] = arr[j][n-j-1];
                    arr[j][n-j-1] = temp;
                }   
            }   
        }
        printf("Mang duoc sap xep giam dan theo duong cheo phu : \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Mang khong sap xep thanh duong cheo phu duoc!");
        return 0;
    }
    
}
