#include<stdio.h>

int main(){
    int a=5,b=4;
    printf("Before Swapping: a=%d b=%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swapping: a=%d b=%d\n",a,b);
    return 0;
}