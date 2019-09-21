#include<iostream>
#include<conio.h>
#include<stdlib.h>
void AddMatrix(int *A,int *B,int*C,int M,int N);
int AllocMatrix(int **A,int M,int N) ;
void FreeMatrix(int *A);
void InputMatrix(int *A,int M,int N,char Symbol);
void DisplayMatrix(int *A,int M,int N);	 
using namespace std;
 int main()
 {
	 int M,N;
	 int *A = NULL,*B = NULL,*C = NULL;
	 system("cls");
	 cout<<"Nhap so dong cua ma tran:";	 cin>>M;
	 cout<<"Nhap so cot cua ma tran:"; 	 cin>>N;
 	//C?p phát vùng nh? cho ma tr?n A
	 if (!AllocMatrix(&A,M,N))
	 {
		 cout<<"Khong con du bo nho!"<<endl;
		 return 1;
	 }
	//C?p phát vùng nh? cho ma tr?n B
	 if (!AllocMatrix(&B,M,N))
	 {
		 cout<<"Khong con du bo nho!"<<endl;
		 FreeMatrix(A);//Gi?i phóng vùng nh? A
		 return 1;
	 }
	 //C?p phát vùng nh? cho ma tr?n C
	 if (!AllocMatrix(&C,M,N))
	 {
		 cout<<"Khong con du bo nho!"<<endl;
		 FreeMatrix(A);//Gi?i phóng vùng nh? A
		 FreeMatrix(B);//Gi?i phóng vùng nh? B
		 return 1;
	 }
	cout<<"Nhap ma tran thu 1"<<endl;
	 InputMatrix(A,M,N,'A');
	 cout<<"Nhap ma tran thu 2"<<endl;
	 InputMatrix(B,M,N,'B');
	 system("cls");
	 cout<<"Ma tran thu 1"<<endl;
	 DisplayMatrix(A,M,N);
	 cout<<"Ma tran thu 2"<<endl;
	 DisplayMatrix(B,M,N);
	 AddMatrix(A,B,C,M,N);
	 cout<<"Tong hai ma tran"<<endl;
	 DisplayMatrix(C,M,N);
	 FreeMatrix(A);//Gi?i phóng vùng nh? A
	 FreeMatrix(B);//Gi?i phóng vùng nh? B
	 FreeMatrix(C);//Gi?i phóng vùng nh? C
	 return 0;
 }
	//C?ng hai ma tr?n
	 void AddMatrix(int *A,int *B,int*C,int M,int N)
	 {
		 for(int I=0;I<M*N;++I)
		 C[I] = A[I] + B[I];
	 }
	 //C?p phát vùng nh? cho ma tr?n
	 int AllocMatrix(int **A,int M,int N)   // chú ý : **
	 {
		 *A = new int [M*N];
		 if (*A == NULL)
		 return 0;
		 return 1;
	 }
	 //Gi?i phóng vùng nh?
	 void FreeMatrix(int *A)
	 {
		 if (A!=NULL)
		 delete [] A;
	 }
//Nh?p các giá tr? c?a ma tr?n
	 void InputMatrix(int *A,int M,int N,char Symbol)
	 {
		 for(int I=0;I<M;++I)
		 for(int J=0;J<N;++J)
		{
			cout<<Symbol<<"["<<I<<"]["<<J<<"]=";
			cin>>A[I*N+J];
		}
	}
	 //Hi?n th? ma tr?n
	 void DisplayMatrix(int *A,int M,int N)
	 {
		 for(int I=0;I<M;++I)
		 {
		       for(int J=0;J<N;++J)
		       {
		                cout.width(7);//canh le phai voi chieu dai 7 ky tu
			cout<<A[I*N+J];
		        }
		        cout<<endl;
		 }
	 }

