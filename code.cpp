#include <iostream>
#include <stdlib.h>
using namespace std;

char board[10] = {'0','1','2','3','4','5','6','7','8','9'};

//Function to check win and draw conditions
int checkwin() 
{
    for (int i = 1; i <= 7; i += 3) 
    {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2])
            return 1;
    }

    for (int i = 1; i <= 3; i++) 
    {
        if (board[i] == board[i + 3] && board[i + 3] == board[i + 6])
            return 1;
    }

    if ((board[1] == board[5] && board[5] == board[9]) || (board[3] == board[5] && board[5] == board[7]))
        return 1;

    // Check for draw condition
    if (board[1] != '1' && board[2] != '2' && board[3] != '3' &&
        board[4] != '4' && board[5] != '5' && board[6] != '6' &&
        board[7] != '7' && board[8] != '8' && board[9] != '9') 
    {
        return 0;
    }

    return -1;
}


//Function to display the current status
void display_board()
{
    system("cls");
    cout << "\n\n\t   Tic Tac Toe Game \n\n";
    cout << "\tPlayer 1(X) - Player 2(O)\n\n";

    //Drawing of the board
    cout << "\t _______ _______ _______" << endl;
    cout << "\t|       |       |       |" << endl;

    cout << "\t|   " << board[1] << "   |   " << board[2] << "   |   " << board[3] << "   |" << endl;

    cout << "\t|_______|_______|_______|" << endl;
    cout << "\t|       |       |       |" << endl;

    cout << "\t|   " << board[4] << "   |   " << board[5] << "   |   " << board[6] << "   |" << endl;

    cout << "\t|_______|_______|_______|" << endl;
    cout << "\t|       |       |       |" << endl;

    cout << "\t|   " << board[7] << "   |   " << board[8] << "   |   " << board[9] << "   |" << endl;

    cout << "\t|_______|_______|_______|" << endl;
}

//Main function
int main()
{
    int player=2, i, choice;
    char mark;

    do
    {
        display_board();
        player = (player == 1)?2:1;

        cout << "\n\n\tPlayer : " << player << endl;
        cout << "\tEnter the number : ";
        cin >> choice;

        mark = (player == 1) ? 'X' : 'O';

        if(choice == 1 && board[1] == '1') 
            board[1] = mark;

        else if(choice == 2 && board[2] == '2')
            board[2] = mark;

        else if(choice == 3 && board[3] == '3')
            board[3] = mark;

        else if(choice == 4 && board[4] == '4')
            board[4] = mark;

        else if(choice == 5 && board[5] == '5')
            board[5] = mark;

        else if(choice == 6 && board[6] == '6')
            board[6] = mark;

        else if(choice == 7 && board[7] == '7')
            board[7] = mark;

        else if(choice == 8 && board[8] == '8')
            board[8] = mark;

        else if(choice == 9 && board[9] == '9')
            board[9] = mark;
        else
        {
            cout << "\n\tINAVLID INPUT!\n";
            player-- ;
            cin.ignore();
            cin.get();
        }
        i = checkwin();

    }while(i == -1);

    display_board();

    if(i == 1)
    {
        cout << "\n\tCONGRATULATIONS! PLAYER " << player << " WINS!";
    }
    else
    {
        cout << "\n\tGAME DRAW!";
    }
    cin.ignore();
    cin.get();
    return 0;
} 
