#include<stdio.h>
int main(){
int i,t;
int a[20][10]={
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {1,2,3,4,5,6,7,8,9,10},
    {4,5,64,645,654,54,321,87,61,64,}
    };
    for(i=0;i<20;i++){
        for(t=0;t<10;t++){
            printf("%d ",a[i][t]);
        }printf("\n");
    }
     for(i=0;i<20;i++){
        for(t=0;t<10;t++){
                a[i][t]=999;
            printf("%d ",a[i][t]);
        }printf("\n");
     }
return 0;
}
