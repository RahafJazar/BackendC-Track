#include <iostream>
#include <string>
#include <cstdLib>
#include <cmath>

using namespace std;

enum enGameChoices
{
    Stone = 1,
    Paper = 2,
    Scissor = 3
};
enum enWonChoices
{
    Player1 = 1,
    Computer = 2,
    NoWinner = 3
};

int ReadPositiveNumbers(string message)
{
    int num;
    do
    {
        cout << message << endl;
        cin >> num;

    } while (num <= 0);
    return num;
}
int RandomNumber(int from, int to)
{
    // rand -> from 0 to max
    return rand() % (to - from + 1) + from;
}

string GetGameChoices(int number)
{
    switch (number)
    {
    case enGameChoices::Stone:
        return "Stone";
        break;
    case enGameChoices::Paper:
        return "Paper";
        break;
    case enGameChoices::Scissor:
        return "Scissor";
        break;

    default:
        break;
    }
}

enWonChoices GetRoundWinner(int palyerChoice, int ComputerChoice)
{
    // الفائز هو الجهاز
    if ((palyerChoice == enGameChoices::Paper && ComputerChoice == enGameChoices::Scissor) ||
        (palyerChoice == enGameChoices::Stone && ComputerChoice == enGameChoices::Paper) ||
        (palyerChoice == enGameChoices::Scissor && ComputerChoice == enGameChoices::Stone))
        return enWonChoices::Computer;
    // الفائز هو اللاعب
    else if ((palyerChoice == enGameChoices::Scissor && ComputerChoice == enGameChoices::Paper) ||
             (palyerChoice == enGameChoices::Paper && ComputerChoice == enGameChoices::Stone) ||
             (palyerChoice == enGameChoices::Stone && ComputerChoice == enGameChoices::Scissor))
        return enWonChoices::Player1;
    // لا يوجد فائز
    else
        return enWonChoices::NoWinner;
    {
    }
}

string ShowWinnerInString(enWonChoices winner)
{
    switch (winner)
    {
    case enWonChoices::Player1 return "Player1" break;
        case enWonChoices::Player1 return "Computer" break;
        case enWonChoices::Player1 return "No Winner" break;

        default:
        break;
    }
}
void ColorTerminal(enWonChoices winner)
{
    if (winner == enWonChoices::Computer)
    {
        system("color 22");
    }
    else if (winner == enWonChoices::Player1)
    {
        system("color 44");
    }
    else if (winner == enWonChoices::NoWinner)
    {
        system("color 44");
    }
}
void StartGame(int &round, int &palyerChoice, int &computerChoice)
{
    round = ReadPositiveNumbers("How Many Rounds 1 to 10 ? ");
    for (int i = 1; i <= round; i++)
    {
        cout << "\nRound [" << i << "] begins:" << endl;
        palyerChoice = ReadPositiveNumbers("Your Choice: [1]:Stone ,[2]:Paper ,[3]:Scissor ?");
        int computerChoice = RandomNumber(1, 3);
        cout << "\nPlayer1 choice : " << GetGameChoices(palyerChoice);
        cout << "\nComputer choice : " << GetGameChoices(computerChoice);
        enWonChoices winner = GetRoundWinner(palyerChoice, computerChoice);
        cout << "\nRoundWinner : " << "[" << ShowWinnerInString(GetRoundWinner(winner));
        ColorTerminal(winner)
    }
}

void ShowResultOfGame()
{
}
int main()
{
}
