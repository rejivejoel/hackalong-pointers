// Name: Joel Rejive
// CWID: 883464604

#include <string>
#include <iostream>

void double_it(int& x){
    x = x * 2;
    std::cout << "x is " << x << "\n";
}

void double_it_pointer(int* x){
    *(x + 1) = *(x + 1) * 2;
    std::cout << "x is " << x << "\n";
}

int main(){
    int value [] = {5, 7, 13, 17, 19};
    std::cout << "value is " << value[0] << "\n";
    double_it_pointer(value);
    std::cout << "value is " << *value << "\n";
}