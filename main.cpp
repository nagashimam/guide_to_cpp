#include <iostream>

int main(){
    auto print = [](std::string x, auto y){
        std::cout << x << " "s << y << std::endl;
    };
    print("hello"s, "world"s);
}