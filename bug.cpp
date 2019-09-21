#include<iostream>
#include<conio.h>
#include<stdlib.h>
int main(){
	int **mt;
	mt = new int*[10];
	int *temp = new  int [120];
   for (int i=0; i< 10; ++i) {
       mt[i] = temp;
       temp += 12;  
       printf("mt");
    }  
}
