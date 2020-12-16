#include <stdio.h>
int first(int q){
    if(q <= 0){
        return 0;
    }
    return q+first(q-1);
}
int main(){
int w;
scanf("%d",&w);
printf("%d\n",first(w));
return 0;
}
