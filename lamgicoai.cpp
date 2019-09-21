#include<iostream>
using namespace std;
int Y(int n);
int GiaiThua(int n){
	if(n==0) return 1;
	else return n*(n-1);
}
int TDQ(int n){
	if (n <= 3) return n;
	else return TDQ(n-1)+ TDQ(n-2) +TDQ(n-3);
}
int TDQ2(int n){
	if(n==1) return 1;
	else if(n==2) return 2;
	else if(n==3) return 3;
	else if(n==4) return 7;
	else if(n==5) return 13;
	
	else return TDQ2(n-1)+ TDQ2(n-2) +TDQ2(n-3);
}
int X(int n){
	/*X(n) = 1,2,3,5,11,41……
	Y(n) = 1,1,2,6,30,330 …..
	*/
	if(n==1) return 1;
	else return X(n-1) + Y(n-1);
}
int Y(int n){
	if(n==1) return 1;
	else return Y(n-1) * X(n-1);
}
int Khu(int n){
	int i= 1,kq=0;
		while(i<=n){
			kq =1;
			kq = kq*i;
			i++;  
		}
		return kq;
	}
int main(){
//	int a = GiaiThua(6);
	//printf("a =%d", a );
//	cout << TDQ(9) << endl;
//	cout << TDQ2(8)<< endl;
//	cout << X(5) << endl;
//	cout << Y(5) << endl;
	cout << Khu(5) << endl;
}
