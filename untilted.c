#include<stdio.h>

void ADDITION(int ar[8]){
    int i;
    int arsum = 0;
    for(i = 0 ; i < 8 ; i++){
        arsum = arsum + ar[i];
    }
    printf("%d is sum.\n",arsum);
}

void SUBTRACTION(int ar[8]){
    int i,arsub;
    arsub = 1000;
    for(i = 1 ; i < 8 ; i++){
        arsub = arsub - ar[i];
    }
    printf("%d is a diffrence.\n",arsub);
}

void MULTIPLICATION(int ar[8]){
    int i;
    int armul = 1;
    for(i = 0 ; i < 8 ; i++){
        armul = armul*ar[i];
    }
    printf("%d is product.\n",armul);    
}

int main(int argc,char** argv){

    int arsum[8] = {10,90,20,40,60,50,30,70};
    int arsub[8] = {1000,200,100,50,40,20,10,150};
    int armul[8] = {9,2,4,5,7,6,8,8};

    ADDITION(arsum);
    SUBTRACTION(arsub);
    MULTIPLICATION(armul);

    return 0;
}