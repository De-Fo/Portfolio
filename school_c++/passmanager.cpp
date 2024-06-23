#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <unordered_map>

using namespace std;

const char pass[] = "0123456789"
                    "!@#$%^&*(){}[]:',./"
                    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                    "abcdefghijklmnopqrstuvwxyz";                     

int str_len = sizeof(pass) - 1;

int generator(){
    int p;
    srand(time(0));
    cout << "Password length: ";
    cin >> p;
    cout << "Password: ";
    for (int i = 0; i < p; i++)
    {
        cout << pass[rand() % str_len];
    }

    cout << endl;
    
}

const string FILENAME = "pass.txt";

unordered_map<string, string> PassDatabase;

void addPass(const string& website, const string& Pass) {
    PassDatabase[website] = Pass;
    cout << "Password added successfully!" << endl;
}

void getPass(const string& website) {
    if (PassDatabase.find(website) != PassDatabase.end()) {
        cout << "Password for " << website << ": " << PassDatabase[website] << endl;
    } else {
        cout << "No password found for " << website << endl;
    }
}

void removePass(const string& website) {
    if (PassDatabase.erase(website) == 1) {
        cout << "Password for " << website << " removed successfully!" << endl;
    } else {
        cout << "No password found for " << website << endl;
    }
}

void listPass() {
    if (PassDatabase.empty()) {
        cout << "No passwords stored in the database" << endl;
    } else {
        cout << "Stored Passwords:" << endl;
        for (const auto& entry : PassDatabase) {
            cout << "Website: " << entry.first << ", Password: " << entry.second << endl;
        }
    }
}

void savePass() {
    ofstream outputFile(FILENAME);
    if (!outputFile) {
        cerr << "Error opening file for writing" << endl;
        return;
    }

    for (const auto& entry : PassDatabase) {
        outputFile << entry.first << "," << entry.second << endl;
    }

    outputFile.close();
    cout << "Passwords saved successfully!" << endl;
}

void loadPass() {
    ifstream inputFile(FILENAME);
    if (!inputFile) {
        cerr << "Error opening file for reading" << endl;
        return;
    }

    PassDatabase.clear();

    string line;
    while (getline(inputFile, line)) {
        size_t pos = line.find(",");
        if (pos != string::npos) {
            string website = line.substr(0, pos);
            string Pass = line.substr(pos + 1);
            PassDatabase[website] = Pass;
        }
    }

    inputFile.close();
    cout << "Passwords loaded successfully!" << endl;
}

int manager(){
int choice;
    loadPass();

    do {
        cout << "\n--- Password Manager ---" << endl;
        cout << "1. Add Password" << endl;
        cout << "2. Get Password" << endl;
        cout << "3. Remove Password" << endl;
        cout << "4. List Passwords" << endl;
        cout << "5. Generate Password" << endl;
        cout << "6. Save Passwords" << endl;
        cout << "7. Quit" << endl;
        cout << "Select what you want to do: ";
        cin >> choice;

        string website, Pass;

        switch (choice) {
            case 1:
                cout << "Enter website: ";
                cin >> website;
                cout << "Enter password: ";
                cin >> Pass;
                addPass(website, Pass);
                break;
            case 2:
                cout << "Enter website: ";
                cin >> website;
                getPass(website);
                break;
            case 3:
                cout << "Enter website: ";
                cin >> website;
                removePass(website);
                break;
            case 4:
                listPass();
                break;
            case 5:
                generator();
                break;
            case 6:
                savePass();
                break;
            case 7:
                cout << "Exiting Password Manager..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    } while (choice != 7);
}


int main(){
    manager();
}