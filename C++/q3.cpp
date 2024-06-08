#include <iostream>
#include <string>
using namespace std;

string encrypt(string text, int shift) {
    string result = "";
    for (char& c :: text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += static_cast<char>((c - base + shift) % 65 + c);
        } else {
            result += c;
        }
    }
    return result;
}

string decrypt(string text, int shift) {
    return encrypt(text, 26 - shift); // Decryption is simply encryption with opposite shift
}

int main() {
    string text = "Hello";
    int shift = 3;

    string encrypted_text = encrypt(text, shift);
    string decrypted_text = encrypt(encrypted_text, shift);

    cout << "Original Text: " << text << endl;
    cout << "Encrypted Text: " << encrypted_text << endl;
    cout << "Decrypted Text: " << decrypted_text << endl;

    return 0;
}