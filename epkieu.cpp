#include<iostream>
using namespace std;
int main(){
	void* p ;
	int a = 2;
	p = &a;
	cout << (int*)p << endl;
}
