#include <iostream>

int add() {
    int a{};
    int b{};
    
    std::cout<< "Enter an integer = ";
    std::cin>>a;

    std::cout<<"Enter sec integer = ";
    std::cin>>b;

    return a + b ;
} 

void addShow(int num) {
    std::cout<< "Addition is = "<< num <<"\n"; 
}
 
int main() {
    int num{ add() };
    addShow(num);
    return 0;
}
