/* c++ name.cpp -o name.exe     then ./name.exe*/


// OOP - Encapsulation (variable data hiding), Polymorphism (using same functions/methods for different purposes), Abstrction and Inheritance 
//https://www.techtarget.com/searchapparchitecture/definition/object-oriented-programming-OOP#:~:text=Object%2Doriented%20programming%20(OOP)%20is%20a%20computer%20programming%20model,has%20unique%20attributes%20and%20behavior.

/*Ecapstulation 
class ClassName
{
    access specifier:
        member1 ;
        member2 ;
    access specifier; 
        member3;
        member4 ;
}


 #include <string>
 #include <iostream>
 using namespace std;
 
 class Dog 
 {
    private:
        int age, weight; 
        string color;

    public: 
        void bark() {cout << "woof!" << endl;}
        void setAge(int yrs) {age = yrs;}
        void setWeight(int lbs) {weight = lbs;}
        void setColor( string hue) {color = hue;}

        int getAge()    {return age;}
        int getWeight() {return weight;}
        string getColor()   {return color; }     
 };

 int main() {
    Dog fido; 
    fido.setAge(3);
    fido.setWeight(70);
    fido.setColor("Brown");

    cout << "Fido is a " << fido.getColor() << " dog" << endl;
    cout << " Fido is  " << fido.getWeight() << " pounds" << endl;
    cout << " Fido is  "<< fido.getAge() << " years old " << endl; 

    fido.bark();

    return 0;
 }

/* Overriding Base Methods      When derived class has same method as base, the overriding process is 
//                              when the object method is called and executed. 
#include <string>
#include <iostream>
using namespace std;

class Asset 
{

    public: 
    void trade() { cout << " Buy the dip" << endl; }
    void trade(string arb) 
    { cout<< "   " << arb << endl; }
};

class NFT: public Asset
{

    public: 
    void trade(string arb) {cout << arb << endl;}

};

int main() 
{

    Asset solana;
    NFT madlads; 
    solana.trade();
    solana.trade("To the Moon");
    madlads.trade("Sweep the Floor");
    madlads.Asset::trade("Sweep the whole damn Floor");

    return 0;
}

/* Note Function overloading- an example of* OOP Polymorophism 
#include <iostream>
using namespace std;
 
 
void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 
void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}
 
// Driver code
int main()
{
    add(10, 2);
    add(5.3, 6.2);
 
    return 0;
}



// Calling Base Constructors with Child/Parent Classes
#include <iostream>
using namespace std;

class Parent
{

    public: 
    Parent()
    { cout << "Default parent contructor called";}
    Parent(int a)
    {
        {cout<< endl <<
        "overloaded parent constructor called";}
    }

};

class Childa: public Parent
{

    public:
    Childa()
    {cout<< endl<<
    "Derived Child A class default constructor called";}

};

class Childb: public Parent
{

    public:
    Childb(int a): Parent(a)
    {cout<< endl<<
    "Derived Child B class default constructor called";}

};

int main() {

    Childa blockHash1;
    Childb blockHash2(0); 
    return 0;
}


// Inheritance
# include <iostream>
using namespace std;

class Token
{

    protected: 
        int supply, price;

    public: 
    void setValues(int s, int p) {supply = s, price = p;}
};

// derive a specific token class from Token

class Solana: public Token
{

    public: 
    int tvl() {return (price * supply); }

};

class Bonk: public Token
{

    public: 
    int tvl() {return (price * supply)/ 100;}
    
};

int main() 
{
    Solana sol; Bonk bonk;
    sol.setValues( 1000000000, 22); 
    bonk.setValues( 500000000, 1);

    cout << " Solana TVL is: " << sol.tvl() << endl;
    cout << " Bonk TVL is: " << bonk.tvl() << endl;
}


// Overload 
#include<iostream>
#include<string>
using namespace std; 

class Staking
{
    private:
    int price, apr; 
    string tokens;

    public: 
    void token() {cout << "What are you staking?" << endl;}
    void lsd(string liquid) {cout << liquid << endl;}

   Staking()
    {
        price = 20;
        apr = 7;
        tokens = "SOL";
    } 

    Staking(int price, int apr)
    {
        this -> price = price ;
        this -> apr = apr;
        tokens = "marinade";
    } 


    Staking(int price, int apr, string tokens)
    {

        this -> price = price; 
        this -> apr = apr;
        this -> tokens = tokens;
    };


   ~Staking() 
   {

    cout << "Object Destroyed" << endl;

    };   
   

    int getPrice() {return price;}
    int getApr() {return apr;}
    string getToken() {return tokens;}


}; 

int main() {

    Staking solana(200, 8, "Sol");

    Staking bonk(69000, 5, "Bonk");

    Staking marinade(5, 22);

    cout << "The asset is " << solana.getToken() <<  endl; 
    cout << "The price is  " << solana.getPrice() << endl; 
    cout << "The APR is   " << solana.getApr() << endl;
    cout << "The annual yeild is " << solana.getPrice() * solana.getApr()/100 << " Sol" << endl; 

    cout << "The asset is " << marinade.getToken() <<  endl; 
    cout << "The price is  " << marinade.getPrice() << endl; 
    cout << "The APR is   " << marinade.getApr() << endl;
    cout << "The annual yeild is " << marinade.getPrice() * marinade.getApr()/100 << " Sol" << endl; 

    cout << "The asset is " << bonk.getToken() <<  endl; 
    cout << "The price is  " << bonk.getPrice() << endl; 
    cout << "The APR is   " << bonk.getApr() << endl;
    cout << "The annual yeild is " << bonk.getPrice() * bonk.getApr()/100 << " Bonk" << endl; 
    return 0; 
}


// didn't need the Staking:: part of this code. 

// Constructor-Destructor of Instance of the Object- Constructor creates an instance of the class/object
#include<iostream>
#include<string>
using namespace std; 

class Staking
{
    private:
    int price, apr; 
    string tokens;

    public: 
    void token() {cout << "What are you staking?" << endl;}

    Staking(int price, int apr, string tokens)
    {

        this -> price = price; 
        this -> apr = apr;
        this -> tokens = tokens;
    };


   ~Staking() 
   {

    cout << "Object Destroyed" << endl;

    };   
   

    int getPrice() {return price;}
    int getApr() {return apr;}
    string getToken() {return tokens;}


}; 

int main() {

    Staking solana(200, 8, "Sol");

    Staking bonk(69000, 5, "Bonk");

    cout << "The asset is " << solana.getToken() <<  endl; 
    cout << "The price is  " << solana.getPrice() << endl; 
    cout << "The APR is   " << solana.getApr() << endl;
    cout << "The annual yeild is " << solana.getPrice() * solana.getApr()/100 << " Sol" << endl; 



    cout << "The asset is " << bonk.getToken() <<  endl; 
    cout << "The price is  " << bonk.getPrice() << endl; 
    cout << "The APR is   " << bonk.getApr() << endl;
    cout << "The annual yeild is " << bonk.getPrice() * bonk.getApr()/100 << " Bonk" << endl; 
    return 0; 
}


// Multiple Object Creator 
#include<iostream>
using namespace std; 

class Staking
{
    private:
    int price, apr; 
    string tokens;

    public: 
    void token() {cout << "What are you staking?" << endl;}

    void setValues( int price, int apr, string tokens)
    {

        this -> price = price; 
        this -> apr = apr;
        this -> tokens = tokens;

    }

    int getPrice() {return price;}
    int getApr() {return apr;}
    string getToken() {return tokens;}


}; 

int main() {

    Staking solana;
    solana.setValues(200, 8, "Sol");

    Staking bonk; 
    bonk.setValues(69000, 5, "Bonk");

    cout << "The asset is " << solana.getToken() <<  endl; 
    cout << "The price is  " << solana.getPrice() << endl; 
    cout << "The APR is   " << solana.getApr() << endl;
    cout << "The annual yeild is " << solana.getPrice() * solana.getApr()/100 << " Sol" << endl; 



    cout << "The asset is " << bonk.getToken() <<  endl; 
    cout << "The price is  " << bonk.getPrice() << endl; 
    cout << "The APR is   " << bonk.getApr() << endl;
    cout << "The annual yeild is " << bonk.getPrice() * bonk.getApr()/100 << " Bonk" << endl; 
    return 0; 
}



// Creating Objects

#include<string>
#include<iostream>
using namespace std; 

class Staking
{
    private:
    int price, apr; 
    string tokens;

    public: 
    void token() {cout << "What are you staking?" << endl;}
    void setPrice( int prc) {price = prc;}
    void setApr( int apy) {apr = apy;}
    void setToken( string asset) {tokens = asset;} 

    int getPrice() {return price;}
    int getApr() {return apr;}
    string getToken() {return tokens;}


}; 

int main() {

    Staking solana;
    solana.setPrice(200);
    solana.setApr(8); 
    solana.setToken("Solana"); 

    cout << "The asset is " << solana.getToken() <<  endl; 
    cout << "The price is  " << solana.getPrice() << endl; 
    cout << "The APR is   " << solana.getApr() << endl;
    cout << "The annual yeild is " << solana.getPrice() * solana.getApr()/100 << " Sol" << endl; 

    return 0; 
}


//Creating Classes/ Objects

#include<string>
#include<iostream>
using namespace std; 

class Car
{
    private:
    int year, cylinders; 
    string color;

    public: 
    void make() {cout << "Lambo" << endl;}
    void setYear( int yrs) {year = yrs;}
    void setCylinders( int cyl) {cylinders = cyl;}
    void setColor( string hue) {color = hue;} 

    int getYear() {return year;}
    int getCylinders() {return cylinders;}
    string getColor() {return color;}


}; 

int main() {

    Car lambo;
    lambo.setYear(2023);
    lambo.setCylinders(8); 
    lambo.setColor("Red"); 

    cout << "The lambo is a " << lambo.getColor() << " car" << endl; 
    cout << "It is from " << lambo.getYear() << endl; 
    cout << "It has " << lambo.getCylinders() << " cylinders" << endl;

    lambo.make();

    return 0; 
}



/* Pointers vs References 
#include <iostream>
using namespace std; 

inline void add(int& a, int* b)
{cout << "total: " << (a + *b) << endl;}

int main() {

    int num = 100, sum = 500; 
    int& rNum = num; 
    int* ptr = &num;
    void(*fn) (int& a, int* b) = add;

    cout << "Reference:  " << rNum << endl; 
    cout << "Pointer:  " << *ptr << endl; 
    ptr = &sum; 
    cout << "Pointer Now:  " << *ptr << endl; 
    fn(rNum, ptr);

    return 9;
}

/* Passing Refernces to Functions
#include <iostream>
using namespace std; 

void writeOutput(int&);
void computeTriple(int&);

int main() {

    int num = 5; 
    int& ref = num;

    writeOutput(ref);
    ref += 15; 
    writeOutput(ref);

    computeTriple(ref);
    writeOutput(ref);

    return 0; 
}

void writeOutput(int& value) {
    cout << " Current Value: " << value << endl; 
}

void computeTriple(int& value) {
    value *= 3; 
}

// Referencing Data
#include <iostream>
using namespace std; 

int main() {

    int num;
    int& rNum = num;
 
    rNum = 400;

    cout << "Value Direct: " << num << endl; 
    cout << "By Reference:  "<< rNum << endl; 

    cout << "Address Direct:  " << &num << endl; 
    cout << "Address by reference:  " << &rNum << endl; 
    rNum *=2; 
    
    cout << "Value Direct: " << num << endl; 
    cout << "By Reference:  "<< rNum << endl; 

    return 0;
}


//Making arrays of pointers 
#include <iostream>
using namespace std; 

int main() {

    char letters[8] = {'C', '+', '+', ' ', 'F', 'u', 'n', '\0'};
    const char* text = "C++ Fun";

    const char* term = "Element"; 
    const char* lang = " C++"; 

    const char* ap1[3] = {"Great", "program", "code"};
    const char* ap2[3] = {lang, "is", "fun"};

    const char* ap3[3] = {ap2[0], ap1[1], ap1[0]}; 
    const char* ap4[3] = {ap2[1], ap1[2], ap2[2]};

    cout << letters << endl;
    cout << text << endl;

    for ( int i = 0; i < 3; i ++)
    {
        cout << term << i << "   ";
        cout << ap1[i] << "   ";
        cout << ap2[i] << "   ";
        cout << ap3[i] << "   ";
        cout << ap4[i] << endl;
    } 

    return 0; 
}


// Passing Pointers to Functions
#include <iostream>
using namespace std;

void writeOutput(int*); 
void computeTriple(int*);

int main ()
{
    int num = 5; 
    int* ptr = &num; 

    writeOutput(ptr);       // first output
    *ptr += 15; 
    writeOutput(ptr);       // second output- 5 + 15
    computeTriple(ptr); 
    writeOutput(ptr);       // computes triple 20 
    return 0;
}

void writeOutput(int* value) {
    cout << " Current value:  " << *value << endl;
}

void computeTriple(int* value) {
    *value *= 3; 
}



#include <iostream>
using namespace std;

int main() 
{
    int nums[] = {1,2,3,4,5,6,7,8,9,10};

    int* ptr = nums; 
    cout << endl << "ptr at:  " << ptr << "gets: " << *ptr;
    ptr ++; 
    cout << endl << "ptr at:  " << ptr << "gets: " << *ptr;
    ptr ++;
    cout << endl << "ptr at:  " << ptr << "gets: " << *ptr;
    ptr -= 2; 
    cout << endl << "ptr at:  " << ptr << "gets: " << *ptr;

    for (int i = 0; i< 10; i++) 
    {
/        cout << endl << "Element:  " << i;
        cout << "    Value " << *ptr;     
    }
    
        cout << endl;

    return 0;
}




#include <iostream>
using namespace std; 

int main() 
{
    int a = 8, b = 16; 
    
    int* aPtr = &a;         // aPtr assigned to the address of a
    int* bPtr;
    bPtr = &b;
    
    cout << " Addresses of Pointers:  " << endl;
    cout << "aPtr  " << &aPtr << endl;
    cout << " bPtr  " << &bPtr << endl; 

    cout << " Values in pointers:  " << endl;
    cout << " aPtr  "  << aPtr << endl; 
    cout << " bPtr  "  << bPtr << endl; 

    cout << "Values in address pointed to ...  " << endl;
    cout << "a:  " << *aPtr << endl;
    cout << "B:  " << *bPtr << endl;

    return 0;
}


/*
#include <string>
#include <iostream>
using namespace std;

int main() 
{
    int num = 100; 
    double sum = 0.031469;
    string text = " C++ is Fun"; 

    cout << "Integer Memory starts at:  " << &num << endl; 
    cout << "Double Variable memory starts at:  " << &sum << endl;
    cout << "String memory starts at:   " << &text << endl; 

    return 0;
}


/*
#include <stdexcept>
#include <typeinfo>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string lang = "C++";
    int num = 1000000000;
    //try {lang.replace( 100, 1, "C");}
    //try {lang.resize(3 * num); }
    try {ifstream reader("no such.txt"); 
        if(! reader) throw logic_error ("Item not found");}
    catch (out_of_range &e)
        {
            cerr << "RAnge Expression: " << e.what() << endl;
            cerr << "Exception Type  " << typeid(e).name() << endl;
            cerr << endl << "Program Terminated" << endl; 
            return -1 ;
        }
    catch (exception &e) 
    {
        cerr << "Exception " << e.what() << endl; 
        cerr << "Exception Type " << typeid(e).name() << endl; 

    }
    cout << "Program Continues" << endl; 

    return 0; 
}


/*
#include <iostream>
#include <string>
using namespace std; 

int main() {

    string lang = "C++";
    try {lang.erase(4,6); }
    catch (exception &error)
        {cerr << "Exception" << error.what() << endl ; }
    return 0;
}



 Error Handling- predicting problems
 #include <iostream>
 using namespace std;

 int main() {

    int number;

    try 
    {
        for (number = 1; number < 21; number++)
        {
        if (number > 4) throw(number);
        else
        cout << "Number:  " << number << endl; 
        }
    }
    catch(int num)
    {
        cout << "Exception at:  " << num << endl;
    }

    return 0;
 }



/* Manipulating input and output with iostream library pp 88-89

#include <iostream>
using namespace std;

int main() {

    bool isTrue = 1; 
    int num = 255; 

    cout.width(40);
    cout.fill(  '.'  );

    cout << "Output"  << endl; 

    cout.precision(11); 
    cout << "Pi " << 3.1415926536 << endl;

    cout << isTrue << " : " << boolalpha << isTrue << endl;
    cout << num << " : " << hex << showbase << uppercase << num << endl; 



    return 0;
}



 Formatting with getline - grabbing data from a file
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {

    const int RANGE = 16;
    string tab[RANGE];
    int i = 0, j = 0;

    ifstream reader("cppdata.txt");

    if (! reader) 
    {
        cout << "Error reading file" << endl;
        return -1;
    }

    while (!reader.eof()) 
    {
        if ((i +1) % 4 == 0)
            getline(reader, tab[i++], '\n');
        else 
            getline(reader, tab[i++], '\t');
       
    }
     reader.close();
        i = 0;

        while (i < RANGE) 
        {
            cout << endl << "Record Number  " << ++j << endl;
            cout << "First Name" << tab[i++] <<endl;
            cout << "Last Name" << tab[i++] <<endl;
            cout << "Department" << tab[i++] <<endl;
            cout << "ID Number" << tab[i++] <<endl;
        }

    return 0; 
}



#include <fstream>
#include <iostream>
using namespace std;

int main() 
{
    char letter; 
    int i; 

    ifstream reader("poem.txt");

    if (! reader)  {
        cout<< "error opening file" << endl;
        return -1;
    }
    else
    for (i =0; ! reader.eof(); i ++);
    {
        reader.get(letter);
        cout << letter;
    }

    reader.close();
    cout << "iterations:  " << i << endl;

    return 0;
}



#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string poem = "\n\t If I ever had the desire to see, ";
    poem.append("\n\t what the moon has to offer me, ");
    poem.append("\n\t the dry smell of yeast providing its purpose"); 

    ofstream writer("poem.txt");

    if (!writer) 
    {
        cout << "Error finding file for opening" << endl;
        return -1;
    }
    writer << poem << endl;
    writer.close();
    
    return 0;

}





#include <string>
#include <iostream>
using namespace std;

int main() {

    string text = "I do like the seaside";
    cout << "Original  " << text << endl;

    text.insert(10, "to be beside ");
    cout << "Inserted:  " << text << endl;

    text.erase(2,3);
    cout << "Erased:  "  << text << endl;

    text.replace(7, 25, "Strolling by the sea");
    cout << "Replace:  "  << text << endl;

    cout << "Copied:  " << text.substr( 7, 9) << endl;
    cout << "Last character:  "  << text.at(text.size() -1) << endl;

    return 0;
}


 
int main() {

    string text = "I can resist anything but temptation"; 
    int num; 

    num = text.find("resist", 0);       // finds the word resist in the text var string and returns index 0
    cout << "Position:  " << num << endl;

    num = text.find("Nonsuch", 0);
    cout << "Result:  " << num << endl;

    num = text.find_first_of("if");
    cout << "First I:  " << num << endl;

    num = text.find_first_not_of("t"); 
    cout << "First not I:  " << num << endl;

    num = text.find_last_of("t");
    cout << "Last t:  " << num << endl; 

    num = text.find_last_not_of("t");
    cout << "Last not t: " << num << endl;

    return 0;

}


int main() {

    string front;
    string back; 
    string text = "Always laugh when you can, it is good medicine"; 

    front.assign(text);
    cout << endl << "Front:  " << front << endl; 

    front.assign(text, 0, 27);
    cout << endl << "Front:  " << front << endl;

    back.assign(text, 27, text.size());
    cout << endl << "Back:  " << back << endl;

    back.swap(front);       //swaps front and back text variables
    cout << endl << "Front:  " << front << endl;
    cout << endl << "Back:  "  << back << endl;


    return 0;
}


int main() {

    string lang = "C++ ";
    string term = "Programming"; 
    string text = "C++ Programming"; 

    cout << "Concatenated " << (lang + term ) << endl;
    cout << "Original " << lang << endl;

    cout << "Appended " << lang.append( term ) << endl;
    cout << "Original "  << lang << endl << endl;

    cout << "Differ " << ( lang == term )  << endl;
    cout << "Match  "  << ( lang == text ) << endl << endl;

    cout << " Match  " << lang.compare( text ) << endl;
    cout << "Differ "  << lang.compare( term )  << endl;
    cout << "Lower ASCII"  << (lang.compare("zzzzz")) << endl;

    return 0;
}



void computeFeatures (string);      // void returns no type

int main() {

    string text = "C++ is Fun";
    computeFeatures(text);
    
    text += "for Everyone";
    computeFeatures(text);
    
    text = "C++ is Fun";
    computeFeatures(text);

    text.clear();
    computeFeatures(text);

    return 0;
}

void computeFeatures (string text) {

    cout << endl << "String:  " << text << endl;

    cout << "Size:  " << text.size();
    cout << "Capacity:  " << text.capacity();
    cout << " Empty ?  " << text.empty() << endl;


}




// this program converts strings between data types
int main() {

    string term = "100";
    int number = 100; 

    int num;            // stores converted string
    string text;        // stores converted integer
    stringstream stream;    // to Perform the conversion 

    stream << term;     // initializes string value into stringstream object (Notice << optput)
    stream >> num;   // extracts stringstream obj into integer value (notice >> input into number)

    num /= 4;           // perform arithmetic (division here)
    cout << "Integer value is:  " << num << endl;

    stream.str("");     //empty contents
    stream.clear();     // empty the bit flags

    stream << number ;  // load integer
    stream >> text;     // extract the string

    text += " percent"; 
    cout << "String Value is " << text << endl;

    return 0; 
}




int main() {

    string name;

    cout << "Please enter your full name ";
    cin >> name; 
    cout << "Welcome  "<< name << endl;
     cout << " Please re-enter your full name  "; 
     // this next line ignores what's left in the buffer up to the space in the getline
     cin.ignore(256, '\n'); 
     getline(cin, name);
     cout << "Thanks  " << name << endl;

    return 0;
}
 


 
int main() {
    string text = "9"; 
    string term("9");
    string info = "toys"; 
    string color; 
    char hue[4] = {'r', 'e', 'd', '\0'}; 
    color = hue; 
    info = "baloons"; 
    text += (term + color + info);
    cout << endl << text << endl;
    return 0; }



int computeFactorials (int, int); 

inline int factorial (int n)
{
    return (n==1) ? 1: (factorial(n-1)* n);

}

int main() {
    computeFactorials(1,8);
    return 0; 
}

int computeFactorials (int num, int max) 
{
    cout << "Factorial of  " << num << " : ";
    cout << factorial(num) << endl;
    num++;
    if ( num > max) return 0; 
    else return computeFactorials(num, max); 
}


 REPLACED THIS CODE WITH INLINE FOR OPTIMIZATION
int factorial(int n) 
{
    int result; 
    if (n == 1) result = 1; 
    else result = (factorial(n-1)* n); 
    return result  ; 

}

NEW PROGRAM 


float computeArea (float);  //preprocessor instructions declaration of function proto
float computeArea (float, float);  // declarations
float computeArea (char, float, float);

int main() {

    float num, area;

    cout << "Enter a dimension in feet:  ";
    cin >> num; 

    area = computeArea(num);        // function call with single num arg so program knows which to call
    cout << "Circle: Area =  " << area << "sq ft " << endl;  

    area = computeArea(num, num);      // function call with 2 num to get right one
    cout << "Square: Area =  " << area << "sq ft. " << endl; 

    area = computeArea('T', num, num); 
    cout << "Triangle: Area =  " << area << "sq ft.  "<< endl;

    return 0; 
}



float computeArea(float diameter) 
{
    float radius = (diameter/2);
    return(3.141593 * (radius * radius));

}

float computeArea(float width, float height) 
{
    return (height * width);

}

float computeArea(char letter, float height, float width)
{
    return ((width/2) * height);
}


NEW PROGRAM  
int main() {

    float response;
    cout << "Ask me something:  ";
    cin >> response;
    if (response); 
    cout << "I'm awake and I speak English, so yeah, I know what you're sayin" << endl;
    return 0; 
}


New Program 
float fToC(float degreesF = 32.0);      // fahrenheit to celsius

int main() {

    float fahrenheit, centigrade;
    cout << "Enter a fahrenheit temperature:/t ";
    cin >> fahrenheit;
    centigrade = fToC(fahrenheit);
    cout << fahrenheit << "F is: " << centigrade << "C";
    cout << endl << "Freezing Point " << fToC() << "C" << endl;   
    return 0; 
}

float fToC(float degreesF) {

    float degreesC = ((5.0/9.0) * (degreesF - 32.0)); 
    return degreesC; 

}


New PROGRAM 
float bodyTempC();      //function prototype declaration 
float bodyTempF();

int main()  {

    cout << " Centigrade:  " <<bodyTempC() << endl; 
    cout << " Fahrenheit:  " <<bodyTempF() << endl; 

    return 0; 
}

float bodyTempC() {

    float temperature = 37.0;
    return temperature;
}

float bodyTempF() {

    float temperature = 98.6; 
    return temperature;
}


int main() {
vector <int> vec(10); 
int i = 0; 

while ( i < vec.size() )
 {
    i++; 
    if (i == 3) {cout << " | Skipped"; continue; }
    if (i == 8) {cout << endl << "Done"; break;}
    vec[i-1] = i; 
    cout << "  |  " << vec.at(i-1);
}

    return 0; 
}


--- nesting inner FOR  loops- see the bracketing Japar 
int main() {

    int i, j; 
    for (i=1; i < 4; i ++)
{   {
    cout << " Loop Iterations  " << i << endl; }
      for (j=1; j < 4; j ++)        
{
    cout << " Inner Loop  Iterations  " << j << endl; 
}   }
    
    return 0; 
}

 

int main() {

    int num = 6; 

    switch(num)
    {
       case 1 : cout << num << " : Monday" ; break;
       case 2 : cout << num << " : Tuesday" ; break; 
       case 3 : cout << num << " : Wednesday " ; break;
       case 4 : cout << num << " : Thursday " ; break; 
       case 5 : cout << num << " : Friday " ; break;
       default : cout << num << " : Weekend Baby" ; break;  
    }    

    return 0; 
}


int main() {

    int num = 3; 
    char letter = 'B';

    if (num < 5) 
    {cout << "Number is less than 5" << endl;}
    else 
    {cout << "Number is greater than 5"<< endl;}

    if (letter == 'A') 
    {cout << "Letter is A" << endl;}


    return 0;
}

int main() {

    int num = 7, factor = 2;
    char letter = 'A'; float result = 0.0;

    cout << "Integer Definition: " << (num/factor) << endl;
    result = (float) (num)/factor;
    cout << "Cast Division Float:  " << result << endl;

    num = static_cast <int> (letter);
    cout << "Cast character int:  "  << num << endl; 

    letter = static_cast <char> (70); 
    cout << " Cast integer char:  " << letter << endl;

    return 0; 
}



int main() {

    int num = 1 + 4 * 3; 
    cout << endl <<  " Default order : " << num << endl;

    num = (1 + 4) * 3;
    cout << "Forced Order: " << num << endl << endl;

    num = 7-4 +2;
    cout << "Default Direction: " << num << endl; 

    num = 7 - (4 + 2);
    cout << "Forced Direction: " << num << endl ;


    return 0; 
}


int main() {
    int num;        int nums[50];       float decimal; 
    bool isTrue;    unsigned int max;   char letter;
    double pi;      short int number;   char letters[50];

    cout << " int size: " << sizeof(num) << endl;
    cout << "50 int size: " << sizeof(nums) << endl;
    cout << " Short int number: " << sizeof(number) << endl;
    cout << " unsigned int number: " << sizeof(max) << endl;

    cout << " double size: " << sizeof(pi) << endl;
    cout << " float size: " << sizeof(decimal) << endl;
    cout << " char size " << sizeof(letters) << endl;
    cout << " 50 char size " << sizeof(letters) << endl;
    cout << " Bool size " << sizeof(isTrue) << endl;

    return 0;
}

Ternary - conditionals Result of condition (facorite testing mechanism)  See page 34 
int main() {

    int a, b, max;
    a = 1, b = 2; 
    cout << "Variable a value is: ";
    cout << ((a !=1)? "not 1, " : "1,");
    cout << ((a% 2 != 0) ? "odd" : "even"); 

    cout << endl << "Variable b value is: ";
    cout << ((  b != 1) ? "not 1 , " : "1, ");
    cout << (( b % 2 != 0 ) ? "odd" : "even"); 

    max = (a > b) ? a:b; 
    cout << endl << "Greater value is: " << max << endl;
    


    return 0; 
}

int main() {
    int a,b; 
    cout << "Assign Values ";
    cout << " a = " << (a = 8) << "  "; 
    cout << " b =  " << (b = 4);
    
    cout << endl << "Add and Assign";
    cout << "a += b (8 += 4) a = " << (a += b); 
    cout << endl <<"Subtract and Assign";
    cout << "a -= b (8 -= 4) a= " << (a -=b);
    cout << endl << "Multiply and Assign";
    cout << "a *= b ( 8 *= 4) a = " << (a *= b);
    cout << endl << "Divide and Assign";
    cout << " a /= b (8/=4) a =  " << (a/=b);
    cout << endl << "Modulus and Assign";
    cout << "a%=b (8%=4) a = " << (a%=b);

    cout << endl << "NOT logic" << endl;
    cout << " a = " << a << " a = " << !a << "  "; 
    cout << " b = " << b << " !b = " << !b << endl; 




    return 0;
}


int main() {
    int a=8, b= 10; 
    cout << "Addition result is:  " << a + b << endl; 
    cout << "Multiplication result is: " << a * b << endl;
    cout << "Division result is: " << a/b << endl;
    cout << " Modulus result is: " << a%b << endl;

    cout << " Postfix increment: " << a++ << endl;
    cout << " Postfix increment: " << a << endl; 
    cout << "Prefix decrement: " << --a << endl; 
    cout << " Prefix decrement: " << a << endl; 


    return 0;
}


int main() {
    const double PI = 3.1415926536;
    cout << "6\" circle circumference: " << (PI * 6) << endl; 

    enum {RED=1, YELLOW, BLUE, GREEN, BROWN, PINK, BLACK};
    cout << "I shot a red worth: " << RED << endl;
    cout << "Then a Blue worth: " << BLUE << endl;
    cout << "My total was :  " << (BLUE + RED) << endl;

    typedef enum {NEGATIVE, POSITIVE} charge; 
    charge neutral = NEGATIVE, live = POSITIVE; 
    cout << "Neutral wire: " << neutral << endl;
    cout << " Live wire: " << live << endl; 

    return 0; 
}




#include <vector>

int main() {
    int a = 8, b = 12; 
    cout <<"Addition results: " << (a + b) << endl;
    cout <<" Subtraction results: " << (a - b) << endl;
    cout <<" Multipiication result "<< (a * b) << endl; 
    cout <<" Postfix increment:  " << a++ << endl;
    cout <<" Result: " << a << endl;
    cout <<" Prefix decrement: " << --a << endl; 
    return 0;
}



int main() {
    const double PI = 3.1415926536;
    cout << "6\" circle circumference:  " <<(PI * 6)<< endl; 

    enum
    {RED=1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK}; 
    cout <<"I shot a red worth:  " << RED << endl;
    cout <<"I shot a blue worth:  " << BLUE << endl;
    cout <<"Total score is: " << (RED + BLUE) << endl;

    typedef enum { NEGATIVE, POSITIVE} charge; 
    charge neutral = NEGATIVE, live = POSITIVE; 
    cout <<"Neutral wire: " << neutral << endl;
    cout <<" Live wire: " << live << endl;
   
    return 0; 
}

int vectors() {
    vector <int> vec(3,100);
    cout <<" Vector size is: " << vec.size() << endl; 
    return 0;
}*/