strcpy(strt,strs);   //to copy a string to another string variable
char strs[]="India",strt[10];
int i=0;
while(strs[i])
{
  strt[i]=strs[i];
  i++;
}
strt[i]='\0';
