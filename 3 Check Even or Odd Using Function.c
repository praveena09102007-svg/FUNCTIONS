#include<stdio.h>

int evenOdd(int n){
if(n%2==0)
return 1;
else
return 0;
}

int main(){
int n;
scanf("%d",&n);
if(evenOdd(n))
printf("Even");
else
printf("Odd");
return 0;
}