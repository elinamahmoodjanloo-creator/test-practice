#include <iostream>

int getValuesFromUser(int a , int b){
    
    std::cout<<"Enter an integer = ";
    std::cin>>a;
    
    std::cout<<"Enter sec integer = ";
    std::cin>>b;

    int z{ a + b };
    return z;
}

void show(int num){
   std::cout<<" multiplilation = "<< num << "\n"; 
}

int main(){
    int a{};
    int b{};
    int num{ getValuesFromUser( a , b ) };
    show(num);
    return 0;    
}
