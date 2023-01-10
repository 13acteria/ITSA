#include<stdio.h>
#include<string.h>

int main(){
    int repeat;
    scanf("%d", &repeat);
    getchar();

    int pokerHere[52], suit, num;
    for(int i=0; i<repeat; i++){
        memset(pokerHere, 0, sizeof(pokerHere));
        do{
            switch(getchar()){
            case 'C':
                suit= 0;
                break;
            case 'D':
                suit= 1;
                break;
            case 'H':
                suit= 2;
                break;
            case 'S':
                suit= 3;
            }
            scanf("%d", &num);
            pokerHere[suit*13+num-1]= 1;
        }while(getchar() == ' ');

        int needSpace= 0;
        for(int j=51; j>=0; j--){
            if(pokerHere[j]){
                if(needSpace)
                    putchar(' ');
                switch (j/13){
                case 0:
                    putchar('C');
                    break;
                case 1:
                    putchar('D');
                    break;
                case 2:
                    putchar('H');
                    break;
                case 3:
                    putchar('S');
                }
                printf("%d", j%13+1);
                needSpace= 1;
            }
        }
        puts("");
    }

    return 0;
}
