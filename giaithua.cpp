#include<stdio.h>

int giaithua(int n){
	if(n==0) return 1;
	else return n*giaithua(n-1);
}
float tong(float n){
	if(n == 1) return 1;
	else return 1.0/(n*(n+1)) + tong(n-1);
}
int f(int n){
	if (n==1  || n ==2) return 1;
	else return (f(n-1) + f(n-2));
}
int main(){
	printf("%d",f(6));
}
