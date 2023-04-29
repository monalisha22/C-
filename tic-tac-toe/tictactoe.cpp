#include <iostream>

using namespace std;

string player1 =" ";
string player2 =" ";
char value = 'X';
char resultStore[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row, col;
bool tie=false;
int turn;



// I know there is a better way rather than doing switch case but I could find a way to do with for loop
void arrResultStore(){
    int i, j;
    char memoryAddress;
    /*cout << "Enter name of Player1";
    getline(cin, player1);
    cout << "Enter name of Player2";
    getline(cin, player2);*/
    cout << "Please select the index you want to put in \n";
    cout <<"  |  |   \n";
    cout<<resultStore[0][0]<<" | "<<resultStore[0][1]<<"| "<<resultStore[0][2] << "\n";
    cout<<"  |  |   \n";
    cout<<"--|--|-- \n";
    cout<<resultStore[1][0]<<" | "<<resultStore[1][1]<<"| "<<resultStore[1][2] << "\n";
    cout<<"  |  |   \n";
    cout<<"--|--|-- \n";
    cout<<resultStore[2][0]<<" | "<<resultStore[2][1]<<"| "<<resultStore[2][2] <<"\n";
    cout<<"  |  |   \n";
}

void mapvalue(){
    int mark;
    if (value == 'X'){
        cout<<player1<<" Please enter the index 1-9 to place your mark"<<endl;
        cin>> mark;
        }
    if (value == 'O'){
        cout<<player2<<" Please enter the index from 1-9 to place your mark"<<endl;
        cin>> mark;
        }
  
    if (mark == 1){
        row = 0;
        col = 0;
    }
     if (mark == 2){
        row = 0;
        col = 1;
    }
     if (mark == 3){
        row = 0;
        col = 2;
    }
     if (mark == 4){
        row = 1;
        col = 0;
    }
     if (mark == 5){
        row = 1;
        col = 1;
    }
     if (mark == 6){
        row = 1;
        col = 2;
    }
     if (mark == 7){
        row = 2;
        col = 0;
    }
     if (mark == 8){
        row = 2;
        col = 1;
    }
     if (mark == 9){
        row = 2;
        col = 2;
    }
    else if(mark < 1 || mark > 9) {
        cout<< "Invalid selection \n";
    }
   
    if (value == 'X' && resultStore[row][col]!='X' && resultStore[row][col] != 'O'){
        resultStore[row][col]='X';
        value= 'O';
    } else if (value == 'O' && resultStore[row][col]!='O' && resultStore[row][col]!= 'X'){
        resultStore[row][col]='O';
        value= 'X';
    } else{
        cout << "There is no empty space" <<endl;
        mapvalue();
    }
}
    

    /* Winner declaration*/
 bool winner(){
        // mermory address
        for (int i=0; i<3; i++)
        {
            if (resultStore[i][0] == resultStore[i][1] && resultStore[i][0] == resultStore[i][2] || resultStore[0][i] == resultStore[1][i] && resultStore[2][i])
            {
                return true;
             }
            if (resultStore[0][0]==resultStore[1][1] && resultStore[0][0]== resultStore[2][2] || resultStore[0][2]==resultStore[1][1] && resultStore[1][1] == resultStore[2][0])
             {
                return true;
             }
        for (int i=0; i<3; i++)
            for(int j=0; j<3; j++){
               if (resultStore[i][j] != 'X' || resultStore[i][j] != 'O'){
                return false;
               }
            }
        }
        tie= true;
        return false;
            
}

int main()
{
    cout << "Enter name of Player1" << endl;
    getline(cin, player1);
    cout << "Enter name of Player2" << endl;
    getline(cin, player2);

    while(!winner()){
        arrResultStore();
        mapvalue();
        winner();
    }
    if(value == 'X' && tie == false){
        cout<<player1<<" Wins!"<< endl;

    } else if(value == 'O' && tie == false){
        cout<<player2<<" Wins!"<<endl;
    } else {
        cout<<" Draw" <<endl;
    }
    
    return 0;
}
