#include <iostream>
#include <climits>
using std::cout;
using std::endl;

int main()
{
    short a; //16 bits
    int b; //16 or 32 bits
    long c; //32 bits
    long long d; //64 bits
    //1 byte = 8 bits
    unsigned short e;
    unsigned int f;
    unsigned long g;
    unsigned long long h;
    
    cout << sizeof(long long) << endl;
    cout << SHRT_MAX << endl; //this is with #include <climits>
    cout << USHRT_MAX << endl; //for unsigned
}
