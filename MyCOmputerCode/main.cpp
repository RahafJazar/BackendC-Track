#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

enum enQuestionsLevels
{
    Easy = 1,
    Med = 2,
    Hard = 3,
    Mix = 4
};
enum enOperationsTypes
{
    Add = 1,
    Sub = 2,
    Mul = 3,
    Div = 4,
    Mix1 = 5

};
enum enResultStatus
{
    Pass = true,
    fail = false
};

struct stGameInfo
{
    int num1;
    int num2;
    int myAnswer;
    int numOfQuestions;
    int correctAnswer;
    int numOfCorrectAnswers;
    int numOfWrongAnswers;
    enQuestionsLevels questionLevel;
    enOperationsTypes optype;
};
void ResetGame(stGameInfo &gameInfo)
{
    gameInfo.num1 = 0;
    gameInfo.num2 = 0;
    gameInfo.myAnswer = 0;
    gameInfo.correctAnswer = 0;
    gameInfo.numOfCorrectAnswers = 0;
    gameInfo.numOfWrongAnswers = 0;
}
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
// دالة لتوليد رقم عشوائي ضمن مجال معين
int RandomNumber(int from, int to)
{
    // rand -> from 0 to max
    return rand() % (to - from + 1) + from;
}
enQuestionsLevels GetQuestionsLevel(int number)
{
    switch (number)
    {
    case enQuestionsLevels::Easy:
        return enQuestionsLevels::Easy;
        break;
    case enQuestionsLevels::Med:
        return enQuestionsLevels::Med;
        break;
    case enQuestionsLevels::Hard:
        return enQuestionsLevels::Hard;
        break;
    case enQuestionsLevels::Mix:
        return enQuestionsLevels::Mix;
        break;

    default:
        break;
    }
}
enOperationsTypes GetOperationType(int number)
{
    switch (number)
    {
    case enOperationsTypes::Add:
        return enOperationsTypes::Add;
        break;
    case enOperationsTypes::Sub:
        return enOperationsTypes::Sub;
        break;
    case enOperationsTypes::Mul:
        return enOperationsTypes::Mul;
        break;
    case enOperationsTypes::Div:
        return enOperationsTypes::Div;
        break;
    case enOperationsTypes::Mix1:
        return enOperationsTypes::Mix1;
        break;

    default:
        break;
    }
}
//
string returnOperationAsString(enOperationsTypes operationType)
{
    switch (operationType)
    {
    case enOperationsTypes::Add:
        return "Add";
        break;
    case enOperationsTypes::Sub:
        return "Sub";
        break;
    case enOperationsTypes::Mul:
        return "Mul";
        break;
    case enOperationsTypes::Div:
        return "Div";
        break;
    case enOperationsTypes::Mix1:
        return "Mix";
        break;
    default:
        break;
    }
}
string printOperationSign(enOperationsTypes operationType)
{
    switch (operationType)
    {
    case enOperationsTypes::Add:
        return "+";
        break;
    case enOperationsTypes::Sub:
        return "-";
        break;
    case enOperationsTypes::Mul:
        return "*";
        break;
    case enOperationsTypes::Div:
        return "/";
        break;
    default:
        break;
    }
}
string returnQuestionLevelAsString(enQuestionsLevels questionsLevel)
{
    switch (questionsLevel)
    {
    case enQuestionsLevels::Easy:
        return "Easy";
        break;
    case enQuestionsLevels::Med:
        return "Med";
        break;
    case enQuestionsLevels::Hard:
        return "Hard";
        break;
    case enQuestionsLevels::Mix:
        return "Mix";
        break;
    default:
        break;
    }
}
int CalculateOperations(stGameInfo gameInfo, enOperationsTypes operationType)
{

    switch (operationType)
    {
    case enOperationsTypes::Add:
        return gameInfo.num1 + gameInfo.num2;
        break;
    case enOperationsTypes::Sub:
        return gameInfo.num1 - gameInfo.num2;
        break;
    case enOperationsTypes::Mul:
        return gameInfo.num1 * gameInfo.num2;
        break;
    case enOperationsTypes::Div:
        return gameInfo.num1 / gameInfo.num2;
        break;
    default:
        return 0;
        break;
    }
}
int ReturnRandomNumbersDependOnLevels(enQuestionsLevels QuestionLevel)
{
    /*💡 ليش نخليها في if مش في switch؟
  هي مجرد طلب لتوليد عملية عشوائية. */
    if (QuestionLevel == enQuestionsLevels::Mix)
    {
        enQuestionsLevels randomLevel = (enQuestionsLevels)RandomNumber(1, 3);
        return ReturnRandomNumbersDependOnLevels(randomLevel); //   إعادة استدعاء بالمستوى الجديد
    }
    switch (QuestionLevel)
    {
    case enQuestionsLevels::Easy:
        return RandomNumber(1, 10);
        break;
    case enQuestionsLevels::Med:
        return RandomNumber(11, 99);
        break;
    case enQuestionsLevels::Hard:
        return RandomNumber(100, 999);
        break;
    default:
        return 0;
        break;
    }
}

bool AnswerStatus(int correctAnswer, int myAnswer)
{
    return correctAnswer == myAnswer;
}
string ShowAnswerStatus(bool answeStatus, int correctAnswer)
{
    if (answeStatus)
    {
        system("color 2f");
        return "\nRight Answer :-)\n";
    }
    else
    {
        system("color 4f");
        return "\nWrong Answer:-( \nThe right answer is : " + to_string(correctAnswer) + "\n";
    }
}
bool RoundAnswersStatus(stGameInfo gameInfo)
{
    return gameInfo.numOfCorrectAnswers >= gameInfo.numOfWrongAnswers;
}
string RoundAnswerStatusInString(bool roundAnswerStatus)
{
    return (roundAnswerStatus) ? "Final Result is PASS :-)" : "Final Result is FAIL :-(";
}

void CalculatenumOfCorrectAndWrongAnswersInRound(bool answerStatus, stGameInfo &gameInfo)
{
    if (answerStatus)
    {
        gameInfo.numOfCorrectAnswers++;
    }
    else
    {
        gameInfo.numOfWrongAnswers++;
    }
}

void ShowQuestionShape(int &questionNumber, stGameInfo gameInfo, enOperationsTypes OP)
{
    cout << "\nQuestion [" << questionNumber << "/" << gameInfo.numOfQuestions << "]" << endl;
    cout << "\n\n";
    cout << gameInfo.num1 << endl;
    cout << gameInfo.num2 << " " << printOperationSign(OP) << endl;
    cout << "\n________________________\n"
         << endl;
}

void StartGame(stGameInfo &gameInfo)
{
    gameInfo.numOfQuestions = ReadPositiveNumbers("How Many Questions do you want to answer ?");
    gameInfo.questionLevel = GetQuestionsLevel(ReadPositiveNumbers("Enter Questions Level [1] Easy. ,[2] Med. ,[3] Hard. ,[4] Mix ?"));
    gameInfo.optype = GetOperationType(ReadPositiveNumbers("Enter Operation Type  [1] Add. ,[2] Sub. ,[3] Mul. ,[4] Div. [5] Mix ?"));

    for (int i = 1; i <= gameInfo.numOfQuestions; i++)
    {
        // لو المستوى Mix، نختار مستوى واحد عشوائي لهذا السؤال فقط
        enQuestionsLevels currentLevel = gameInfo.questionLevel;
        if (gameInfo.questionLevel == enQuestionsLevels::Mix)
            currentLevel = (enQuestionsLevels)RandomNumber(1, 3);
        gameInfo.num1 = ReturnRandomNumbersDependOnLevels(currentLevel);
        gameInfo.num2 = ReturnRandomNumbersDependOnLevels(currentLevel);

        // ✅ لو كانت Mix في العمليات، نختار عملية عشوائية جديدة كل مرة
        enOperationsTypes currentOp = gameInfo.optype;
        if (gameInfo.optype == enOperationsTypes::Mix1)
            currentOp = (enOperationsTypes)RandomNumber(1, 4);

        ShowQuestionShape(i, gameInfo, currentOp);
        cin >> gameInfo.myAnswer;
        gameInfo.correctAnswer = CalculateOperations(gameInfo, gameInfo.optype);
        bool answerStatus = AnswerStatus(gameInfo.correctAnswer, gameInfo.myAnswer);
        cout << ShowAnswerStatus(answerStatus, gameInfo.correctAnswer) << endl;
        CalculatenumOfCorrectAndWrongAnswersInRound(answerStatus, gameInfo);
        cout << "\n\n\n\n";
    }
}

void ShowResultOfGame(stGameInfo &gameInfo)
{
    char playAgain = 'y';
    do
    {
        system("color 0F"); // اللون الافتراضي
        ResetGame(gameInfo);
        // تشغيل اللعبة
        StartGame(gameInfo);
        string finalResult = RoundAnswerStatusInString(RoundAnswersStatus(gameInfo));
        // عرض النتيجة النهائية
        cout << "\n\n-----------------------------------------------                ";
        cout << "\n\t" << finalResult;
        cout << "\n-------------------------------------------------                ";
        cout << "\n\t _______________ [Game Results]_________________                ";
        cout << "\n\tNumber Of Questions       : " << gameInfo.numOfQuestions << endl;
        cout << "\n\tQuestions Level           : " << returnQuestionLevelAsString(gameInfo.questionLevel) << endl;
        cout << "\n\tOperation Type            : " << returnOperationAsString(gameInfo.optype) << endl;
        cout << "\n\tNumber Of Right Answers   : " << gameInfo.numOfCorrectAnswers << endl;
        cout << "\n\tNumber Of Wrong Answers   : " << gameInfo.numOfWrongAnswers << endl;
        cout << "\n-------------------------------------------------                ";
        cout << "\n\n\tDo You want to play again ?Y/N?"; // سؤال المستخدم إن كان يريد إعادة اللعب
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');
}

int main()
{
    srand((unsigned)time(NULL));
    stGameInfo gameInfo;
    ShowResultOfGame(gameInfo);
}
