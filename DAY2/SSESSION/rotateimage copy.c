#include<stdio.h>

void rotate(int matrix[][3],int n) {

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        int left=0;
        int right=n-1;

    while(left<right){
        int temp=matrix[i][left];
        matrix[i][left]=matrix[i][right];
        matrix[i][right]=temp;

        left++;
        right--;
    }    
    }
}
int main(){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int n=3;
    rotate(matrix,n);
    printf("Rotate Matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}