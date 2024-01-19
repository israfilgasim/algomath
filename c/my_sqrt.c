#include <stdio.h>

float mySqrt(int x){

    float guess1 = 0;
    float guess2 = 1;
    float x0 = 10;
    float guess;

    while (guess1 != guess2){
        guess = x0 - ((x0 * x0) - x)/(2 * x0);
        guess1 = guess2;
        guess2 = guess;
        x0 = guess;
    }
    return guess2;

}

int main(){
    int x = 4;
    float result = mySqrt(x);
    printf("%f\n", result);
    return 0;
}