#include<stdio.h>

void output(int t){
    switch (t)
    {
    case 1:
        printf("*****");
        break;
    case 2:
        printf("*   *");
        break;
    case 3:
        printf("*    ");
        break;
    case 4:
        printf("    *");
        break;
    }
}

int main(){
    int dict[10][5]= {
        {1,2,2,2,1}, //0
        {4,4,4,4,4},
        {1,4,1,3,1}, 
        {1,4,1,4,1},
        {2,2,1,4,4},
        {1,3,1,4,1}, //5
        {1,3,1,2,1},
        {1,4,4,4,4},
        {1,2,1,2,1},
        {1,2,1,4,1}
    };
    int order[4];
    for(int i=0; i<4; i++){
        order[i]= getchar()-'0';
    }
    
    for(int r=0; r<5; r++){
        for(int i=0; i<4; i++){
            if(i != 0)
                putchar(' ');
            output(dict[order[i]][r]);
        }
        puts("");
    }

    return 0;
}
