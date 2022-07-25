#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Datatypes in C++

    char abc = 'a';
    // This take 1 Byte= 8 bits in the memory

    int age = 76;
    // This take 4 byte in memory= 8*4=32 bits

    float radius = 2.45;
    // This take 4 bytes in memory

    double fdouble = 1.2341;
    // This take 8 byte in memory

    // char ab = 'ab';
    // cout<< ab<<endl;
    // This is not allow, only single character is allowed

    // How Data is stored?
    int a = 8;

    //=>1) 8 is converted into binary form which is  1000
    //=>2) 1000 will take 4 bits and remaining bits will be saved as 0 which are 28 i.e 32-4=28.

    int x = 5;
    // binary form of  5 is 0101 and remainig 28 bits will be stored as 0

    //******* What about negative numbers?
    // The bit will indicate that you are positive or negative
    // 0-> postive
    // 1-> negative

    int negativeNumber = -6;
    // These are series of steps to  save  this into memory.
    //-> 1) ignore the negative sign => 6
    //-> 2) convert to binary representation => 110 and remaing will be store as 0
    //-> 3) Take 2's complement and store => take 1's complement and add 1;
    //  cout<< negativeNumber<<endl;

    unsigned int postivenumber = 112;
    cout << postivenumber << endl;
    // unsigned will take only positive number.

    char ch = 'a';
    // ASCII table : all the character are map to ascii values
    // ascii value of a is 97
    // So this 97 is coverted into binarty and store into memory

    // char is 1 byte which is 8 bits

    // TYPECASTING

    // Convert from one type to other

    //** Implicit Coversion: done by the compiler.

    // int a1='a';
    // cout<<a1<<endl;
    // This is a1 is typecased into integer.

    // char b=98;
    // cout<<b<<endl;
    // This is b=98 is typecased into character.

    // char ch12 = 123456;
    // cout << ch12 << endl;
    // In this case the binary coversion of 123456 will be "11110001001000000"
    // But char is 1 byte which is 8 bits so it will take first 8 bits form left or last byte which are 01000000 and after that it will map to ascii table and 64 in decimal will be the output i.e is @ symbol so the output is @.

    // string name = "Hamamd Gujjar";
    // cout << name << endl;

    // //sizeof:  a compile-time operator that determines the size, in bytes, of a variable or data type.

    // int size = sizeof(name);
    // cout << "size of a is : " << size << endl;
}