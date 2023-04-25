#include <iostream>
#include <string>


using namespace std;
void enterNum();
double calculations();

int main(){
    cout << "Need some help in calculations!\n";
    enterNum();
    return 0;
}

void enterNum()
{
    double nums;
    cout << "Enter your problem:\n";
    getline (cin, nums); /// get the nums as the string

    int numsLength = nums.length(); // get the length of the nums 
    double numEntered = stoi(nums);// conver the input string to an integer
    calculations(double numEntered, int numsLength);
}


double calculations(double numEntered, int numsLength)
{
 
        While (numsLength != 0){
            double 
            switch (calculations){
                case 
            }

        }


    
    return 0.0;
}
