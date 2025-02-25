#include <stdio.h>
 
int main(){
    int n,val=0;
    char a,b,c,d;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        scanf("%c%c%c%c",&d,&a,&b,&c);
        if(b=='+' || a=='+' || c=='+'){
            val++;
        }
        else if(b=='-' || a=='-' || c=='-'){
            --val;
        }
        else{
            printf("idk");
        }
    }
    printf("%d",val);
    
    return 0;
}
