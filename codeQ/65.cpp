#include <iostream>
#include <vector>
using namespace std;

string digitToRoman(int digit, string one, string five, string ten) {
    string result;
    if (digit <= 3) {
        result = string(digit, one[0]);
    } else if (digit == 4) {
        result = one + five;
    } else if (digit <= 8) {
        result = five + string(digit - 5, one[0]);
    } else {
        result = one + ten;
    }
    return result;
}

string intToRoman(int num) {
    if (num <= 0 || num > 3999) {
        return "Invalid input";
    }

    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string roman = "";

    for (int i = 0; i < values.size(); i++) {
        while (num >= values[i]) {
            roman += digitToRoman(num / values[i], symbols[i], "", "");
            num %= values[i];
        }
    }

    return roman;
}

int main() {
    int num;
    
    cout << "Enter a number (1-3999): ";
    cin >> num;

    string romanEquivalent = intToRoman(num);

    cout << "Roman equivalent: " << romanEquivalent << endl;

    return 0;
}


/* chatgpt */