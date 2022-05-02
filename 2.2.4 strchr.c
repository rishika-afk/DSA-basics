strchr(str,char);
char str[]="Amith",ch='t';
int i=0;
while(str[i]==ch)
{
  if(str[i]==ch)
    break;
  i++;
}
if(str[i]=='\0'),printf("-1");
else printf("%d",i);
