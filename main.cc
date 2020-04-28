#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;


int countLine(string input);

int countChar(string input);

int main(int argc, char const *argv[]){
    string filename;
    if(argc != 2){
        countLine("Ohio University");
        countChar("Athens");
    }
    else{
        countLine(argv[1]);
        countChar(argv[1]);
    }
    return 0;
}

int countLine(string input){
    ifstream ins;
    string line;

    ins.open(input);
    int counter = 0;

    while(getline(ins, line)){
        counter++;
    }
    
    ins.close();

    cout << counter << " lines. \n";
    return counter;
}

int countChar(string input){
    ifstream ins;
    string line;
    int counter = 0;

    ins.open(input);
    
    while(getline(ins, line)){
        counter+=line.length();
    }

    ins.close();

    cout << counter << " characters. \n";
    return counter;
}