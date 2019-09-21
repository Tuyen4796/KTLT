#include<iostream>
#include<conio.h>
#include<stdlib.h>
#incldue<string.h>
using namespace std;
int main(){
	int M,N;
	int *A = NULL, *B = NULL, *C =NULL;
	clrscr();
	cout << "Nhap vao so dong cua ma tran thu nhat" << endl; cin >> M;
	cout << "Nhap vao so cot cua ma tran" << endl; cin >> N;
	if(!allocMatrix(&A,M,N)) {
		cout << "khong du bo nho cap phat" << endl;
		return 1;
	}
	if(!allocMatrix(&B,M,N)){
		cout << "Khong du bo nho cap phat ma tran B" << endl;
		freeMatrix(A);
		return 1;
	}
	if(!(allocMatrix(&C,M,N))){
		cout << "Khong du bo nho cap phat ma tran C" << endl;
		freeMatrix(A);
		freeMaxtix(B);
		return 1;
	}
	cout << " Nhap vao ma tran A" << endl; inputMatrix(A);
	cout << " Nhap vao ma tran A" << endl; inputMatrix(A);
	cout << "Ma tran A" << endl; display(A);
	cout << "Ma tran B" << endl; display(B);
	addMatrix(C,A,B,M,N);
	cout << "Tong cua ma tran A va B" << endl;
	display(C);
	freeMatrix(A);
	freeMatrix(B);
	freeMatrix(C);
	return 1;

}
void inputMatrix(){
	cout << "Nhap vao cac phan tu cua ma tran %c"
}
int display(){
	
}
int allocMatrix(int **A, int M, int N){
	A = new int [M*N];
}
void freeMatrix(){
	
}
int addMatrix(){
	
}


