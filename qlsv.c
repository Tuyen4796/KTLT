#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void bosung();
void sapxep();
void inds();
char ch;
int n;
int main(){
	while(1){
	system(cls);
	printf("\n \n \n \n");
	printf("\n Chuong trinh quan li sinh vien " );
	printf("\n 1. Bo sung danh sach");
	printf("\n 2. Sap xep danh sach");
	printf("\n 3. In danh sach ");
	printf("\n Lua  chon cac phim tu 1-3 de chon chuc nang nhe");	
	}
	fflush(stdin);

	ch = getch();
	
	if (ch == '1') bosung();
	else if (ch == '2') sapxep();
	else if (ch == '3') in danh sach;
	else {
	printf("chan roi thi nhan y c/k ?");
	fflush(sdtin);
	ch == getch();
	if(ch == 'y' || ch == 'Y') break;	
	}

}
 void bosung(){
	while(n<1000){
	printf("Nhap vao danh sach thu %d", n+1 );
	fflush(stdin);
	gets(ds[n]);
	if (ds[n][0] == '\0') break;
	n++;
	}
}
void sapxep(){
	int 
}

void inds(){
	int i;
	printf("\n danh sach sinh vien da sap xep");
	for(i=0; i<n; i++){
		puts(ds[i]);
	getch();
	}
}
