#include <stdio.h>

int main() {
    int km,diaida,diavuelta,mesida,mesvuelta;
    float coste;
    printf("Introduzca distancia: ");
    scanf("%d",&km);
    fflush(stdin);
    while (km<0){
        printf("Distancia invalida\nIntroduzca distancia: ");
        scanf("%d",&km);
        fflush(stdin);
    }
    printf("Introduzca dia y mes de ida: ");
    scanf("%d %d",&diaida,&mesida);
    fflush(stdin);
    while (diaida<0 || diaida>30){
        printf("Dia invalido\nIntroduzca dia: ");
        scanf("%d",&diaida);
        fflush(stdin);
    }
    while (mesida<0 || mesida>12){
        printf("Mes invalido\nIntroduzca mes: ");
        scanf("%d",&mesida);
        fflush(stdin);
    }
    printf("Introduzca dia y mes de vuelta: ");
    scanf("%d %d",&diavuelta,&mesvuelta);
    fflush(stdin);
    while (diavuelta<0 || diavuelta>30){
        printf("Dia invalido\nIntroduzca dia: ");
        scanf("%d",&diavuelta);
        fflush(stdin);
    }
    while (mesvuelta<0 || mesvuelta>12){
        printf("Mes invalido\nIntroduzca mes: ");
        scanf("%d",&mesvuelta);
        fflush(stdin);
    }
    if (km<=1000)
        coste=220;
    else
        coste=km*0.3;
    if (mesida==mesvuelta){
        if (diavuelta-diaida<7)
            coste=coste*0.4;
    } else if (mesvuelta-mesida==1 && (diavuelta+(30-diaida))<7)
        coste=coste*0.4;
    printf("El coste del billete es de: %.2f Euros (%.2f pesetas)",coste,coste*166.3860);
    return 0;
}
