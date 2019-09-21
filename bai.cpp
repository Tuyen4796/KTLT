#include<iostream>
long Tong(int n)
{
            int i,h1=1,h2=2,h3=3,h4=4,h;
            long t=10;
            if(n==1)  return 1;
            else if(n==2) return 3;
            else if(n==3) return 6;
            else if(n==4) return 10;
            else
{
                    for( i=5;i<=n;i++)  {
                        h=h1+h2-h3+h4;
            t+=h;  h1=h2;            h2=h3;
            h3=h4;            h4=h;
       }
}
return t;
}      
int main(){
	printf("%l",Tong(5));
}
