#include <stdio.h>
int main(){
int i;
scanf("%d",&i);
if(i<=86400){
printf("%d时:%d分:%d秒\n",i/3600,i%3600/60,i%3600%60);
}
else {
	printf("你输入了一个过大的值\n");}
return 0;
}
