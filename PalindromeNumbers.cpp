
#include <iostream>
using namespace std;

bool isPalindrome(string userInput) {
    //complete the function
    string newNumber;

    //looping through user inputted number and assinging the number backwards to newNumber variable
    for (int i = userInput.length()-1; i >=0; i--) {
        newNumber += userInput[i];

        //looping through user inputted number
        for (int j = 0; j <= userInput.length(); j++) {

            //looping through new Number value
            for (int k = 0; k <= newNumber.length(); k++) {

                //comparing values in the user inputted number and the new number to see if they are the same and if they are both the same return true otherwise return false
                if (userInput[j] == newNumber[k]) {
                    return true;
                }
                else {
                    return false;
                }
            }
        }
    }
}

int main() {
    string userInput;
    

    cin >> userInput;
    
    if (isPalindrome(userInput)) {
        cout << userInput<< " is a palindrome";
    }
    else {
        cout << userInput << " is NOT a palindrome";
    }

    return 0;
}