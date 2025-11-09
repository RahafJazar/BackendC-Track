#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// أنواع الخيارات الممكنة باللعبة (حجر - ورقة - مقص)
enum enGameChoices
{
    Stone = 1,
    Paper = 2,
    Scissor = 3
};
// أنواع النتائج الممكنة (فاز اللاعب - فاز الكمبيوتر - تعادل)
enum enWonChoices
{
    Player1 = 1,
    Computer = 2,
    NoWinner = 3
};

struct stGameInfo
{
    int Round;
    int Plalyer1WonTimes;
    int ComputerWonTimes;
    int DrawTimes;
};
// دالة لقراءة عدد موجب فقط من المستخدم
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
int ReadPlayerChoice() {
    int choice;
    do {
        cout << "Your Choice [1]: Stone, [2]: Paper, [3]: Scissor ? ";
        cin >> choice;
    } while (choice < 1 || choice > 3);
    return choice;
}
// دالة لتوليد رقم عشوائي ضمن مجال معين
int RandomNumber(int from, int to)
{
    // rand -> from 0 to max
    return rand() % (to - from + 1) + from;
}
// ترجمة الأرقام إلى أسماء الخيارات (مثلاً 1 = Stone)
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
        return "Unknown";
        break;
    }
}
// تحديد الفائز في كل جولة وزيادة عدد مرات الفوز أو التعادل
enWonChoices GetRoundWinner(int palyerChoice, int ComputerChoice, stGameInfo &gameInfoStruc)
{
    // الفائز هو الجهاز
    if ((palyerChoice == enGameChoices::Paper && ComputerChoice == enGameChoices::Scissor) ||
        (palyerChoice == enGameChoices::Stone && ComputerChoice == enGameChoices::Paper) ||
        (palyerChoice == enGameChoices::Scissor && ComputerChoice == enGameChoices::Stone))
    {
        gameInfoStruc.ComputerWonTimes++;
        return enWonChoices::Computer;
    }

    // الفائز هو اللاعب
    else if ((palyerChoice == enGameChoices::Scissor && ComputerChoice == enGameChoices::Paper) ||
             (palyerChoice == enGameChoices::Paper && ComputerChoice == enGameChoices::Stone) ||
             (palyerChoice == enGameChoices::Stone && ComputerChoice == enGameChoices::Scissor))
    {
        gameInfoStruc.Plalyer1WonTimes++;
        return enWonChoices::Player1;
    }

    // لا يوجد فائز
    else
    {
        gameInfoStruc.DrawTimes++;
        return enWonChoices::NoWinner;
    }
}
// تحويل نتيجة الفائز إلى نص لعرضها
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
        return "Unknown";
        break;
    }
}

// تغيير لون الشاشة حسب الفائز (ميزة شكلية)
void ColorTerminal(enWonChoices winner)
{
    if (winner == enWonChoices::Computer)
    {
        system("color 4F"); // أحمر عند فوز الكمبيوتر
    }
    else if (winner == enWonChoices::Player1)
    {
        system("color 2F"); // أخضر عند فوز اللاعب
    }
    else if (winner == enWonChoices::NoWinner)
    {
        system("color 6F"); // أصفر عند التعادل
    }
}

// دالة تشغيل جولات اللعبة
void StartGame(int &palyerChoice, int &computerChoice, stGameInfo &gameInfoStruc)
{
    gameInfoStruc.Round = ReadPositiveNumbers("\n\nHow Many Rounds 1 to 10 ? ");
    for (int i = 1; i <= gameInfoStruc.Round; i++)
    {
        cout << "\nRound [" << i << "] begins:" << endl;
        // قراءة اختيار اللاعب
        palyerChoice = ReadPlayerChoice();
        // اختيار عشوائي للكمبيوتر
        computerChoice = RandomNumber(1, 3);
        // تحديد من فاز في هذه الجولة
        cout << "_________________________Round [ " << i << "]______________________";
        cout << "\nPlayer1 choice : " << GetGameChoices(palyerChoice);
        cout << "\nComputer choice : " << GetGameChoices(computerChoice);
        enWonChoices winner = GetRoundWinner(palyerChoice, computerChoice, gameInfoStruc);
        cout << "\nRound   Winner : " << "[" << ShowWinnerInString(winner) << "] ";
        cout << "\n______________________________________________________________";

        ColorTerminal(winner);
    }
}
// تحديد من الفائز النهائي بناءً على عدد مرات الفوز
enWonChoices GetGameWinner(stGameInfo gameInfoStruc)
{
    if (gameInfoStruc.Plalyer1WonTimes > gameInfoStruc.ComputerWonTimes && gameInfoStruc.Plalyer1WonTimes >= gameInfoStruc.DrawTimes)
        return enWonChoices::Player1;
    else if (gameInfoStruc.ComputerWonTimes > gameInfoStruc.Plalyer1WonTimes && gameInfoStruc.ComputerWonTimes >= gameInfoStruc.DrawTimes)
        return enWonChoices::Computer;
    else
        return enWonChoices::NoWinner;
}
// إعادة ضبط القيم عند بدء لعبة جديدة
void ResetVariables(stGameInfo &gameInfoStruc)
{
    gameInfoStruc.Round = 0;
    gameInfoStruc.Plalyer1WonTimes = 0;
    gameInfoStruc.ComputerWonTimes = 0;
    gameInfoStruc.DrawTimes = 0;
}
// عرض النتائج النهائية للعبة مع خيار إعادة اللعب
void ShowResultOfGame(int &palyerChoice, int computerChoice, stGameInfo &gameInfoStruc)
{
    char playAgain = 'y';
    do
    {
        system("color 0F"); // اللون الافتراضي
        ResetVariables(gameInfoStruc);
        // تشغيل اللعبة
        StartGame(palyerChoice, computerChoice, gameInfoStruc);
        // تحديد الفائز النهائي
        string winner = ShowWinnerInString(GetGameWinner(gameInfoStruc));
        // عرض النتيجة النهائية
        cout << "\n\n\n\n\n\t-----------------------------------------------                ";
        cout << "\n\n\t\t+++G a m e  O v e r +++                            ";
        cout << "\n\n\t-----------------------------------------------                ";
        cout << "\n\t _______________ [Game Results]_________________                ";
        cout << "\n\n\tGame Rounds             : " << gameInfoStruc.Round << endl;
        cout << "\n\n\tPlayer1 Won times       : " << gameInfoStruc.Plalyer1WonTimes << endl;
        cout << "\n\n\tComputer won times      : " << gameInfoStruc.ComputerWonTimes << endl;
        cout << "\n\n\tDraw times              : " << gameInfoStruc.DrawTimes << endl;
        cout << "\n\n\tFinal Winner            : " << winner << endl;
        cout << "\n\n\t-----------------------------------------------                ";
        cout << "\n\n\tDo You want to play again ?Y/N?"; // سؤال المستخدم إن كان يريد إعادة اللعب
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');
}
int main()
{
    srand((unsigned)time(NULL));
    stGameInfo gameInfo;
    int playerchoice = 0, computerChoice = 0;
    ShowResultOfGame(playerchoice, computerChoice, gameInfo);
}
