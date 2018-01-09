#include<stdio.h>
#include<conio.h>
int main()
{
char x;
printf("enter the char:");
scanf("%c",&x);
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
printf("it is vowel");
else
printf("it is constant");
getch();
return 0;
}
