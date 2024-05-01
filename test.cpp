#include <iostream>
#include conio.h>
 using namespace std;
 
 
int main() 
{
    // Ek integer array banaya gaya hai
    int myArray[] = {1, 2, 3, 4, 5};

    // Array ki size ko sizeof operator se nikala gaya hai
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Array ki size ko print kiya gaya hai
    std::cout << "Array size: " << arraySize << std::endl;
    

    return 0;
}
