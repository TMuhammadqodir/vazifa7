#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct{
    char ismi[20];
    char fam[20];
    int yosh;
    char jins[20];
    char kasb[20];
    char shahar[20];
    int oila;
    char millat[20];
    char passseria[20];
    int telnum;
} odam;

odam fill(){
    odam o;
    printf("ismi: "); scanf(" %s",o.ismi);
    printf("familiyasi: "); scanf(" %s",o.fam);
    printf("yoshi: "); scanf(" %d",&o.yosh);
    printf("jinsi: "); scanf(" %s",o.jins);
    printf("kasbi: "); scanf(" %s",o.kasb);
    printf("shahri: "); scanf(" %s",o.shahar);
    printf("oilali: "); scanf(" %d",&o.oila);
    printf("millati: "); scanf(" %s",o.millat);
    printf("passport seriyasi: "); scanf(" %s",o.passseria);
    printf("tel_number: "); scanf(" %d",&o.telnum);
    return o;
}
void output(odam o){
    printf("\nismi: %s",o.ismi);
    printf("\nfamiliyasi: %s",o.fam);
    printf("\nyoshi: %d",o.yosh);
    printf("\njinsi: %s",o.jins);
    printf("\nkasbi: %s",o.kasb);
    printf("\nshahri: %s",o.shahar);
    printf("\noilali(1/0): %d",o.oila);
    printf("\nmillati: %s",o.millat);
    printf("\npassport seriyasi: %s",o.passseria);
    printf("\ntel_number: %d\n",o.telnum);
    
}


int main(){
    odam odm=fill();
    output(odm);
  
    return 0;
}