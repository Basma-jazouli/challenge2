#include <stdio.h>

int main () {

    float c;
    float f;

    printf("ecrire f : ");
    scanf("%f" , &f);
    printf("f : %.2f\n" , f);

    c = (f - 32)/1.8;

    printf("c : %.2f\n" , c);

    if (c < 0)
    {
    printf("très froid\n");
        /* code */
    }else if (c < 10){
    printf("froid\n");
    }else if (c < 25 ){
    printf("chaud\n");
    }else if (c < 35){
    printf("très chaud\n");
    }


return 0;

}