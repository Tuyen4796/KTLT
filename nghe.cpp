#include<iostream>
using namespace std;
int dequy(int n){
	if(n==1) return 1;
	else if(n==2) return 2;
	else if(n==3) return 3;
	else return dequy(n-1) + dequy(n-2) +2*dequy(n-3);
}
int K(int n){
	int k1=1,k2=2,k3=3,k;
	for(int i= 1; i<= n;i++){
		k = k3 +k2 +2*k1;
		k1=k2;
		k2=k3;
		k3=k;
	}
	return k;
} 
int main(){
	cout << K(4) << endl;
}
