#include <stdio.h>

int main(int argc, char* argv[]) {
    int sum = 0, i = 0;
    for(i=0; i<1000; i++){
        if((i%5==0)||(i%3==0)){
            sum +=i;
        }
    }
    printf("\nSum: %d",sum);
    return 0;
}
