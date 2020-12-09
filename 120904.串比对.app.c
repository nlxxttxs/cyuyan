#include<stdio.h>
#include<string.h>
int main(){
char a[]="字符的合法输入";
char b[]="字符的不合法输入";
if(strcmp(a,b)==0){
    printf("相同");
}
else{
    printf("不相同");
}
return 0;
}
