#include <iostream>

int square() {
    std :: cout << "Enter an integer Number = \n" ;
    int num {} ;
    std :: cin >> num ;
    return num * num ;
}

int main() {
    int num{ square() } ;
    std :: cout << " Square = " << num << "\n" ; 
    return 0;

}