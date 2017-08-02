#include <iostream>
#include <fstream>

using namespace std;


int main() {

    ofstream outfile;
    outfile.open("/Users/harshkn/CLionProjects/CPPCourse/text.txt");

    if(outfile.is_open()){
        cout << "File is open";
        outfile << "Hello there " << endl;
        outfile << 123 << endl;
    } else{
        cout << "File is not open";
    }


    return 0;
}