#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int numa;
    long numb;
    char ch;
    float dec1;
    double dec2;
    // Complete the code.
    scanf("%d %ld %c %f %lf", &numa, &numb, &ch, &dec1, &dec2);
    printf("%d \n%ld\n%c\n%.3f\n%.9lf", numa, numb, ch, dec1, dec2);
    return 0;
}
