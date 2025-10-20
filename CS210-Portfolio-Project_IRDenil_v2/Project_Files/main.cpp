#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> groceryItems;
    ifstream inputFile("CS210_Project_Three_Input_File.txt");

    string item;
    while (inputFile >> item) {
        groceryItems[item]++;
    }

    cout << "Grocery Item Frequency List:\n";
    for (auto const& pair : groceryItems) {
        cout << pair.first << " " << pair.second << endl;
    }

    inputFile.close();
    return 0;
}
