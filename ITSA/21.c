#include<stdio.h>

int main(){
    float max, min, temp;
    scanf("%f", &temp);
    max= temp, min= temp;
    for(int i=0; i<9; i++){
        scanf("%f", &temp);
        if(temp > max)
            max= temp;
        if(temp < min)
            min= temp;
    }

    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);

    return 0;
}
