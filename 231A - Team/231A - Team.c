#include <stdio.h>
 
int main(){
    int n,a,b,c,sum,chk=0;
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        printf("\n");
        sum=a+b+c;
        if(sum>1){
            chk++;
        }
    }
    printf("%d",chk);
    return 0;
}