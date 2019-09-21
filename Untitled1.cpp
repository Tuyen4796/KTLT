#include<stdio.h>
#include<string.h>
int main(){
	char a[8],b[8],c[8];
	strncpy(a,"aaaaaaa",8);
	strncpy(b,"bbbbbbbb",8);
	strcpy(c,b);
	printf("%s",c);
}
