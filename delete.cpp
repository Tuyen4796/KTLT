#include<iostream>
using namespace std;
int main(){
	int *p;
	int a= 3;
	p = &a;
	cout << *(p+1000) << endl;
}
