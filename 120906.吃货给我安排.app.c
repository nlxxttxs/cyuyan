#include<stdio.h>
#include<string.h>
int main(){
printf("                                                欢迎使用吃货小程序\n");
char a[10];
char b[10]="春节";
char c[10]="端午节";
char d[10]="中秋节";
char e[10]="元宵节";
scanf("%s",&a);
if(strcmp(a,b)==0){printf("给我安排饺子");}
if(strcmp(a,c)==0){printf("给我安排粽子");}
if(strcmp(a,d)==0){printf("给我安排月饼");}
if(strcmp(a,e)==0){printf("给我安排元宵");}
return 0;
}
