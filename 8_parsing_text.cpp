#include <iostream>
#include <fstream>
using namespace std;


int main() {

    ifstream input_file;
    input_file.open("/Users/harshkn/CLionProjects/CPPCourse/text.txt");

    while(input_file){
        string line;
        getline(input_file, line, ':');

        int population;
        input_file >> population;

//        input_file.get();
        input_file >> ws;

        if(!input_file){
            break;
        }

        cout << " " << line << " -- " << population << endl;
    }
    input_file.close();
    return 0;
}