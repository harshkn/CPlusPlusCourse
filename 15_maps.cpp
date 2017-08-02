#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> ages;

    ages["aike"] = 40;
    ages["harsha"] = 20;
    ages["kite"] = 60;

    cout << ages["mike"] << endl;

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}