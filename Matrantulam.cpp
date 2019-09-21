#include<iostream>
#include<stdlib.h>
#include<conio.h>
typedef struct Matrix{
	int row,col;
	float **data;
};
using namespace std;
int main(){
	int row,col;
	float *a= NULL,*b=NULL,*c=NULL;
	cout << "Chuong trinh tinh toan ma tran" << endl;
	cout << "Nhap vao kich thuoc cua ma tran " << endl;
	cout << "Nhap vao so hang : \t " ; cin >> row;
	cout << " Nhap vao so cot : \t" ; cin >> col;
	cout << endl;
	if(!allocMatrix()){
		cout << "Khong du bo nho cap phat" << endl;
		return 1;
	}
	cout << " Nhap vao thong tin ma tran a";
	InputMatrix();
	cout << " Nhap vao thong tin ma tran b";
	InputMatrix();
	cout << "Tong cua hai ma tran a va b la" << endl;
	AddMatrix():
	DisplayMatrix();
	MultiMatrix();
	DisplayMatrix();
}
