strstr(strs,substr);  //to check if substring present in string

char str[]="Kushal",substr[]="usha"
  int i=0,j;
while(str[i]!='\0')
{
  j=0;
  while(str[i+j]==substr[j] && substr[j]!='\0')
    j++;
  if(substr[j]=='\0') break;
  i++;
}
if (substr[j]=='\0')printf("%d",i);
else printf("-1");
