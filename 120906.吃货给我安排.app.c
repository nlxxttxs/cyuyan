#include<stdio.h>
#include<string.h>
int main(){
printf("                                                欢迎使用吃货小程序\n");
char a[];
scanf("%s",&a);
if(strcmp(a,"春节")==0){printf("给我安排饺子");}
else if(strcmp(a,"端午节")==0){printf("给我安排粽子");}
else if(strcmp(a,"中秋节")==0){printf("给我安排月饼");}
else if(strcmp(a,"元宵节")==0){printf("给我安排元宵");}
return 0;
}
