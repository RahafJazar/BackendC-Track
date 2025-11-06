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

enWonChoices GetRoundWinner(int palyerChoice, int ComputerChoice, int &Plalyer1WonTimes, int &ComputerWonTimes, int &DrawTimes)
{
    // الفائز هو الجهاز
    if ((palyerChoice == enGameChoices::Paper && ComputerChoice == enGameChoices::Scissor) ||
        (palyerChoice == enGameChoices::Stone && ComputerChoice == enGameChoices::Paper) ||
        (palyerChoice == enGameChoices::Scissor && ComputerChoice == enGameChoices::Stone))
    {
        ComputerWonTimes++;
        return enWonChoices::Computer;
    }

    // الفائز هو اللاعب
    else if ((palyerChoice == enGameChoices::Scissor && ComputerChoice == enGameChoices::Paper) ||
             (palyerChoice == enGameChoices::Paper && ComputerChoice == enGameChoices::Stone) ||
             (palyerChoice == enGameChoices::Stone && ComputerChoice == enGameChoices::Scissor))
    {
        Plalyer1WonTimes++;
        return enWonChoices::Player1;
    }

    // لا يوجد فائز
    else
    {
        DrawTimes++;
        return enWonChoices::NoWinner;
    }
}

string ShowWinnerInString(enWonChoices winner)
{
    switch (winner)
    {
    case enWonChoices::Player1:
        return "Player1";
        break;
    case enWonChoices::Computer:
        return "Computer";
        break;
    case enWonChoices::NoWinner:
        return "No Winner";
        break;

    default:
        break;
    }
}
void ColorTerminal(enWonChoices winner)
{
    if (winner == enWonChoices::Computer)
    {
        system("color 4F");
    }
    else if (winner == enWonChoices::Player1)
    {
        system("color 2F");
    }
    else if (winner == enWonChoices::NoWinner)
    {
        system("color 6F");
    }
}
void StartGame(int &round, int &palyerChoice, int &computerChoice, int &Plalyer1WonTimes, int &ComputerWonTimes, int &DrawTimes)
{
    round = ReadPositiveNumbers("\n\nHow Many Rounds 1 to 10 ? ");
    for (int i = 1; i <= round; i++)
    {
        cout << "\nRound [" << i << "] begins:" << endl;
        palyerChoice = ReadPositiveNumbers("Your Choice: [1]:Stone ,[2]:Paper ,[3]:Scissor ?");
        int computerChoice = RandomNumber(1, 3);
        cout << "_________________________Round [ " << i << "]______________________";
        cout << "\nPlayer1 choice : " << GetGameChoices(palyerChoice);
        cout << "\nComputer choice : " << GetGameChoices(computerChoice);
        enWonChoices winner = GetRoundWinner(palyerChoice, computerChoice, Plalyer1WonTimes, ComputerWonTimes, DrawTimes);
        cout << "\nRound   Winner : " << "[" << ShowWinnerInString(winner) << "] ";
        cout << "\n______________________________________________________________";

        ColorTerminal(winner);
    }
}

enWonChoices GetGameWinner(int Plalyer1WonTimes, int ComputerWonTimes, int DrawTimes)
{
    if (Plalyer1WonTimes > ComputerWonTimes && Plalyer1WonTimes >= DrawTimes)
        return enWonChoices::Player1;
    else if (ComputerWonTimes > Plalyer1WonTimes && ComputerWonTimes >= DrawTimes)
        return enWonChoices::Computer;
    else if (DrawTimes > Plalyer1WonTimes && DrawTimes > Computer)
        return enWonChoices::NoWinner;
}
void ShowResultOfGame(int &round, int &palyerChoice, int computerChoice, int &Plalyer1WonTimes, int &ComputerWonTimes, int &DrawTimes)
{
    char playAgain = 'y';
    do
    {
        system("color 0F");
        StartGame(round, palyerChoice, computerChoice, Plalyer1WonTimes, ComputerWonTimes, DrawTimes);
        string winner = ShowWinnerInString(GetGameWinner(Plalyer1WonTimes, ComputerWonTimes, DrawTimes));
        cout << "\n\n\n\n\n\t-----------------------------------------------                ";
        cout << "\n\n\t\t+++G a m e  O v e r +++                            ";
        cout << "\n\n\t-----------------------------------------------                ";
        cout << "\n\t _______________ [Game Results]_________________                ";
        cout << "\n\n\tGame Rounds             : " << round << endl;
        cout << "\n\n\tPlayer1 Won times       : " << Plalyer1WonTimes << endl;
        cout << "\n\n\tComputer won times      : " << ComputerWonTimes << endl;
        cout << "\n\n\tDraw times              : " << DrawTimes << endl;
        cout << "\n\n\tFinal Winner            : " << winner << endl;
        cout << "\n\n\t-----------------------------------------------                ";
        cout << "\n\n\tDo You want to play again ?Y/N?";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');
}
int main()
{
    int round = 0, playerchoice = 0, computerChoice = 0, Plalyer1WonTimes = 0, ComputerWonTimes = 0, DrawTimes = 0;
    ShowResultOfGame(round, playerchoice, computerChoice, Plalyer1WonTimes, ComputerWonTimes, DrawTimes);
}
