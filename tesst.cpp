#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int **m;
	m = new int*[10];
	int *a ;
	a = new int[100];
	//*m = a + 10;
	m[1][2] = 10;
	
	cout << "m+1" << m+1 <<endl;
	cout <<"m[1]\t="<< m[1]<< endl;
	cout << "&m[1]\t=" << &m[1]<< endl;
	cout <<"*(m+1)\t=" << *(m+1) << endl;
	cout << "&*(m+1)\t=" << &*(m+1)<< endl;
	cout << "*(*(m+1)+2)\t=" << *(*(m+1)+2) << endl;
	cout << "m[1][2]\t="<<m[1][2]<< endl;
	cout << "&m[1][2]\t=" << &m[1][2] << endl;
}
