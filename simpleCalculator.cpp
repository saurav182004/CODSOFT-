#include <iostream>

using namespace std;

int main() {
    float num1, num2, result;
    char operation;


    cout << "Enter first number: ";
    cin >> num1;


    cout << "Enter second number: ";
    cin >> num2;


    cout << "Enter operation (+, -, *, /, %): ";
    cin >> operation;


    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "*******Result:" << result << endl;
            cout<<"*******========*********";
            break;
        case '-':
            result = num1 - num2;
            cout << "*******Result: " << result << endl;
            cout<<"*******========*********";
            break;
        case '*':
            result = num1 * num2;
            cout << "*******Result: " << result << endl;
            cout<<"*********========*********";
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "********Result: " << result << endl;
                cout<<"*******========*********";
            } else {
                cout << "Error: Division by zero" << endl;
                cout<<"*******========*********";
            }
            break;
        case '%':
            if (num2 != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2);
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Modulus by zero" << endl;
                cout<<"*******========*********";
            }
            break;
        default:
            cout << "Error: Invalid operation" << endl;
            cout<<"*******========*********";
    }

    return 0;
}
