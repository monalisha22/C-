#include <iostream>
using namespace std;

int add (int a, int b);
int sub (int a, int b);
int multiply(int a, int b);
int choice(int a, int b, int ch);
int repeat(int answer);

int main(){
  int a, b, ch;
  cout << "Hello Intelligent People\n";
  cout << "Enter first number:";
  cin >> a;
  cout << "\n";
  cout << "Enter second number:";
  cin >> b;
  cout << "\n";
  cout << "Enter your choice of calculation by entering a number:\n" << "1. add\n" << "2. sub\n" << "3. multiply\n";
  cin >> ch;
  cout << choice(a, b, ch); 

  return 0;
}

int add (int a, int b){
  cout << "The addition is: ";
  return a + b;
}

int sub (int a, int b){
  cout << "The subtraction is: ";
  return a - b;
}

int multiply (int a, int b){
  cout << "The multiplication is: ";
  return a * b;
}

int choice(int a, int b, int ch){
  int answer;
  switch (ch){
    case 1:
      cout << add(a, b)<< "\n";
      cout << repeat(answer);
      break;

    case 2:
      cout << sub(a, b)<< "\n";
      cout << repeat(answer);
      break;

    case 3:
      cout << multiply (a, b)<< "\n";
      cout << repeat(answer);
      break;

    default:
      cout << "Invalid choice: Please enter the number as your preferred calculations:\n";
      break;
  }
  return 0;
}

int repeat(int answer){
  cout <<"Do you want to start another computation? Please enter a number for your choice \n" << "1. Yes\n" << "2. No\n";
  cin >> answer;
  if (answer == 1){
    cout << main();
    return 0;
  } 
  else {
    cout << "Thank you. Have a nice day!";
    return 0;
  }
}
