#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int CapPhatBoNho(int **a,int m,int n);
void NhapMaTran(int *a,int m,int n);
void TongMaTran(int *a, int *b, int *c, int m, int n);
void HienThiMaTran(int *c,int m, int n);
void XoaBoNho(int *a);
int main(){
	int *a= NULL,*b= NULL,*c = NULL;
	int m,n;
	cout << "Nhap so hang" ; cin >> m;
	cout << "Nhap so cot"; cin >> n;
	if(!CapPhatBoNho(&a,m,n)){
		cout << "Khong du bo nho";
		return 1;
	}
		if(!CapPhatBoNho(&b,m,n)){
		cout << "Khong du bo nho";
		XoaBoNho(a);
		return 1;
	}
		if(!CapPhatBoNho(&c,m,n)){
		cout << "Khong du bo nho";
		XoaBoNho(a);
		XoaBoNho(b);
		return 1;
	}
	cout << "Nhap ma tran a" << endl;NhapMaTran(a,m,n);
	cout << "Nhap ma tran b" << endl;NhapMaTran(b,m,n);
	system("cls");
	TongMaTran(a,b,c,m,n);
	cout << "Tong cua ma tran la" << endl;
	HienThiMaTran(c,m,n);
	XoaBoNho(a);
	XoaBoNho(b);
	XoaBoNho(c);
	
} 
int CapPhatBoNho(int **a,int m,int n){
	*a = new int[m*n];
	if(*a = NULL) return 0;
	return 1;
}
void NhapMaTran(int *a, int m, int n){
	for(int i =0; i< m ; i++)
		for (int j = 0; j< n; j++){
					cout << "[" << i << "]" << "[" << j << "] = " ;
					cin >> a[n*i+j];
		}

	
}
void TongMaTran(int *a, int *b, int *c, int m, int n){
	int i;
	for(i=0; i< m*n ; i++){
		c[i] = a[i] + b[i];
	}
}
void NhapMaTran(int *a,int m,int n)
	 {
		 for(int i=0;i<m;++i)
		 for(int j=0;j<n;++j)
		{
			cout <<"["<<i<<"]["<<j<<"]=";
			cin>>a[i*n+j];
		}
	}

void XoaBoNho(int *a){
	if(a!=NULL){
		delete a;
		delete []a;
	}
}
