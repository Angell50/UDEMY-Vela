#include <stdio.h>

int main(void){
    printf("Los multiplos de 3 son: \n");
    for(int i = 0;i<100;i++){
        if(i%3==0)
        printf("%d\n",i);        
    }
    return 0;
}