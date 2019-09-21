#include<iostream>
#include<stdlib.h>
using namespace std;
void CapPhat(int **a);
void dele(int *a);
int main(){
	int *a;
	CapPhat(&a);
	a[1] = 10;
	cout << a[1]<< endl;
	dele(a);
	a[2] = 100;
	cout << a[2]<< endl;
}
void CapPhat(int **a){
	*a = new int[10];
}
void dele(int *a){
	delete a;
	delete []a;
}
