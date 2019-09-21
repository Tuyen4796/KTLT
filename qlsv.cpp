#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

char ds[1000][30],tg[30];
int n=0;

void bosung();
void sapxep();
void inds();

int main(){
	while(1){
	char ch;
	system("cls");
	printf("\n \n \n \n");
	printf("\n Chuong trinh quan li sinh vien " );
	printf("\n 1. Bo sung danh sach");
	printf("\n 2. Sap xep danh sach");
	printf("\n 3. In danh sach ");
	printf("\n Lua  chon cac phim tu 1-3 de chon chuc nang nhe \n ");	
	fflush(stdin);
	ch = getch();
	if (ch == '1') bosung();
	else if (ch == '2') sapxep();
	else if (ch == '3') inds;
	else {
	printf("chan roi thi nhan y c/k ?");
	fflush(stdin);
	ch == getch();
	if(ch == 'y' || ch == 'Y')  break;	
	}
}

}
 void bosung(){
	while(n<1000){
	printf("\n Nhap vao danh sach thu %d : \n", n+1 );
	fflush(stdin);
	gets(ds[n]);
	if (ds[n][0] == '\0') break;
	n++;
	}
}
void sapxep(){
	int i,j,k;
	for(i=0;i<n;i++){
		k=i;
		for(j=i+1;i<n;j++){
			if(stricmp(ds[k],ds[j])>0) k = j;
			if (k>i){
				strcpy(tg,ds[i]);
				strcpy(ds[i],ds[k]);
				strcpy(ds[k],tg);
			}
		}
	}
	printf("\n Done");
	getch();
}

void inds(){
	int i;
	printf("\n danh sach sinh vien da sap xep");
	for(i=0; i<n; i++){
		puts(ds[i]);
	//	printf("da in");
	getch();
	}
}
