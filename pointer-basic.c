#include<stdio.h>

int main(){
int a=10;
int b=10;
int *p;                                   //Pointer is variable that refers to address of another variable
p = &a;                                   //Pointing p to address of 'a'
printf("%d", a);                          //10
printf("%p %p", &a,p);                    //Address of 'a'
printf("%d %d",*&a,*p);                   //10 10
p=&b;                                     //Pointer p now points to address of 'b'
*p=20;                                    //value of 'b' changed to 20
printf("%d %d", a,*p);                    //10 20


//Many pointers can refer to the same variable's address location
int x;
int *q,*r;
q = &x;
r = &x;
printf("%d %d %d",a *p,*q);    //10 10 10
*q = 20;                       // Value oprintf("%d %d %d",a *p,*q);    //10 10 10f variable 'x' changes to 20
printf("%d %d %d",a *p,*q);    //20 20 20
  
return 0;
}
