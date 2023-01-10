#include<stdio.h>

int main(){
    int b[3][3];
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            scanf("%d", &b[r][c]);
        }
    }

    int flag= 0;
    for(int i=0; i<3; i++){
        if(b[i][0] == b[i][1] && b[i][1] == b[i][2]){
            flag= 1;
            break;    
        }
        if(b[0][i] == b[1][i] && b[1][i] == b[2][i]){
            flag= 1;
            break;
        }
    }
    if(b[0][2] == b[1][1] && b[1][1] == b[2][0]){
        flag= 1;
    }
    if(b[0][0] == b[1][1] && b[1][1] == b[2][2]){
        flag= 1;
    }

    if(flag)
        puts("True");
    else
        puts("False");

    return 0;
}
