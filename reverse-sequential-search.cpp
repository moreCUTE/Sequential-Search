#include<iostream>
using namespace std;

int main() {
    int location;
    bool found = false;
    location = 4;
    int IDs[] = { 234, 567, 321, 677, 789 };

    int searchItem;
    cout << "enter ID you are searching force:" << endl;
    cin >> searchItem;

    while (location < sizeof(IDs) / sizeof(IDs[0]) && !found) {
        if (IDs[location] == searchItem)
            found = true;
        else
            location--;
    }
    if (found == true)
        cout << "ID " << searchItem << " was found in slot " << location << "." << endl;
    else
        cout << "ID was not found" << endl;
}
