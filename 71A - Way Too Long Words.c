#include <stdio.h>
#include <string.h>

int main(){
    char str[100][101];
    int n,len,val;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    for(int i=0;i<n;i++){
        len=strlen(str[i]);
        if(len<=10){
            printf("%s\n",str[i]);
        }
        else{
            val=len-2;
            printf("%c%d%c\n",str[i][0],val,str[i][len-1]);
        }
    }
    
    
    return 0;
}