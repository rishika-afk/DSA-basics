//to count the number of each occurence of character in a string
char str[]="aaabbacbcacb";
int a[26]={0},i=0;
while(str[i]!='\0')
{
  a[str[i]-'a']++;
  i++;
}
for (i=0;i<26;i++)
  if(a[i]!=0)
    printf("%c%d",i+'a',a[i]);   //a5b4c3   o/p
