#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>
using namespace std;

ifstream f("/Users/harshkn/CLionProjects/CPPCourse/data.in");
ofstream g("/Users/harshkn/CLionProjects/CPPCourse/data.out");

int A_Global[3];



int main() {

    int a, b, sum, maximum;
    int A_Local[3];

    f>>a>>b;
    sum = a + b;
    maximum = max(a, b);
    g<<maximum<<std::endl;
    g<<sum<<std::endl;

    /**********************************/
    int num = 2;
    double cuberoot = 0;
    cuberoot = pow((double)(num), 1.0/3);
    cout<<cuberoot<<std::endl;
    cout<<fixed<<setprecision(10)<<cuberoot<<std::endl;
    /**********************************/

    cout<<A_Global[0]<<" "<<A_Global[1]<<" "<<A_Global[2]<<" "<<std::endl;
    cout<<A_Local[0]<<" "<<A_Local[1]<<" "<<A_Local[2]<<" "<<std::endl;


    return 0;
}