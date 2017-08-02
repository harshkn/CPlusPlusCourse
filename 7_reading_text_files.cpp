#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ifstream inFile;

    inFile.open("/Users/harshkn/CLionProjects/CPPCourse/text.txt");
    if (inFile.is_open()){
        string line;
        while(!inFile.eof()){
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();

    }
    return 0;
}