#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char *tinhthanh;
	char tinh[20] = "da lat";
	tinhthanh = tinh;
	printf("%c",*(tinhthanh+1));
}
