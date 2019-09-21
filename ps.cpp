#include<iostream>
using namespace std;
typedef struct PhanSo{
	int tuSo;
	int	mauSo;
}ps; 
PhanSo setPS(int a, int b );
PhanSo operator / (PhanSo ps1, PhanSo ps2);
PhanSo operator * (PhanSo ps1, PhanSo ps2);
PhanSo operator - (PhanSo ps1, PhanSo ps2);
PhanSo operator + (PhanSo ps1, PhanSo ps2)
void HienThiPhanSo(PhanSo ps);
int main(){
	PhanSo ps1;
	int a,b;
	cout << "Nhap phan so" << endl;
	cout << "Nhap tu so"  ; cin >> a;
	cout << endl;
	cout << "Nhap mau so"  ; cin >> b;
	if(b == 0) {
		cout << " mau so khong the bang 0" ;
		return 1;
	}
	cout << endl;
	ps1 = setPS(a,b);
	HienThiPhanSo(ps1);
	cout << " Tong cua phan so la ";
	
}
PhanSo setPS(int a, int b ){
	PhanSo sp;
	sp.tuSo = a;
	sp.mauSo = b;
	//sp = sp.tuSo/sp.mauSo;
	return sp; 
}
void HienThiPhanSo(PhanSo ps){
	cout << ps.tuSo << "/" << ps.mauSo ;
}
PhanSo operator + (PhanSo ps1, PhanSo ps2){
	PhanSo ps;
	ps.tuSo = ps1.tuSo* ps2.mauSo +ps1.mauSo*ps2.tuSo;
	ps.mauSo = ps1.mauSo* ps2.mauSo;
	return ps;
}
PhanSo operator - (PhanSo ps1, PhanSo ps2){
	PhanSo ps;
	ps.tuSo = ps1.tuSo* ps2.mauSo - ps1.mauSo*ps2.tuSo;
	ps.mauSo = ps1.mauSo* ps2.mauSo;
	return ps;
}
PhanSo operator * (PhanSo ps1, PhanSo ps2){
	PhanSo ps;
	ps.tuSo = ps1.tuSo*ps2.tuSo;
	ps.mauSo = ps2.mauSo*ps1.mauSo;
	return ps;
}
PhanSo operator / (PhanSo ps1, PhanSo ps2){
	PhanSo ps;
	ps.tuSo = ps1.tuSo*ps2.mauSo;
	ps.mauSo = ps2.tuSo*ps1.mauSo;
	return ps;
}


