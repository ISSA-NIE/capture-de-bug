#include <iostream>
#include <string>
using namespace std;

string encrypt(string text, int shift) {
    string result = "";
    for (char& c :text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += static_cast<char>((c - base + shift) % 26+ base );
        } else {
            result += c;
        }
    }
    return result;
}

string decrypt(string text, int shift) {
    return encrypt(text, 26 - shift); 
}

int main() {
    string text = "ISSA is a CyberSecurity Club";
    int shift = 3;

    string encrypted_text = encrypt(text, shift);
    string decrypted_text = decrypt(encrypted_text, shift);

    cout << "Original Text: " << text << endl;
    cout << "Encrypted Text: " << encrypted_text << endl;
    cout << "Decrypted Text: " << decrypted_text << endl;

    return 0;
}


// Expected Output:
// Original Text: ISSA is a CyberSecurity Club
// Encrypted Text: LVVD lv d FbehuVhfxulwb Foxe
// Decrypted Text: ISSA is a CyberSecurity Club