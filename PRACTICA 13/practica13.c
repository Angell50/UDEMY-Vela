#include <stdio.h>

int main(void){
    int informacion[3][4] = {{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int sumaBaja=0,sumaMedia=0,sumaAlta=0;
    float promedioBaja=0,promedioMedia=0,promedioAlta=0;
    for(int i=0;i<3;i++){
        for(int j=1;j<4;j++){
            if(j == 1){
                sumaBaja += informacion[i][j];
            }else if(j == 2){
                sumaMedia += informacion[i][j];
            }else if(j == 3){
                sumaAlta += informacion[i][j];
            }
            
        }
    }
    promedioBaja = sumaBaja/3;
    promedioMedia = sumaMedia/3;
    promedioAlta = sumaAlta/3;

    printf("Promedio temporada baja es : %.2f\n",promedioBaja);
    printf("Promedio temporada media es : %.2f\n",promedioMedia);
    printf("Promedio temporada alta es : %.2f\n",promedioAlta);

    return 0;
}