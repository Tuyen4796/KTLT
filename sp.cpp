#include<iostream>
using namespace std;
typedef struct SP{
	float thuc;
	float ao;
}sp;
SP SetSP(float thuc, float ao);
void DisplaySP(SP C);
SP operator + (SP C1, SP C2);
SP operator - (SP C1, SP C2);

int main (){
	float a1,b1,a2,b2;
	SP c1,c2;
	cout << " Nhap so phuc c1" << endl;
	cout << "Phan thuc : " << endl ;
	cin >> a1;
	cout << "Phan ao" << endl;
	cin >> b1;
	
	cout << " Nhap so phuc c2" << endl;
	cout << "Phan thuc : " << endl ;
	cin >> a2;
	cout << "Phan ao" << endl;
	cin >> b2;
	
	c1 = SetSP(a1,b1);
	c2 = SetSP(a2,b2);
	cout << "cong so phuc" << endl;
	SP spAdd = c1 + c2;
	DisplaySP(spAdd);
	
}

SP SetSP(float thuc, float ao){
	SP temp;
	temp.thuc = thuc;
	temp.ao = ao;
	return temp;
}
SP operator + (SP C1, SP C2){
	SP sp;
	sp.thuc = C1.thuc + C2.thuc;
	sp.ao   = C1.ao  + C2.ao;
	return sp;	
}
void DisplaySP(SP C){
	cout << C.thuc << "i" << "+" << C.ao;

}
