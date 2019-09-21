#include<iostream>
using namespace std;
typedef struct sp{
	int a;
	int b;
};
sp add(int a, int b){
	sp r;
	r.a = a;
	r.b = b;
	return r;	
}
int swap(int a){
	return a;
}
int main(){
//	sp c ;
//	c = add(1,2);
	int a = swap(2);
	cout << a << endl;	
	
}
