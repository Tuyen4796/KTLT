#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[10],str2[100];
	printf("nhap vao xau ki tu 1\n");
	fflush(stdin);
	gets(str);
	printf("nhap vao xau ki tu 2\n");
	printf("xau 1 la %s \n ");puts(str);
	fflush(stdin);
	gets(str2);
	printf("xau 2 la %s \n ");puts(str2);
	int dodai;
	dodai = strlen(str);
	printf("Do dai xau bang :%d \n ",dodai);
}
