#include<stdio.h>

int main(){
int res=0, a=0;
char c;
printf("Enter operator(+,-,*,/) and number\n");
while(a!=1){
        scanf("%c %d",&c,&a);
        if(c=='+') res+=a;
        else if(c=='*') res*=a;
        else res/=a;
        }
printf("res %d \n",res);
return 0;
}
