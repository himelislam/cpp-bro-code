#include<iostream>

namespace first {
    int x = 1;
}

namespace second{
    int x = 2;
}
int main(){
    int x = 0;

    std::cout << x << '\n'; // 0
    std::cout << first::x << '\n'; // 1
    std::cout << second::x; // 2
    return 0;
}