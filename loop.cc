#include <iostream>
#include <cstdio>
using namespace std;

bool isodd(int num){
    if ((num % 2) != 0 && num >= 9){
        return true;
    }
    else{
        return false;
    } 
}

int main() {
    // Complete the code.
    int a, b;
    int n = b - a;
    scanf("%d\n%d", &a, &b);
    //printf("%d\n%d", a, b);
    for(int i = a; i < b+1; i++){
        if (i == 1){
            printf("one\n");
        }
        else if (i == 2){
            printf("two\n");
        }
        else if (i == 3){
            printf("three\n");
        }
        else if (i == 4){
            printf("four\n");
        }
        else if (i == 5){
            printf("five\n");
        }
        else if (i == 6){
            printf("six\n");
        }
        else if (i == 7){
            printf("seven\n");
        }
        else if (i == 8){
            printf("eight\n");
        }
        else if (i == 9){
            printf("nine\n");
        }
        else if (isodd(i) == true){
            printf("odd\n");
        }
        else if (isodd(i) == false){
            printf("even\n");
        }
    }

    return 0;
}


