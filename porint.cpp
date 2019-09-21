#include <stdio.h>
#include <conio.h>
int main(){
   int a,b,c;
   int *p=&c;
   printf("%d",*p);
   c = 3;
   /* divide c by itself */
   a = c/(*p);
   b = c   /* set b to 3 */ ;
   printf("a=%d, b=%d, c=%d\n", a,b,c);
   getch();
}

