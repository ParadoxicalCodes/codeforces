#include <stdio.h>
#include <string.h>
 
int main() {
    char sum[100];
    int len;
    scanf("%s", sum);
    len = strlen(sum);
    for (int i = 0; ((2*i)+2)<len; i++) {
        if(sum[2*i]>sum[(2*i)+2]){
            char temp=sum[2*i];
            sum[2*i]=sum[(2*i)+2];
            sum[(2*i)+2]=temp;
            i=-1;
        }
    }
    for(int i=0; i<len;i++){
        printf("%c",sum[i]);
    }
    printf("\n");
 
    return 0;
}