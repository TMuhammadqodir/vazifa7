#include <stdio.h>
#include <string.h>
typedef struct{
    char n[20];
    char l[20];
    char r[20];
    int p;
    int noc;
    char a[20];
    char c[20];
    char m[20];
    char pr[20];
    char cnt[20];
    
} country;

country fill(){
    country cn;
    printf("name: "); scanf(" %s",cn.n);
    printf("language: "); scanf(" %s",cn.l);
    printf("religion: "); scanf(" %s",cn.r);
    printf("population: "); scanf(" %d",&cn.p);
    printf("num_of_cities: "); scanf(" %d",&cn.noc);
    printf("area: "); scanf(" %s",cn.a);
    printf("capital: "); scanf(" %s",cn.c);
    printf("money: "); scanf(" %s",cn.m);
    printf("presedent: "); scanf(" %s",cn.pr);
    printf("continet: "); scanf(" %s",cn.cnt);
    return cn;
}

void output(country cn[], int n){
    for(int i=0; i<n; i++){
        if(!strcmp(cn[i].l,"english") && cn[i].p>100000){
            printf("\nname: %s",cn[i].n);
            printf("\nlanguage: %s",cn[i].l);
            printf("\nreligion: %s",cn[i].r);
            printf("\npopulation: %d",cn[i].p);
            printf("\nnum_of_cities: %d",cn[i].noc);
            printf("\narea: %s",cn[i].a);
            printf("\ncapital: %s",cn[i].c);
            printf("\nmoney: %s",cn[i].m);
            printf("\npresedent: %s",cn[i].pr);
            printf("\ncontinet: %s",cn[i].cnt);
        }
    
    }
}


int main(){
    country cont[5];
    for(int i=0; i<5; i++){
        cont[i]=fill();
    }
    output(cont,5);

    return 0;
}