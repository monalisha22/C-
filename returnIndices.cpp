#include <iostream>

using namespace std;

int main(){
    int nums[] = {2,7,11,15}; 
    int target, number1, number2, numAddress1, numAddress2;
    cout << "Enter the first target number to add: \n";
    cin >> number1;
    cout << "Enter the second target number to add: \n";
    cin >> number2;
    for (int i=0; i<4; i++){
        if (nums[i] == number1){
            numAddress1 = i;
        } else if(nums[i] == number2)
        {
            numAddress2 = i;
        }
    }
    target = number1 + number2;
    cout << "The sum of the target is:" << target <<"\n";
    cout << "The indices are:" << numAddress1 << "," << numAddress2 <<"\n";

    return 0;
}