#include <iostream>
using namespace std;

int main(){
    // Get number from user
    int number;
    cout << "Number: ";
    cin >> number;

    // Check if number is even
    if(number % 2 == 0){
        // Output "Even"
        cout << "Even" << endl;
    }    
    
    // Check if number is odd
    if(number % 2 == 0){
        // Output "Odd"
        cout << "Even" << endl;
    }

    return 0;

}