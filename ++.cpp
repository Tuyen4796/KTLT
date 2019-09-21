#include<iostream>
using namespace std;
typedef struct Matrix{
	int col,row;
	int **data;
};
int main(){
	char tinhthanh[100] = "Da Lat" ;
	char *tinh ;
	tinh = tinhthanh ;
	printf("%c",tinh[1]);
}
