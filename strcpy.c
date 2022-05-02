strcpy(strt,strs);
char strs[]="India",strt[10];
int i=0;
while(strs[i])
{
  strt[i]=strs[i];
  i++;
}
strt[i]='\0';
