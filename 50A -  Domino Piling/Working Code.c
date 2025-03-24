#include <stdio.h>

int main(){
    int m,n,dNo;
    scanf("%d %d", &m,&n);
    if(m%2==0){
        dNo = (m/2)*n;
        printf("%d",dNo);
    }
    else{
        if(n%2==0){
            dNo = ((m-1)/2)*n + (n/2);
            printf("%d",dNo);
        }
        else{
            dNo = ((m-1)/2)*n + ((n-1)/2);
            printf("%d",dNo);
        }
    }

    return 0;
}