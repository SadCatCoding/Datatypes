#include <iostream>
#include <climits>
using std::cout;

int main()
{
    short a; //16 bits
    int b; //16 or 32 bits
    long c; //32 bits
    long long d; //64 bits
    //short <= int <= long <= long long
    //1 byte = 8 bits
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;
    
    cout << sizeof(long long) << std::endl;
    cout << SHRT_MAX << std::endl; //this is with #include <climits>
    cout << USHRT_MAX << std::endl; //for unsigned
}
