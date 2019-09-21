#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[100],bc[27];
	printf("nhap vao xau ki tu \n ");
	fflush(stdin);
	gets(str);
	for(int i=0; i < strlen(str);i++){
		int k=1;
		for(int j =i+1;j< strlen(str);j++){
			if (int(str[i] )== int(str[j]) &&  )k++ ;
		}
		bc[i]= str[i];
		printf("so ki tu %c la %d \n",str[i],k);
		k=1;
	}
	
}

