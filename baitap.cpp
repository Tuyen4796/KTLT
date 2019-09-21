#include <stdio.h>
int main(){
         int a,b=3,c=6;
         int *p = &b;
 /* chia c cho b */   
     a = c/(*p);
     b = c ; /* gán b = 6 */
     printf("a=%d, b=%d\n", a,b); }
