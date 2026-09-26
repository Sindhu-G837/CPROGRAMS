#include<stdio.h>
int climbstairs(int n){
    if(n<=2) return n;
int a=1,b=2,c;
for(int i=0;i<3;i++){
c=a+b;
a=b;
b=c;
}
return b;
}
int main(){
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    printf("number of ways:%d\n",climbstairs(n));
    return 0;

}