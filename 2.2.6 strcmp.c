strcmp(str1,str2);
char str1[]="aBc",str2[]="abc";
int i = 0;
while(str1[i]!='\0' && str2[i]!='/0'){
  if (str1[i]!=str2[i]) break;
  i++;
}
if str1[i]=='\0' && str2[i]=='\0')
  printf("0");
else printf("%d",str1[i]-str2[i]);
