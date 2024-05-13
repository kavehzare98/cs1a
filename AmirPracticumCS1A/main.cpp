#include <iostream>
#include <string>
using namespace std;

struct BaseballPlayer
{
    string name;
    int home_runs;
    int hits;
};

const int SIZE = 3;

// Function prototypes
void getInput(BaseballPlayer [], int);
void outputData(BaseballPlayer [], int);
//int searchPlayer(string);
void changeStats(BaseballPlayer [], int);

// Start of main()
int main()
{
    BaseballPlayer playerArray[SIZE];
    int playerIndex;
    string playerName;

    getInput(playerArray, SIZE);

    outputData(playerArray, SIZE);

//    cout << "Please enter the name of a player you'd like to search:\t";
//    cin.ignore();
//    getline(cin, playerName);
//
//    cout << "troubleshoot:" << playerName << endl;
//
//    playerIndex = searchPlayer(playerName);
//
    playerIndex = 1;

    changeStats(playerArray, playerIndex);

    outputData(playerArray, SIZE);

}   // end of main()

void getInput(BaseballPlayer array[], int size)
{
    cout << "Please enter 10 player names and stats:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter name:\t";
        cin.ignore();
        getline(cin, array[i].name);

        cout << "Enter home runs:\t";
        cin >> array[i].home_runs;

        cout << "Enter number of hits:\t";
        cin >> array[i].hits;
    }
}
void outputData(BaseballPlayer array[], int size)
{
    cout << "Here are the player names and stats:\n\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Player name:\t" << array[i].name << endl;

        cout << "Number of home runs:\t" << array[i].home_runs << endl;

        cout << "Number of hits:\t" << array[i].hits << endl << endl;
    }
}

//int searchPlayer(string name)
//{
//    return 0;
//}

void changeStats(BaseballPlayer array[], int index)
{
    int choice;
    int data;
    cout << "What would you like to do?\n";
    cout << "1. Change number of home runs\n" <<
            "2. Change number of hits\n" <<
            "3. Do nothing" << endl;
    cin >> choice;

    cout << "What number would you like to change it to?\t";
    cin >> data;

    switch (choice)
    {
        case 1:
        {
            array[index].home_runs = data;
        }
            break;
        case 2:
        {
            array[index].hits = data;
        }
            break;
        case 3:
            break;

    }
}
