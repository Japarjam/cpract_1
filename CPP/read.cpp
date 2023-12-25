#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() 
{
    string line; 
    //char letter; 
    int i; 

    ifstream reader("poem.txt");

    if (! reader)  {
        cout<< "error opening file" << endl;
        return -1;
    }
    else
    for (i =0; ! reader.eof(); i ++);
    {
        getline( reader, line);
        cout << line << endl; 
        //reader.get(letter);
        //cout << letter;
    }

    reader.close();
    cout << "iterations:  " << i << endl;

    return 0;
}