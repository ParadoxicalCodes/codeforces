#include <stdio.h>

int main(){
    int n,k,a[100];
    scanf("%d%d", &n,&k); //n=num of participants k=place till which accepted
    if(n<k || n>50 || n<1 || k<1){
        return 1;
    }
    for(int i=1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    int count=0, chk=0;
    chk=a[k];
    for(int i=1;i<=n;i++){
        if(a[i]>=chk && a[i]>0){
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}