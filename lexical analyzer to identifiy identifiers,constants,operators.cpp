#include<stdio.h>
#include<conio.h>
int main()
{
char com[30];int i=2,a=0;
printf("\nEntercomment:");
gets(com);if(com[0]=='/'){
if(com[1]=='/')
printf("\nItisacomment");
else if(com[1]=='*')
{
for(i=2;i<=30;i++)
{
if(com[i]=='*'&&com[i+1]=='/')
{
printf("\nItisacomment");
a=1;
break;	
}
else continue;
}
if(a==0)
printf("\nItisnotacomment");
}
else 
printf("\nItisnotacomment");
}
printf("\nItisnotacomment");
}

