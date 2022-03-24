// Title: Basic Ifstream
// Purpose: Practice Ifstream to read file and output the data inside file
// Author: Fransiskus Agapa

#include <iostream>
#include <fstream>
#include <string>

using std::ifstream;
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    ifstream file;
    string nameFile;
    string inputInFile;

    cout << " Enter the file name and file type to be opened : " << endl;
    cin >> nameFile;         // user inputs the name of file
    file.open(nameFile);  // try to open the file from user input

    if(!file.is_open())     // check if file is open
    {
        cout << "Fila cannot be opened" << endl;
        return 1;
    } else
    {
        cout << "File is opened" << endl;
        while(file >> inputInFile)
        {
            cout << inputInFile << " ";
        }
        cout << '.' << endl;
    }

    return 0;
}
