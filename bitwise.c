// C Program to add two numbers using increment operator
#include <iostream>
using namespace std;

int addUsingIncrement(int a, int b) {
    

    return a;
}

int main() {
    int a, b;

    // Input two integers
    cout << "Enter two integers: ";
    cin >> a >> b;
  
  	// If b is positive, increment a b times
    for (int i = 0; i < b; i++) {
        a++;
    }
    
    // If b is negative, decrement a |b| times
    for (int i = 0; i > b; i--) {
        a--;
    }

    // Output the sum
    cout << "Sum = " << a << endl;

    return 0;
}