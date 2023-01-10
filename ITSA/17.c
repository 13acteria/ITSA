#include<stdio.h>
#include<string.h>

int main(){
    char words[500][1001]= {0};
    char row[1001]= {0};
    int wordsNum= 0;
    while(scanf("%s", row) != EOF){
        int wordLen= strlen(row);
        for(int i=0; i<wordLen; i++){//to lowercase
            if(row[i] < 'a')
                row[i]= row[i]-'A'+'a';
        }
        int diff= 1;
        for(int i=0; i<wordsNum; i++){
            if(!strcmp(row, words[i])){
                diff= 0;
                break;
            }
        }
        if(diff)
            strcpy(words[wordsNum++], row);
    }

    printf("%s", words[0]);
    for(int i=1; i<wordsNum; i++){
        putchar(' ');
        printf("%s", words[i]);
    }
    puts("");

    return 0;
}
