#include<iostream>
#include<conio.h>
#include<stdlib.h>
int main(){
	int **p2p,*p;
	int a=2;
	p = &a;
	p2p = &p; 
	printf("p2p = %X",**p2p);
	printf("p = %X",p);
	printf("a = %X",a);
	
}
