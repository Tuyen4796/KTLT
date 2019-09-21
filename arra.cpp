#include<iostream>
#include<vector>
using namespace std;

void array(const vector<float>& a){
	for(int i =0; i<a.size(); i++)
	cout <<a[i]<< " ";
}
void arrayIN(vector<float>& a){
	float x;
	while(cin >> x){
		a.push_back(x);
		
	}
}
int main(){
	vector<float> a;
	cout << "input array " << endl;
	arrayIN(a);
	cout << "elemement s in array";
	array(a);
	cout << endl;
}
