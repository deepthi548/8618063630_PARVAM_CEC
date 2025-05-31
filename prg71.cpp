//file handling//
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string text;
    ifstream MyFile("C:\\Users\\MicroApt\\Downloads\\Deepthi codes\\a.exe\\sample.txt");
   while (getline(MyFile, text)) 
    cout << text;
    MyFile.close();
    return 0;
}