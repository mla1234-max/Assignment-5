#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
    char sentence[101];
    char preChar = ' ';

    cout << "Enter a sentence: " << endl;
    cin.getline(sentence, 101);
    do {
        if (isalpha(sentence[0])) {
            toupper(sentence[0]);
        }
        else {
            for (int i = 0; i < 100; i++) {
                sentence[0] = sentence[1];
            }
        }
    } while (isspace(sentence[0]));

    for (int i = 1; i < sizeof(sentence); i++) {
        if (isalpha(sentence[i])) {
            tolower(sentence[i]);
        }
        else if (isspace(sentence[i])) {
            while (isspace(sentence[i + 1])) {
                for (int j = i; j < 100 - i; j++) {
                    sentence[i + 1] = sentence[i + 2];
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
