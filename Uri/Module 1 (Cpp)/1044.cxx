#include <iostream>

using namespace std;

int main() {
    
    int a, b;
    
    cin >> a >> b;
    
    if(b % a == 0 || a % b == 0) std::cout << "Sao Multiplos" << std::endl;
    else std::cout << "Nao sao Multiplos" << std::endl;

    return 0;
}
