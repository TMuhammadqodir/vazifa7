#include <stdio.h>

typedef struct{
    char name[20];
    char login[20];
    char password[20];
    int age;

} user;

user fill(){
    user u;
    printf("name: "); scanf(" %s",u.name);
    printf("login: "); scanf(" %s",u.login);
    printf("password: "); scanf(" %s",u.password);
    printf("age: "); scanf(" %d",&u.age);
    return u;
}

void output(user *u){
    printf("\nname: %s",u->name);
    printf("\nlogin: %s",u->login);
    printf("\npassword: %s",u->password);
    printf("\nage: %d",u->age);
}


int main(){
    user user1=fill();
    output(&user1);
    return 0;
}