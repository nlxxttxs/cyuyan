#include<stdio.h>
int main(){
int i,t;int q=90;
int a[9][10]={
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {}
};
     for(i=0;i<9;i++){
        for(t=0;t<10;t++){
                a[i][t]=0;
            printf("%d ",a[i][t]);
        }printf("\n");
     }
          for(i=0;i<9;i++){
        for(t=0;t<10;t++){
            a[i][t]=q--;
            printf("%d ",a[i][t]);
        }printf("\n");
     }
return 0;
}
