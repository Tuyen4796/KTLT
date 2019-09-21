#include<iostream>
#include<conio.h>
#include<stdlib.h>
int capphat(int **a);
using namespace std;
int main(){	
	int *a = NULL;
	if(!capphat(&a)){
		cout << "khong du bo nho" << endl ;
	};
	//cout << a;
}
int capphat(int **a){
	*a = new int[10000000000000000];
	if(*a = NULL) return 0;
	return 1;
}
//int tong(int a[3][3])
