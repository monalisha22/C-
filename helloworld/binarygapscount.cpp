#include <iostream>
#include <math.h>
#include <string>
using namespace std;


/// @brief 
/// @param numDecimal 
/// @return 
int decimalToBinary (int numDecimal){
    string numBinary = "";
    while (numDecimal > 0){
        if (numDecimal % 2 == 0){
            numBinary = "0" + numBinary;
        }
        else{
            numBinary = "1" + numBinary ;
        }
        numDecimal /= 2;
    }
    return numBinary;
}


int main (){
    int numDecimal;
    cout << " Please enter an integer: \n";
    cin >> numDecimal;
    string numBinary = decimalToBinary(numDecimal);
    cout << "The binary representation of the integer is:" << numBinary << "\n";
   return 0; 
}

