#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void read_file_line_by_line(){
    ifstream file;
    string line;
    file.open("path_to_file");
    while (getline (file, line))
        cout << line << endl;
}

int main(){
    read_file_line_by_line();
    return 0;
}
