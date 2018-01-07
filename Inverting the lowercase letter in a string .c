#include <stdio.h>
int r(char m);
int main()
{ int a,b,i,j,k;
char c[100];
char t;
scanf("%d",&b);
scanf("%c",&t);
for(j=0;j<b;j++)
{
for(k=0;k<100;k++)
c[k]='\0';
i=99;
fgets(c,100,stdin);
while(i<100&&i>=0)
{
if (r(c[i])==1)
{printf("%c",c[i]);
}
i--;
}
printf("\n");
}
return 0;		
}
int r(char m)
{int x;
if  (m=='a'||m=='b'||m=='c'||m=='d'||m=='e'||m=='f'||m=='g'||m=='h'||m=='i'||m=='j'||m=='k'||m=='l'||m=='m'||m=='n'||m=='o'||m=='p'||m=='q'||m=='r'||m=='s'||m=='t'||m=='u'||m=='v'||m=='w'||m=='x'||m=='y'||m=='z')
x=1 ;
else x=0;
return x;
}
