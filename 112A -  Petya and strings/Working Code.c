#include <stdio.h>
 
int l(char str[]);
char *lower(char str[], int len);
 
int main() {
    char str1[100], str2[100];
    int l1,l2, chk;
    scanf("%s",str1);
    scanf("%s", str2);
    l1=l(str1);
    l2=l(str2); //l1=l2 given
    lower(str1,l1);
    lower(str2,l2);
    for(int i=0; i<l1; i++){
        if(str1[i]-str2[i]>0){
            chk=1;
            break;
        }
        else if(str1[i]-str2[i]<0){
            chk=-1;
            break;
        }
        else if(str1[i]-str2[i]==0){
            chk=0;
        }
    }
    printf("\n%d",chk);
 
    return 0;
}
int l(char str[]){
    int len=0;
    for(int i=0; str[i]!='\0'; i++){
        len++;
    }
    return len;
}
char *lower(char str[], int len){
    for(int i=0; i<len;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+('a'-'A');
        }
    }
    return str;
}
