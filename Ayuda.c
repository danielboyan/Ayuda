#include <stdio.h>

void calcHsMinSeg(int*,int*,int*);

int main (void){
    int horas,minutos,segundos,aux;
    printf("Ingrese segundos: ");
    scanf("%d",&segundos);
    aux = segundos;
    if(segundos>=0){
        calcHsMinSeg(&horas, &minutos, &segundos);
        printf("De %d Segundos serian %d Hora(s)  %d Minuto(s) y %d Segundo(s)", aux, horas, minutos, segundos);
    }else{
        printf("Valor fuera de rango");
    }
    return 0;
    //NO TE OLVIDES DEL RETURN 0; EN EL MAIN porfavor!!<---------------------
}


void calcHsMinSeg(int *horas, int *minutos, int *segundos)
{
    *horas = *segundos / 3600;
    *minutos = (*segundos % 3600) / 60;
    *segundos = *segundos % 60;
}