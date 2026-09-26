#include<stdio.h>
#include<stdlib.h>
void productExceptSelf(int nums[],int n){
    int prefix=0;
    int suffix=0;
   int* output=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        prefix=1;
        suffix=1;
        for(int j=0;j<i;j++){
            prefix=prefix*nums[j];
        }
        for(int j=i+1;j<n;j++){
            suffix=suffix*nums[j];
        }
        output[i]=prefix*suffix;
    }
    for(int i=0;i<n;i++){
        printf("%d ",output[i]);
    }
}
int main(){
    int nums[]={1,2,3,4};
    int n=4;
    productExceptSelf(nums,n);
    return 0;
}