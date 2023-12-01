#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: " << endl;
    getline(cin, sentence);

    if (isalpha(sentence[0]) && isalpha(sentence[1]) && isalpha(sentence[2]) && isalpha(sentence[3])) {
        if ((isspace(sentence[4])) || (sentence[4] == '.')) {
            if (isupper(sentence[0])) {
                sentence[0] = 'L';
                sentence[1] = 'o';
                sentence[2] = 'v';
                sentence[3] = 'e';
            }
            else {
                sentence[0] = 'l';
                sentence[1] = 'o';
                sentence[2] = 'v';
                sentence[3] = 'e';
            }
        }
        else {

        }
    }
    else {

    }

    for (int i = 1; i < sizeof(sentence); i++) {
        if (isalpha(sentence[i]) && isalpha(sentence[i + 1]) && isalpha(sentence[i + 2]) && isalpha(sentence[i + 3])) {
            if (((isspace(sentence[i - 1])) && (isspace(sentence[i + 4]))) || ((isspace(sentence[i - 1])) && (sentence[i + 4] == '.'))) {
                if (isupper(sentence[i])) {
                    sentence[i] = 'L';
                    sentence[i + 1] = 'o';
                    sentence[i + 2] = 'v';
                    sentence[i + 3] = 'e';
                }
                else {
                    sentence[i] = 'l';
                    sentence[i + 1] = 'o';
                    sentence[i + 2] = 'v';
                    sentence[i + 3] = 'e';
                }
            }
            else {

            }
        }
        else {

        }
    }
    cout << "Sentence remade: " << sentence;

    return 0;
}
