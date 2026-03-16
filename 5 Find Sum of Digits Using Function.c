#include<stdio.h>

int sum(int n){
int s=0;
while(n>0){
s=s+n%10;
n=n/10;
}
return s;
}

int main(){
int n;
scanf("%d",&n);
printf("%d",sum(n));
return 0;
}