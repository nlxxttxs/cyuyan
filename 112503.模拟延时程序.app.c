#include <stdio.h>
#include <windows.h>
void main()
{
	int a,s;
	for(a=1;a<=50;a++)
	{
		for(s=1;s<=50;s++){
printf("%dx%d=%d\t",s,a,a*s);
		Sleep(10);
		}
		printf("\n");
	}
}
