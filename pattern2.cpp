#include<iostream>
using namespace std;

int pattern(){

    int n = 5; // Adjust this value to change the size of the pattern
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n || (i == n / 2 + 1 && j == n / 2 + 1)) {
                std::cout << "*";
            } else if ((i == n / 2 && j == n / 2) || (i == n / 2 && j == n / 2 + 2) || (i == n / 2 + 2 && j == n / 2) || (i == n / 2 + 2 && j == n / 2 + 2)) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}


int main(){

    // int row,col;
    // cin>>row>>col;

    pattern();
}