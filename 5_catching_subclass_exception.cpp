#include <iostream>

using namespace std;

void goesWrong(){
    bool error1detected = false;
    bool error2detection = true;

    if(error1detected){
        throw bad_alloc();
    }
    if(error2detection){
        throw exception();
    }
}

int main() {

    try{
        goesWrong();
    }
    catch (bad_alloc &e){
        cout << "Bad alloc " << e.what() << endl;
    }
    catch (exception &e){
        cout << "Exception " << e.what() << endl;
    }


    return 0;
}