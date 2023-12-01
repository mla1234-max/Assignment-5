#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void sortAndWrite(ifstream &in1, ifstream &in2, ofstream &out);

int main() {
    ifstream infile1("file1.txt"), infile2("file2.txt");
    ofstream outfile("file3.txt");

    if (!infile1 || !infile2) {
        cout << "Error opening the input files." << endl;
        exit(1);
    }

    sortAndWrite(infile1, infile2, outfile);
    infile1.close();
    infile2.close();
    outfile.close();

    return 0;
}
void sortAndWrite(ifstream &in1, ifstream &in2, ofstream &out) {
    int x = 0;
    vector<int> merged;

    while (in1 >> x) {
        merged.push_back(x);
    }

    while (in2 >> x) {
        merged.push_back(x);
    }

    sort(merged.begin(),merged.end());

    if (!out) {
        cout << "Error opening the output file.";
        exit(1);
    }
    for (int i = 0; i < merged.size(); i++) {
        out << merged[i] << " ";
    }
}
