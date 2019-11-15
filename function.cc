#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int foo, int fass, int boo, int boos){
    int subsec1 = std::max(foo, fass);
    int subsec2 = std::max(boo, boos);
    
    return std::max(subsec1, subsec2);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

