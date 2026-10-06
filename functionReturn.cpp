#include <iostream>

int add(int a , int b) {
     return a + b ;
}

void addshow(int num) {
    std :: cout << " addiotion is = " << num << "\n" ;
}
int main () {
    int num{ add(5,7) };
    addshow(num);     
    return 0;
}