#include<iostream>
using namespace std;
int PointTest(int **a){
	int b = 10;
	*a = &b ;
	return 1;
}
int main(){
	int *a;
	int c =5;
	a = &c;
	cout << a << endl;
	PointTest(&a);
	cout << a << endl;

}




