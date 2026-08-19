#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Get input from user
    cout << "Enter a number: ";
    cin >> number;
    
    // Check if number is even or odd
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
    }

    cout<<"Okay... all set...Goodbye...!"<<endl;
    
    return 0;
}