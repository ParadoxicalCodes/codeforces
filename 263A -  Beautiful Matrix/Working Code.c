#include <stdio.h>

int main(){
    int arr[5][5], moves, i_cpy, j_cpy;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j] == 1){
                i_cpy=i+1;
                j_cpy=j+1;
            }
        }
    }
    if(i_cpy == 3){
        if(j_cpy == 3){
            moves =0;
        }
        else{
            if(j_cpy >3){
                moves = j_cpy-3;
            }
            else{
                moves = 3-j_cpy;
            }
        }
    }
    else if(i_cpy >3){
        if(j_cpy >3){
            moves = i_cpy-3 + j_cpy-3;
        }
        else{
            moves = i_cpy-3 + 3-j_cpy;
        }
    }
    else{
        if(j_cpy >3){
            moves = 3-i_cpy + j_cpy-3;
        }
        else{
            moves = 3-i_cpy + 3-j_cpy;
        }
    }
    printf("%d", moves);

    return 0;
}