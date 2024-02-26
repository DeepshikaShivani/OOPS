#include <iostream>

int main() {
    char arr[3][4] = {{'1', 'A', '2', 'B'},
                      {'C', ' ', '3', ' '},
                      {'4', ' ', ' ', 'D'}};
    
    // Printing the pattern
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}

