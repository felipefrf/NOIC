#include <iostream>
 
using namespace std;
 
int main() {
    int array[20] = {};
    for(int i = 0; i < 20; i++){
        std::cin >> array[i];
    }
    for(int i = 0; i < 10; i++){
        swap(array[i], array[19-i]);
    }
    for(int i = 0; i < 20; i++){
        std::cout << "N[" << i << "] = " << array[i] << '\n';
    }
    return 0;
}