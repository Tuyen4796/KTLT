#include<iostream>
#include<string.h>
using namespace std;
typedef struct SP{
	int thuc;
	int ao;
};

SP set(int a, int b){
	SP tmp;
	tmp.ao = b;
	tmp.thuc = a;
	return tmp;
}
SP operator + (SP a, SP b){
	SP tmp;
	tmp.ao = a.ao + b.ao;
	tmp.thuc = a.thuc + b.thuc;
	return tmp;
	
}
void display(SP c){
	cout << c.thuc << "i" << "+" << c.ao << endl;
}
using namespace std;
int main(){
	SP c,c1, c2;
	c1 = set(2,3);
	c2 = set(2,3);
	c = c1+ c2;
	display(c);
}
