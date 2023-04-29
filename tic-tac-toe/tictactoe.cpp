#include <iostream>

using namespace std;
int arrResultStore(char); // storing Char in the array
int winner(char);//

int main()
{
    int turn;
    char player;
    
    for (turn = 0; turn < 9; turn++)
    {
        if (turn % 2 == 0)
        {
            cout << "Player 1, it's your turn: use O \n";
            cin >> player;
            arrResultStore(player); 
        }
        else if (turn % 2 != 0)
        {
            cout << "Player 2, it's your turn: use X \n";
            cin >> player;
            arrResultStore(player);
    }
    int winner(char value);
    return 0;
    }
}

// I know there is a better way rather than doing switch case but I could find a way to do with for loop
int arrResultStore(char player){
    int i, j;
    char memoryAddress;
    char value;
    char resultStore[3][3] = {{'0', '1', '2'}, {'3', '4', '5'}, {'6', '7', '8'}};
    cout << "Please select the index you want to put in \n"
         << "0,1,2\n"
         << "3,4,5\n"
         << "6,7,8\n";
    cin >> memoryAddress;
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            switch (memoryAddress)
            {
            case '0':
                i = 0;
                j = 0;
                resultStore[i][j] = player; // stores player input in resultStore[0][0] that is in a[0]
                char value = resultStore[i][j];
                main();
                break;

            case '1':
                i = 0;
                j = 1;
                resultStore[i][j] = player;
                char value = resultStore[i][j];
                main();
                break;

            case '2':
                i = 0;
                j = 2;
                resultStore[i][j] = player;
                char value = resultStore[i][j];
                main();
                break;

            case '3':
                i = 1;
                j = 0;
                resultStore[i][j] = player;
                char value = resultStore[i][j];
                main();
                break;

            case '4':
                i = 1;
                j = 1;
                resultStore[i][j] = player;
                char value = resultStore[i][j];
                main();
                break;

            case '5':
                i = 1;
                j = 2;
                resultStore[i][j] = player;
                char value = resultStore[i][j];
                main();
                break;

            case '6':
                i = 2;
                j = 0;
                resultStore[i][j] = player;
                char value = resultStore[i][j];
                main();
                break;

            case '7':
                i = 2;
                j = 1;
                resultStore[i][j] = player;
                char value = resultStore[i][j];
                main();
                break;

            case '8':
                i = 2;
                j = 2;
                resultStore[i][j] = player;
                char value = resultStore[i][j];
                main();
                break;

            Default:
                cout << "Invalid index selection";
                break;;
            }
        }
    } 

}



    /* Winner declaration*/
    int winner(char value)
    {
        bool win = false;
        // mermory address
        if (resultStore[0][0] == resultStore[0][1] == resultStore[0][2] &&
            resultStore[1][0] == resultStore[1][1] == resultStore[1][2] &&
            resultStore[2][0] == resultStore[2][1] == resultStore[2][2] &&
            resultStore[0][0] == resultStore[1][0] == resultStore[2][0] &&
            resultStore[0][1] == resultStore[1][1] == resultStore[2][1] &&
            resultStore[0][2] == resultStore[1][2] == resultStore[2][2] &&
            resultStore[0][0] == resultStore[1][1] == resultStore[2][2]){
            win = true;
            if (value == 'X')
            {
                cout << "Winner is Player 2";
            }
            else
            {
                cout << "Winner is player 1";
            }
            return 0;
        }
    }

