#include<stdio.h>
#include <string.h>
int main(){
    printf("                                        巴啦啦能量------------(请输入后面的咒语变身)\n");
int i;
char a[20];
scanf("%s",&a);
if(strcmp(a,"呜呼啦呼全身变")==0){
scanf("%d",&i);
if(i<50){
    printf ("你输入的有点小哦~~~");
}
    else if(i==50){
        printf("nice~~~");
    }
    else if (i>50){
        printf ("你输入的有点大哦~~~");
    }
    else {
        printf("输入了错误的数字");
            }
}
return 0;
}
