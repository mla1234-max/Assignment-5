#include <iostream>

using namespace std;

int main() {
    char sentence[101];
    char preChar = ' ';
    char corrected;

    cout << "Enter a sentence: " << endl;
    cin.getline(sentence, 101);

    if (isalpha(sentence[0])) {
        corrected = toupper(sentence[0]);
        sentence[0] = corrected;
    }
    else {
        while (isspace(sentence[0])) {
            for (int i = 0; i < 100; i++) {
                sentence[i] = sentence[i + 1];
            }
        }
    }
    corrected = toupper(sentence[0]);
    sentence[0] = corrected;

    for (int i = 1; i < sizeof(sentence); i++) {
        if (isalpha(sentence[i])) {
            corrected = tolower(sentence[i]);
            sentence[i] = corrected;
        }
        else if (isspace(sentence[i])) {
            while (isspace(sentence[i + 1])) {
                for (int j = (i + 1); j < 100; j++) {
                    sentence[j] = sentence[j + 1];
                }
            }
        }
        else if (sentence[i] = '.') {
            break;
        }
    }

    cout << "Corrected sentence: " << sentence;
    return 0;
}
