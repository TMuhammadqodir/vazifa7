#include <stdio.h>
#include <string.h>

typedef struct{
    char b[20];
    int s;
    int c;
    int y;
    char co[20];
    int nw;
    int au;
    char cnt[20];

} car;

car fill(){
    car cr;
    printf("brand: "); scanf(" %s",cr.b);
    printf("speed: "); scanf(" %d",&cr.s);
    printf("cost: "); scanf(" %d",&cr.c);
    printf("year: "); scanf(" %d",&cr.y);
    printf("color: "); scanf(" %s",cr.co);
    printf("new(1/0): "); scanf(" %d",&cr.nw);
    printf("automative(1/0): "); scanf(" %d",&cr.au);
    printf("country: "); scanf(" %s",cr.cnt);

    return cr;
}

void output(car cr[], int n){
    for(int i=0; i<n; i++){
        if(cr[i].nw && !strcmp(cr[i].b,"BMW")){
            printf("\nbrand: %s",cr[i].b);
            printf("\nspeed: %d",cr[i].s);
            printf("\ncost: %d",cr[i].c);
            printf("\nyear: %d",cr[i].y);
            printf("\ncolor: %s",cr[i].co);
            printf("\nnew: %d",cr[i].nw);
            printf("\nautomative: %d",cr[i].au);
            printf("\ncountry: %s",cr[i].cnt);
        }

    }

}

int main(){
    car carr[2];
    for(int i=0; i<2; i++){
        carr[i]=fill();
    }
    output(carr,2);

    return 0;
}