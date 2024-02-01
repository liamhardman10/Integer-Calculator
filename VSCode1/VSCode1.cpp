

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numInput;
    int numInput2;
    char inputChar;
    int result;
    int op;
    
    cout << "Created by: Liam Hardman" << endl;
    cout << endl;
    cout << endl;
    cout << "(Program is case sensitive)" << endl;
    cout << "Type y to use program, type n to exit: ";
    cin >> inputChar;
    cout << endl;

    while (inputChar == 'y') {

        cout << "Input a positive integer to be manipulated: ";
        cin >> numInput;
        cout << endl;

        if (numInput < 0) {

            cout << "Error. Integer must be positive, re-enter integer: ";
            cin >> numInput;
            cout << endl;
        }

        else if (numInput >= 0) {

            cout << "Which operator to calculate? Select 1-4. (1: Add, 2: Subtract, 3: Multiply, 4: Divide): ";
            cin >> op;
            cout << endl;
            inputChar = '\0';

            if (op == 1) {

                cout << "Enter the integer to add by: ";
                cin >> numInput2;
                cout << endl;

                result = (numInput + numInput2);

                cout << "The result of " << numInput << " + " << numInput2 << " is: " << result << endl;
                cout << endl;
                cout << endl;

                numInput2 = 0;
                result = 0;
            }

            else if (op == 2) {

                cout << "Enter the integer to subtract by: ";
                cin >> numInput2;
                cout << endl;

                result = (numInput - numInput2);

                cout << "The result of " << numInput << " - " << numInput2 << " is: " << result << endl;
                cout << endl;
                cout << endl;

                numInput2 = 0;
                result = 0;
            }

            else if (op == 3) {

                cout << "Enter the integer to multiply by: ";
                cin >> numInput2;
                cout << endl;

                result = (numInput * numInput2);

                cout << "The result of " << numInput << " * " << numInput2 << " is: " << result << endl;
                cout << endl;
                cout << endl;

                numInput2 = 0;
                result = 0;
            }

            else if (op == 4) {

                cout << "Enter the integer to divide by: ";
                cin >> numInput2;
                cout << endl;

                result = (numInput / numInput2);

                cout << "The result of " << numInput << " / " << numInput2 << " is: " << result << ", with a remainder of: " << (numInput % numInput2) << endl;
                cout << endl;
                cout << endl;

                numInput2 = 0;
                result = 0;
            }

            else {

                cout << "Invalid operator. Program has been terminated. (Still trying to work this loop out, so bear with me.)" << endl;
                exit(0);
                
            }


       
        }

        cout << "Type y to continue using, type n to exit: ";
        cin >> inputChar;
        cout << endl;
     
  
    
    }
       

    







    return 0;
}
