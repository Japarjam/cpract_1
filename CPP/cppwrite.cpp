#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {

    string info = "\n\t This verse was written by Japarjam in 1991";
    info.append("\n\t\t\t Jeff Paul, 1991");
    ofstream writer("poem.txt", ios::app);
    
    if (!writer) 
    {
        cout << "Error finding file for opening" << endl;
        return -1;
    }
    writer << info << endl;
    writer.close();

    return 0;
}


/* Created Poem text in notepade 
int main() {
    string poem = "\n\t If I ever had the desire to see, ";
    poem.append("\n\t what the moon has to offer me, ");
    poem.append("\n\t the dry smell of yeast providing its purpose"); 

    ofstream writer("poem.txt");        //this is saved in ubuntu/home/japarjam

    if (!writer) 
    {
        cout << "Error finding file for opening" << endl;
        return -1;
    }
    writer << poem << endl;
    writer.close();
    
    return 0;

}

*/
