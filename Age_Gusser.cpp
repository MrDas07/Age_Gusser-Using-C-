#include <iostream>
#include <string>
using namespace std;

class AgeGuesser {
private:
    int number;
    string birthdayResponse;
    int birthYear;
    int total;

public:
    AgeGuesser() : number(0), total(0), birthYear(0) {}

    void getInput() {
        cout << "Enter a number between 1-9: ";
        cin >> number;

        if (number < 1 || number > 9) {
            cout << "Invalid number, please enter a valid number between 1-9" << endl;
            return;
        }

        cout << "Has your birthday already arrived? (y/no) " << endl;
        cin >> birthdayResponse;

        if (birthdayResponse != "y" && birthdayResponse != "Y" && 
            birthdayResponse != "no" && birthdayResponse != "No" && 
            birthdayResponse != "NO") {
            cout << "Invalid response, please enter 'y' or 'no'" << endl;
            return;
        }

        cout << "Now enter your Birth year: " << endl;
        cin >> birthYear;
    }

    void calculateAndDisplay() {
        int mul = (number * 2) + 5;
        total = mul * 50;

        if (birthdayResponse == "y" || birthdayResponse == "Y") {
            total += 1774;
        } else {
            total += 1773;
        }

        total -= birthYear;

        int firstDigit = total / 100;
        int lastTwoDigits = total % 100;

        cout << "\nThis is the number that you have guessed earlier: " << firstDigit << endl;
        cout << "This is your Current Age: " << lastTwoDigits << endl;
        cout << "Hope I have guessed it correctly 😍" << endl;
    }

    void run() {
        getInput();
        if (number >= 1 && number <= 9 && 
            (birthdayResponse == "y" || birthdayResponse == "Y" || 
             birthdayResponse == "no" || birthdayResponse == "No" || 
             birthdayResponse == "NO")) {
            calculateAndDisplay();
        }
    }
};

int main() {
    AgeGuesser ageGuesser;
    ageGuesser.run();
    return 0;
}
