#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double wieght;
};
#pragma pack(pop)


int main() {
    string file_name = "/Users/harshkn/CLionProjects/CPPCourse/bin.txt";

    // Write binary file
    ofstream outputfile;
    outputfile.open(file_name, ios::binary);

    Person someone = {"Harsha", 33, 72};
    if(outputfile.is_open()){

        outputfile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        outputfile.close();
    } else{
        cout<< "Could not open the file " << endl;
    }

    // Read Binary file
    ifstream inputfile;
    inputfile.open(file_name, ios::binary);
    Person someoneElse = {};
    if(inputfile.is_open()){

        inputfile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
        inputfile.close();
    } else{
        cout<< "Could not open the file " << endl;
    }

    cout << someoneElse.name << "," <<someoneElse.age << "," << someoneElse.wieght << endl;




    return 0;
}