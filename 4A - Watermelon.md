# Attempt 1
> #include <stdio.h>
 
int main(){
    int w,a,b,chk;
    chk=0;
 
    scanf("%d",&w);
    
    if(w>2){
        a=0;
        for(b=1;b<w;b++){
            a=w-b;
            if(a%2==0 && b%2==0){
                chk=1;
                break;
            }
            else{
                chk=0;
            }
        }
    }
    else{
        printf("NO");
    }
    if(chk==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
 
    return 0;
}
