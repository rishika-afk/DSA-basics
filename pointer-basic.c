int a=10;
int b=10;
int *p;                                   //Pointer is variable that refers to address of another variable
p = &a;                                   //Pointing p to address of 'a'
printf("%d", a);                          //10
printf("%u %u", &a,p);                    //Address of 'a'
printf("%d %d",*&a,*p);                   //10 10
p=&b;                                     //Pointer p now points to address of 'b'
*p=20;                                    //value of 'b' changed to 20
printf("%d %d", a,*p);                    //10 20
