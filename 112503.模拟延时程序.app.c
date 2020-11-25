#include <stdio.h>
#include <windows.h>
void main()
{
	int a,s;
	for(a=1;a<=9;a++)
	{
		for(s=1;s<=9;s++){
printf("%dx%d=%d\t",s,a,a*s);
		Sleep(100);
		}
		printf("\n");
	}
}
