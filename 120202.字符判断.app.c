#include<stdio.h>
int main(){
char q;
scanf("%c",&q);
switch(q){
	case 'w':printf("你在点击上键\n");break;
	case 'd':printf("你在点击右键\n");break;
	case 'a':printf("你在点击左键\n");break;
	case 's':printf("你在点击下键\n");break;
	default:printf("you did\n");
}
return 0;
}
