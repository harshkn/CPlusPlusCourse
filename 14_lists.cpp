#include <iostream>
#include <list>

using namespace std;


int main() {
    list<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_front(5);


    list<int>::iterator it_1 = numbers.begin();
    cout << *it_1 << endl;
    it_1++ ;
    cout << *it_1 << endl;
    it_1++;
    numbers.insert(it_1, 15);
    cout << *it_1 << endl;

    cout << " =======  " << endl;
    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }

    cout << " =======  " << endl;

    // Wrong way to use iterator to erase element in the list
    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        if (*it == 10){
            numbers.erase(it);
        }
        cout << *it << endl;
    }

    cout << " =======  " << endl;

    for(list<int>::iterator it = numbers.begin(); it != numbers.end();){
        if (*it == 5){
            it = numbers.erase(it);
        }
        else{
            it++;
        }
        cout << *it << endl;
    }

    cout << " =======  " << endl;
    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }
    return 0;
}