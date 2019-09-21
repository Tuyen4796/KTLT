#include<stdio.h>
#include<conio.h>
void hoanvi(int *a, int *b);
int main(){
	int a,b;
	printf("nhap vao hai so a va b\n");
	printf("nhap vao a : \n");
	scanf("%d",&a);
	printf("nhap vao b : \n");
	scanf("%d",&b);
	hoanvi(&a,&b);
	printf("a = %d, b = %d",a,b);
}
void hoanvi(int *p1, int *p2){
	int *temp;
	temp = p1;
	p2 = p1;
	p1 = temp;
}
