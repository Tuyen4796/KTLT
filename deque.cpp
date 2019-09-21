#include<iostream>

using namespace std;

typedef struct list{
	int data;
	list *next;
};
int dequi(int n){
 	if(n == 1) return 1;
 	else return n*dequi(n-1);
 }
int main(){
	 	
}
