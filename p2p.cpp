#include<stdio.h>
#include<conio.h>
int main(){
	int **pp;
	int *p1;
	int p2=10;
	p1 = &p2;
	*pp = p1;
	printf("pp = %X \n",pp );
	printf("*pp = %X \n",*pp );
	printf("p1 = %X \n",p1 );
	printf("dia chi p1 = %X \n",&p1 );
	printf("p2 = %X \n",p2 );
	printf("dia chi p2 = %X \n",&p2 );
	
}
