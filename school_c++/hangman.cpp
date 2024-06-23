#include <iostream>
#include <string>

using namespace std;

void Hangman(int incorrect) {
    cout << " _____\n";
    cout << "|     |\n";
    cout << "|     " << (incorrect >= 1 ? "O" : "") << "\n";
    cout << "|    " << (incorrect >= 3 ? "/" : "") << (incorrect >= 2 ? "|" : "") << (incorrect >= 4 ? "\\" : "") << "\n";
    cout << "|    " << (incorrect >= 5 ? "/" : "") << " " << (incorrect >= 6 ? "\\" : "") << "\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|__________\n\n";
}

bool GameOver(const string& word, const string& guess) {
    return word == guess;
}

void Word(const string& guess) {
    for (char c : guess) {
        cout << c << " ";
    }
    cout << "\n";
}

void play(const string& word) {
    const int maxIncorrect = 6;
    int incorrect = 0;
    string guess(word.length(), '_');

    while (!GameOver(word, guess) && incorrect < maxIncorrect) {
        Hangman(incorrect);
        Word(guess);

        char letter;
        cout << "Enter your guess: ";
        cin >> letter;

        bool correctGuess = false;
        for (int i = 0; i < word.length(); ++i) {
            if (word[i] == letter) {
                guess[i] = letter;
                correctGuess = true;
            }
        }

        if (!correctGuess) {
            ++incorrect;
            cout << "Incorrect guess!\n";
        }
    }

    Hangman(incorrect);
    Word(guess);

    if (GameOver(word, guess)) {
        cout << "You guessed the word: " << word << "\n";
    } else {
        cout << "You lost! The word was: " << word << "\n";
    }
}

int main() {
    cout << "Hangman Game\n";
    cout << "Enter the word to guess: ";
    string word;
    cin >> word;

    int Players = 1;
    cout << "Enter the number of players (1+): ";
    cin >> Players;

    if (Players < 1) {
        cout << "Invalid number of players. Game cannot be played.\n";
        return 0;
    }

    cout << "\nLet's start the game!\n";

    for (int i = 0; i < Players; ++i) {
        cout << "\nPlayer " << i + 1 << ", it's your turn:\n";
        play(word);
    }

    return 0;
}
