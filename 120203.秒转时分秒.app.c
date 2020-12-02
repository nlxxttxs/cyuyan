#include <stdio.h>
int main(){
int i;
scanf("%d",&i);
printf("%d时:%d分:%d秒\n",i/3600,i%3600/60,i%3600%60);
return 0;
}
