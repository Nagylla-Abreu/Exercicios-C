#include <stdio.h>

int main(){

    float v1, v2, v3, v4, media;

    scanf("%f %f %f %f", &v1, &v2, &v3, &v4);

    media = (v1 + v2 + v3 + v4) / 4;

    printf("A media eh: %.2f", media);

    return 0;
}