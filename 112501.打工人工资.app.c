#include <stdio.h>
void main()
{
int i;
scanf("%d",&i);
if(i>=0&&i<=100)
{
printf("贫困打工人");
}
else if(i>100&&i<=1000)
{
printf("一般打工人");
}
else if(i>1000&&i<=20000)
{
printf("土豪打工人");
}
else printf("输入有误，请重新输入");
}
