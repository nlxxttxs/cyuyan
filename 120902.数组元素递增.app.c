#include<stdio.h>
int main(){
int i,t;int q=1;
int a[19][20]={
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {},
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
     for(i=0;i<19;i++){
        for(t=0;t<20;t++){
                a[i][t]=0;
            printf("%d ",a[i][t]);
        }printf("\n");
     }
          for(i=0;i<19;i++){
        for(t=0;t<20;t++){
            a[i][t]=q++;
            printf("%d ",a[i][t]);
        }printf("\n");
     }
return 0;
}
