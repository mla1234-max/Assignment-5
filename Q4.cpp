#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

int main() {

    char cont = ' ';
    string question = " ",
            answer = " ";

    ifstream infile("answers.txt");

    if (!infile) {
        cout << "Could not open input file." << endl;
        exit(1);
    }

    do {
        cout << "Enter your question: ";
        getline(cin,question);
        cout << "ANSWER: ";
        getline(infile,answer);

        if (infile.eof()) {
            infile.close();
            infile.open("answers.txt");
            getline(infile,answer);
        }

        cout << answer << endl;
        cout << "Enter Y to ask another question or anything else to quit: ";
        cont = cin.get();
        cin.ignore();
    } while (cont == 'Y');

    infile.close();

    return 0;
}
