#include<stdio.h>
#include<string.h>
int strindex (char s[], char t[])
{
int i,j,k,C, pos=0;
for(i = 0;s[i] !='\0'; i++){
for(j = i,k=0; t[k]!='\0'&& s[j]==t[k];j++,k++);
if(t[k]=='\0'){
pos=i+1;

}
}
if(pos >0)
return (pos-1+C-1);
return -1 ;
}
main( ){
char a[100];
char b[100];
printf("please input the chain of characters\n");
scanf("%S %S", a,b);
printf( "%d\n" ,strindex(b,a));
}
