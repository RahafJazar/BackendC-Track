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
    int correctAnswer;
    int numOfCorrectAnswers;
    int numOfWrongAnswers;
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
        return "Right Answer :-)";
    }
    else
    {
        system("color 4f");
        return "Wrong Answer:-( \nThe right answer is : " + to_string(correctAnswer);
    }
}
bool RoundAnswersStatus(stGameInfo gameInfo)
{
    return gameInfo.numOfCorrectAnswers >= gameInfo.numOfWrongAnswers;
}
string RoundAnswerStatusInString(bool roundAnswerStatus)
{
    return (roundAnswerStatus) ? "PASS" : "FAIL";
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

void ShowQuestionShape(int questionNumber, int numOfQuestions, stGameInfo gameInfo, enOperationsTypes OP)
{
    cout << "\nQuestion [" << questionNumber << "/" << numOfQuestions << "]" << endl;
    cout << "\n\n";
    cout << gameInfo.num1 << endl;
    cout << gameInfo.num2 << " " << printOperationSign(OP) << endl;
    cout << "\n________________________" << endl;
}

void StartGame(stGameInfo &gameInfo)
{
    int numOfQuestions = ReadPositiveNumbers("How Many Questions do you want to answer ?");
    int questionLevel = ReadPositiveNumbers("Enter Questions Level [1] Easy. ,[2] Med. ,[3] Hard. ,[4] Mix ?");
    int operationType = ReadPositiveNumbers("Enter Operation Type  [1] Add. ,[2] Sub. ,[3] Mul. ,[4] Div. [5] Mix ?");

    for (int i = 1; i <= numOfQuestions; i++)
    {
        gameInfo.num1 = ReturnRandomNumbersDependOnLevels(GetQuestionsLevel(questionLevel));
        gameInfo.num2 = ReturnRandomNumbersDependOnLevels(GetQuestionsLevel(questionLevel));
        ShowQuestionShape(i, numOfQuestions, gameInfo, GetOperationType(operationType));
        cin >> gameInfo.myAnswer;
        gameInfo.correctAnswer = CalculateOperations(gameInfo, GetOperationType(operationType));
        bool answerStatus = AnswerStatus(gameInfo.correctAnswer, gameInfo.myAnswer);
        cout << ShowAnswerStatus(answerStatus, gameInfo.correctAnswer) << endl;
        CalculatenumOfCorrectAndWrongAnswersInRound(answerStatus, gameInfo);
        cout << "\n\n\n\n";
    }
}
int main()
{
    srand((unsigned)time(NULL));
    stGameInfo gameInfo;
    StartGame(gameInfo);
}
