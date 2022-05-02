strcat(strt,strs);  //to concatenate OR join two strings

char strt[20]="Mimansha",strs[]="Vanshika";
int i=0,j=0;
while(strt[i]!=0)i++;

while(strs[j])
{
  strt[i+j]=strs[j];
  j++;
}
strt[i+j]='\0';
