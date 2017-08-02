#include <iostream>

using namespace std;


void mightGoWrong(){
    bool error_1 = false, error_2 = true;

    if(error_1){
        throw "Something went wrong";
    }
    if(error_2){
        throw string("Something really went wrong");
    }
}

void usesMightGoWrong(){
    mightGoWrong();
}
int main() {

    try{
        usesMightGoWrong();
    }
    catch(char const * e){
        cout << "Error Code: " << e << std::endl;
    }
    catch (string &e){
        cout << "Sting error " << e << std::endl;
    }
    cout << "Running... ";


    return 0;
}