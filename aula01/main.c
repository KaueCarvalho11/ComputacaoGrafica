#include<stdio.h>

int main(){
    int width = 500;
    int height = 500;
    int b = 100;

    printf("P3\n");
    printf("%d %d\n", width,height);
    printf("255\n");

    for (int r = 0; r < height; r++){
        for (int g = 0; g < width; g++){
            if(r > 125 && r < 375 && g > 125 && g < 375){
                printf("0 0 0\n");  
            }
            else{
                printf("%d\t%d\t%d\n", r, g, b);
            }
        }
    }
}