char str[3]={'a','b','c'};      //Character array not a string as no null character 
char str1[4]={'a','b','c','\0'};  //Null character assigned making it a String array
char str2[]="abc";                //Compiler will automatically allocate the null character so total memory is 4 bytes
char str3[]="abc\0";            //Compiler will also assign null character so total memory will be 5 bytes, but length will be 3 for abc
//Null character in string says it is end of string
//Null charcter ASCII code is 0
char str4[]="abc\0def";         //only abc will be printed when str4 printed as string ends after null character

char ch='\0';
printf("%c %d",ch,ch);   //output: 0   explanation: null character wont be printed, only ascii code will be printed

