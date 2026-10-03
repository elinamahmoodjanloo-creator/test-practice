#include <iostream>

int sum() {
    std :: cout << "Enter one inetger Number = \n" ;
    int num1 {};
    std :: cin >> num1;
    std :: cout << " Enter second inetger Number = \n";
    int num2{} ;
    std :: cin >> num2 ; 
    return num1 + num2 ; 

}

int main() {
    int num{ sum() };
    std :: cout << " Sum = " << num << "\n";
    return 0;
}
