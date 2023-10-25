#include <iostream>
using namespace std;
string bin(int dec) {
    if (dec == 0) {
        return "0";
    }
    string binary = "";
    while (dec > 0) {
        int bit = dec % 2;
        binary = char('0' + bit) + binary;
        dec /= 2;
    }
    return binary;
}
string oct(int dec) {
    if (dec == 0) {
        return "0";
    }
    string octal = "";
    while (dec > 0) {
        int digit = dec % 8;
        octal = char('0' + digit) + octal;
        dec /= 8;
    }
    return octal;
}
string hex(int dec) {
    if (dec == 0) {
        return "0";
    }
    string hexa = "";
    while (dec > 0) {
        int digit = dec % 16;
        if (digit < 10) {
            hexa = char('0' + digit) + hexa;
        } else {
            hexa = char('A' + digit - 10) + hexa;
        }
        dec /= 16;
    }
    return hexa;
}

int main() {
    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    string binary = bin(decimal);
    string octal = oct(decimal);
    string hexadecimal = hex(decimal);

    cout << "Decimal: " << decimal << endl;
    cout << "Binary: " << binary << endl;
    cout << "Octal: " << octal << endl;
    cout << "Hexadecimal: 0x" << hexadecimal << endl;

    return 0;
}

