#include <iostream>
using namespace std;

class snt{

public : int x,y,z;
public : int ham(int x,int y,int z){
y/x<=1?ham(x,y+1,z):!(y%x)?ham(x,y+1,0):y%x==y/x&&!z?(printf("%d\t",y/x),ham(x,y+1,0)) :y%x>1&&y%x<y/x?ham(x,1+y,z +!(y/x%(y%x))):y<x*x?ham(x,y+1,z):0;
}

}; 

int main(){
	snt snt1;
	snt1.ham(500,0,0);
} 

