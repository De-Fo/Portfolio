#include <iostream>
#include <string>

using namespace std;

// encrypt
string encrypt(const string& message, const string& key) {
    string encryptedText;
    int keyIndex = 0;

    for (char c : message) {
        char encryptedChar = c ^ key[keyIndex];
        encryptedText += encryptedChar;
        keyIndex = (keyIndex + 1) % key.length();
    }

    return encryptedText;
}

// decrypt
string decrypt(const string& encryptedText, const string& key) {
    return encrypt(encryptedText, key); 
}

int main() {
    string message;
    string key;
    char choice;

    cout << "Enter the message to encrypt or decrypt: ";
    getline(cin, message);

    cout << "Enter the 6-character long number key to encrypt or decrypt your message: ";
    getline(cin, key);

    if (key.length() != 6) {
        cout << "Invalid key length. Exiting...\n";
        return 1;
    }

    cout << "Choose an option:\n";
    cout << "1. Encrypt\n";
    cout << "2. Decrypt\n";
    cout << "Choice: ";
    cin >> choice;

    cin.ignore(); // Ignore char

    string result;

    switch (choice) {
        case '1':
            result = encrypt(message, key);
            cout << "Encrypted Text: " << result << endl;
            break;
        case '2':
            result = decrypt(message, key);
            cout << "Decrypted Text: " << result << endl;
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
            return 1;
    }

    return 0;
}
