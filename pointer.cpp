#include<stdio.h>
#include<conio.h>
int main(){
	int *p,*q,a=10,b = 20;
	
	p = &a;
	q = &b;
	printf(" p = %d\n",p);
	printf(" q = %d\n",q);
	printf("gia tri tro toi p = %d\n",*p);
	printf("gia tri tro toi q = %d\n",*q);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("\nket thuc mot phan\n");
	*p = *q;
	
	printf(" p = %d\n",p);
	printf(" q = %d\n",q);
	printf("gia tri tro toi p = %d\n",*p);
	printf("gia tri tro toi q = %d\n",*q);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
		printf("\nket thuc mot phan\n");

	p = q;
	
	printf(" p = %d\n",p);
	printf(" q = %d\n",q);
	printf("gia tri tro toi p = %d\n",*p);
	printf("gia tri tro toi q = %d\n",*q);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	
/*	p = &a;
	printf(" p = %d\n",p);
	printf("a = %d\n",a);
	p = &b;
	printf("a = %d\n",a);
	printf(" p = %d\n",p);
	printf(" b = %d\n",b);
	printf("gia tri tro toi p = %d\n",*p);
	*/
	
}
