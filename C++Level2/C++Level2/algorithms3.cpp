#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
// create a random number from to
int RandomNumber(int From, int To)
{
    int randNumb = rand() % To + From;
    return randNumb;
}

void FillMatrixWithRandomNumbers(int matrix[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            matrix[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int matrix[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(4) << matrix[i][j];
        }
        cout << "\n";
    }
}
void PrintMatrix(int matrix[3][4], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(4) << matrix[i][j];
        }
        cout << "\n";
    }
}

int RowSum(int matrix[3][3], short RowNumber, short NumOfCols)
{
    int sum = 0;
    for (short i = 0; i <= NumOfCols - 1; i++)
    {
        sum += matrix[RowNumber][i];
    }
    return sum;
}

void PrintEachRowSum(int matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        cout << "\n Row " << i << " Sum = " << RowSum(matrix, i, Cols);
    }
}

void SumMatrixRowsInArry(int matrix[3][3], int sumArr[3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        sumArr[i] = RowSum(matrix, i, Cols);
    }
}

void PrintRowsSumArry(int sumArr[3], short Rows)
{
    cout << "\n The Following are the sum of  each row in matrix  : \n";
    for (int i = 0; i < Rows; i++)
    {
        cout << "\nRow " << i << " Sum = " << sumArr[i];
    }
    cout << endl;
}

int ColSum(int matrix[3][3], short RowNumbers, short NumOfCols)
{
    int sum = 0;
    for (int i = 0; i <= RowNumbers - 1; i++)
    {
        sum += matrix[i][NumOfCols];
    }
    return sum;
}
void PrintEachColumnSum(int matrix[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Cols; i++)
    {
        cout << "\n Col " << i << " sum = " << ColSum(matrix, Rows, i);
    }
}

void SumMatrixColumnsInArry(int matrix[3][3], int sumArr[3], short Rows, short Cols)
{
    for (int i = 0; i < Cols; i++)
    {
        sumArr[i] = ColSum(matrix, Rows, i);
    }
}

void PrintColumnsSumArry(int sumArr[3], short Cols)
{
    cout << "\n The Following are the sum of  each column in the matrix : \n";
    for (int i = 0; i < Cols; i++)
    {
        cout << "\n Col " << i << " Sum = " << sumArr[i];
    }
}

void FillMatrixWithOrderedNumbers(int matrix[3][3], short Rows, short Cols)
{
    int count = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            matrix[i][j] = ++count;
        }
    }
}
void TransposeMatrix(int matrix[3][3], int transposeMatrix[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
}

void FillMatrixWithRandomNumbers1To10(int matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            matrix[i][j] = RandomNumber(1, 10);
        }
    }
}

void MultuplyMatrix(int matrix1[3][3], int matrix2[3][3], int multipliedMatrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            multipliedMatrix[i][j] = (matrix1[i][j] * matrix2[i][j]);
        }
    }
}

void PrintMatrixMiddleRow(int matrix[3][3], short Rows, short Cols)
{
    short midRowIndex = Rows / 2;
    short col = 0;

    while (col < Cols)
    {
        /* code */
        printf("%0*d ", 2, matrix[midRowIndex][col]);
        col++;
    }
}
void PrintMatrixMiddleCol(int matrix[3][3], short Rows, short Cols)
{
    short midColIndex = Cols / 2;
    short row = 0;

    while (row < Rows)
    {
        /* code */
        printf("%0*d ", 2, matrix[row][midColIndex]);
        row++;
    }
}
int SumOfMatrix(int matrix[3][3], short Rows, short Cols)
{
    int sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            sum += matrix[i][j];
        }
    }

    return sum;
}

bool CheckMatrixEquality(int matrix1[3][3], int matrix2[3][3], short Rows, short Cols)
{

    return SumOfMatrix(matrix1, Rows, Cols) == SumOfMatrix(matrix2, Rows, Cols);
}

bool CheckMatrixTypicality(int matrix1[3][3], int matrix2[3][3], short Rows, short Cols)
{

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (matrix1[i][j] != matrix2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

bool CheckisMatrixIdentity(int matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            // check for diagonal elements
            if (i == j && matrix[i][j] != 1)
            {

                return false;
            }
            // check for rest elements
            else if (i != j && matrix[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool CheckisMatrixScalar(int matrix[3][3], short Rows, short Cols)
{
    int FirstDiagonalElement = matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            // check if diagonal  elements are equal
            if (i == j && matrix[i][j] != FirstDiagonalElement)
            {
                return false;
            }
            else if (i != j && matrix[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int ReadNumber(string message)
{
    int num;
    cout << message;
    cin >> num;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // تنظيف الـ buffer
    return num;
}

int CountGivenNumber(int matrix[3][3], short Rows, short Cols, int giveNumber)
{
    int countNumber = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (matrix[i][j] == giveNumber)
            {
                countNumber++;
            }
        }
    }
    return countNumber;
}

bool CheckIfMatrixIsSparce(int matrix[3][3], short Rows, short Cols)
{
    short matrixSize = Rows * Cols;

    return CountGivenNumber(matrix, Rows, Cols, 0) >= (matrixSize / 2);
}

bool CheckNumberExistInMatrix(int matrix[3][3], short Rows, short Cols, int givenNumber)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (matrix[i][j] == givenNumber)
            {
                return true;
            }
        }
    }
    return false;
}
bool CheckNumberExistIn1DMatrix(int matrix[1], short Size, int givenNumber)
{
    for (short j = 0; j < Size; j++)
    {
        if (matrix[j] == givenNumber)
        {
            return true;
        }
    }

    return false;
}

void PrintIntersectedNumberInMetrices(int matrix1[3][3], int matrix2[3][3], short Rows, short Cols)
{

    int number;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            number = matrix1[i][j];
            if (CheckNumberExistInMatrix(matrix2, Rows, Cols, number))
            {
                cout << setw(3) << matrix1[i][j] << "  ";
            }
        }
    }
}
int MinNumberInMatrix(int matrix[3][3], short Rows, short Cols)
{
    int minNum = matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (matrix[i][j] < minNum)
            {
                minNum = matrix[i][j];
            }
        }
    }
    return minNum;
}
int MaxNumberInMatrix(int matrix[3][3], short Rows, short Cols)
{
    int maxNum = matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (matrix[i][j] > maxNum)
            {
                maxNum = matrix[i][j];
            }
        }
    }
    return maxNum;
}
bool IsPalindromeMatrix(int matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols / 2; j++)
        {
            if (matrix[i][j] != matrix[i][Cols - 1 - j])
            {
                return false;
            }
        }
    }
    return true;
}

void PrintFibonnaciUsingLoop(int length)
{
    int count = 1;
    int prev2 = 0;
    int prev1 = 1;
    int sum = 0;
    cout << setw(3) << prev2 + prev1;
    while (count < length)
    {
        /* code */
        sum = prev2 + prev1;
        cout << setw(3) << prev2 + prev1;
        prev2 = prev1;
        prev1 = sum;
        count++;
    }
}
void PrintFibonnaciUsingRecursion(int length, int prev2, int prev1)
{
    if (length == 0)
    { // base case

        return;
    }
    cout << setw(3) << prev1;
    PrintFibonnaciUsingRecursion(length - 1, prev1, prev1 + prev2);
}

string ReadString(string message)
{
    string s1;
    cout << "\n"
         << message << endl;
    getline(cin, s1);
    return s1;
}
void PrintFirstLetterOfEachWord(string text)

{
    bool isFirstLetter = true;
    for (short i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && isFirstLetter)
        {
            cout << text[i] << endl;
        }
        isFirstLetter = (text[i] == ' ') ? true : false;
    }
}
void UpperFirstLetterOfEachWord(string &text)

{
    bool isFirstLetter = true;
    for (short i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && isFirstLetter)
        {
            text[i] = toupper(text[i]);
        }
        isFirstLetter = (text[i] == ' ') ? true : false;
    }
}
void LowerFirstLetterOfEachWord(string &text)

{
    bool isFirstLetter = true;
    for (short i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && isFirstLetter)
        {
            text[i] = tolower(text[i]);
        }
        isFirstLetter = (text[i] == ' ') ? true : false;
    }
}

void UpperTheString(string &text)
{
    for (short i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            text[i] = toupper(text[i]);
        }
    }
}
void LowerTheString(string &text)
{
    for (short i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            text[i] = tolower(text[i]);
        }
    }
}
char ReadCharacter(string message)
{

    char c1;
    cout << "\n";
    cout << message << endl;
    cin >> c1;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // تنظيف الـ buffer
    return c1;
}
char InvertTheCharacter(char &c1)
{
    return (isupper(c1) ? tolower(c1) : toupper(c1));
}

void InvertAllStringLetterCase(string &text)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = InvertTheCharacter(text[i]);
    }
}
enum enWhatToCount
{
    SmallLetters = 0,
    CapitalLetters = 1,
    All = 2
};

short CountLetters(string text, enWhatToCount whatToCount)
{
    short counter = 0;
    for (short i = 0; i < text.length(); i++)
    {
        if (whatToCount == enWhatToCount::CapitalLetters && isupper(text[i]))
        {
            counter++;
        }
        if (whatToCount == enWhatToCount::SmallLetters && islower(text[i]))
        {
            counter++;
        }
    }
    return counter;
}
short CountSmallLettersInTheString(string text)
{
    short smallLettersCount = 0;
    for (short i = 0; i < text.length(); i++)
    {
        if (islower(text[i]))
        {
            smallLettersCount++;
        }
    }
    return smallLettersCount;
}
short CountUpperLettersInTheString(string text)
{
    short upperLettersCount = 0;
    for (short i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
        {
            upperLettersCount++;
        }
    }
    return upperLettersCount;
}

short CountLetter(string text, char character, bool matchCase = true)
{
    short counter = 0;
    for (short i = 0; i < text.length(); i++)
    {

        if (tolower(text[i]) == tolower(character) && matchCase == false)
        {
            counter++;
        }
        else if (text[i] == character && matchCase)
        {
            counter++;
        }
    }
    return counter;
}

bool IsCharacterInTheString(string text, char character)
{
    for (short i = 0; i < text.length(); i++)
    {
        if (tolower(text[i]) == tolower(character))
        {
            return true;
        }
    }
    return false;
}

bool CheckIsVowels(char character)
{
    character = tolower(character);
    return (character == 'a' || character == 'u' || character == 'e' || character == 'o' || character == 'i');
}

short CountVowels(string text)
{
    short counter = 0;
    for (short i = 0; i < text.length(); i++)
    {
        if (CheckIsVowels(text[i]))
        {
            counter++;
        }
    }
    return counter;
}

void PrintVowels(string text)
{
    cout << "\nVowels in string are : ";
    for (short i = 0; i < text.length(); i++)
    {
        if (CheckIsVowels(text[i]))
        {
            cout << setw(3) << text[i];
        }
    }
    cout << endl;
}

void PrintEachWordInTheString(string text)
{

    bool isFirstLetter = true;
    for (short i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ' && isFirstLetter != true)
        {
            cout << text[i];
        }
        else if (text[i] != ' ' && isFirstLetter)
        {
            cout << endl;
            cout << text[i];
        }
        isFirstLetter = (text[i] == ' ') ? true : false;
    }
}
void PrintEachWordInTheStringUsingSubString(string text)
{
    string delim = " "; // الفاصل
    cout << "\nYour String Words are:\n";
    short pos = 0;
    string sWord;
    while ((pos = text.find(delim)) != std::string::npos)
    {
        sWord = text.substr(0, pos);
        if (sWord != "")
        {
            cout << sWord << endl;
        }
        text.erase(0, pos + delim.length());
    }
    if (text != "")
    {
        cout << text << endl;
    }
}

short CountEachWordInTheStringUsingSubString(string text)
{
    string delim = " "; // الفاصل
    short pos = 0;
    string sWord;
    short countOfWords = 0; // count each word in the string
    while ((pos = text.find(delim)) != std::string::npos)
    {
        sWord = text.substr(0, pos);
        if (sWord != "")
        {
            countOfWords++;
        }
        text.erase(0, pos + delim.length());
    }
    if (text != "")
    {
        countOfWords++;
    }
    return countOfWords;
}

vector<string> SplitString(string text, string delim)
{
    vector<string> vString;
    short pos = 0;
    string sword;
    while ((pos = text.find(delim)) != std::string::npos)
    {
        sword = text.substr(0, pos);
        if (sword != "")
        {
            vString.push_back(sword);
        }
        text.erase(0, pos + delim.length());
    }
    if (text != "")
    {
        vString.push_back(text);
    }
    return vString;
}
short GetVectorNumOfTokens(vector<string> vector_)
{
    return vector_.size();
}
void PrintVectorTokens(vector<string> vector_)
{
    for (string token : vector_)
    {
        cout << token << endl;
    }
}

string TrimLeft(string text)
{
    for (short i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            return text.substr(i);
        }
    }
}
string TrimRight(string text)
{
    for (short i = text.length() - 1; i >= 0; i--)
    {
        if (text[i] != ' ')
        {
            return text.substr(0, i + 1);
        }
    }
}
string Trim(string text)
{
    return (TrimRight(TrimLeft(text)));
}

string JoinString(vector<string> vector_, string delim)
{
    string joiningString = "";
    for (string &s : vector_)
    {
        joiningString = joiningString + s + delim;
    }

    return joiningString.substr(0, joiningString.length() - delim.length());
}
// overloading
string JoinString(string sArray[], short length, string delim)
{
    string joiningString = "";
    for (short i = 0; i < length; i++)
    {
        joiningString = joiningString + sArray[i] + delim;
    }

    return joiningString.substr(0, joiningString.length() - delim.length());
}

string ReverseWordsInTheString(string text)
{
    string sReversed = "";
    vector<string> vString = SplitString(text, " ");
    // declare iterator
    vector<string>::iterator iter = vString.end();
    while (iter != vString.begin())
    {
        iter--;
        sReversed += *iter + " ";

        /* code */
    }

    return TrimRight(sReversed);
}
int main()
{
    /*srand(time(0));
    int matrix[3][3], transposeMatrix[3][3];
    int sumArr[3];
    FillMatrixWithRandomNumbers(matrix, 3, 3);
    cout << "\n The Following is a 3x3 random matrix:\n";
    PrintMatrix(matrix, 3, 3);
    cout << "\n Sum Of Each Row is :\n";
    PrintEachRowSum(matrix, 3, 3);
    cout << "\n\n Sum  Of Each Row In One Array :\n";
    SumMatrixRowsInArry(matrix, sumArr, 3, 3);
    PrintRowsSumArry(sumArr, 3);
    cout << "\n Sum Of Each Column is :\n";
    PrintEachColumnSum(matrix, 3, 3);
    cout << "\n\n Sum  Of Each Col In One Array :\n";
    SumMatrixColumnsInArry(matrix, sumArr, 3, 3);
    PrintColumnsSumArry(sumArr, 3);
    cout << "\n The Following  is 3x3 Ordered Matrix : \n";
    FillMatrixWithOrderedNumbers(matrix, 3, 3);
    PrintMatrix(matrix, 3, 3);
    cout << "\nThe following is the 3x3 Transpose ordered Matrix :\n";
    TransposeMatrix(matrix, transposeMatrix, 3, 3);
    PrintMatrix(transposeMatrix, 3, 3);

    cout << "\nThe Following multiplying two matixes :\n";
    int matrix1[3][3], matrix2[3][3], matrixResult[3][3];
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    cout << "\nMatrix2:\n";
    FillMatrixWithRandomNumbers1To10(matrix2, 3, 3);
    PrintMatrix(matrix2, 3, 3);
    cout << "\nResult:\n";
    MultuplyMatrix(matrix1, matrix2, matrixResult, 3, 3);
    PrintMatrix(matrixResult, 3, 3);

    cout << "\nThe Following middle row and column of the  matrix :\n";
    cout << "\nMatrix1: \n";
    PrintMatrix(matrix1, 3, 3);
    cout << "\nMiddle Row Of Matrix1:\n";
    PrintMatrixMiddleRow(matrix1, 3, 3);
    cout << "\nMiddle col Of Matrix1:\n";
    PrintMatrixMiddleCol(matrix1, 3, 3);

    cout << "\nThe Following  Sum Of Matrix :\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    cout << "\nSum of Matrix1 is : \n";
    SumOfMatrix(matrix1, 3, 3);

    cout << "\nThe Following checking equality of the  matrix :\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    cout << "\nMatrix2:\n";
    FillMatrixWithRandomNumbers1To10(matrix2, 3, 3);
    PrintMatrix(matrix2, 3, 3);
    if (CheckMatrixEquality(matrix1, matrix2, 3, 3))
    {
        cout << "\nYES. Both Matrices are equal\n";
    }
    else
    {
        cout << "\nNO. Matrices are NOT equal\n";
    }

    cout << "\nThe Following checking Typically of the  matrix :\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    cout << "\nMatrix2:\n";
    FillMatrixWithRandomNumbers1To10(matrix2, 3, 3);
    PrintMatrix(matrix2, 3, 3);
    if (CheckMatrixTypicality(matrix1, matrix2, 3, 3))
    {
        cout << "\nYES. Both Matrices are typical\n";
    }
    else
    {
        cout << "\nNO. Matrices are NOT typical\n";
    }

    cout << "\nThe Following checking  if matrix  is identity :\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    if (CheckisMatrixIdentity(matrix1, 3, 3))
    {
        cout << "\nYES.  Matrix is identity \n";
    }
    else
    {
        cout << "\nNO. Matrix is not identity \n";
    }

    cout << "\nThe Following checking  if matrix  is scalar :\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    if (CheckisMatrixScalar(matrix1, 3, 3))
    {
        cout << "\nYES.  Matrix is scalar \n";
    }
    else
    {
        cout << "\nNO. Matrix is not scalar \n";
    }

    cout << "\nThe Following count given number in matrix  :\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    int givenNumber = ReadNumber("Enter the number to count in matrix?");
    cout << "Number " << givenNumber << " count in matrix is " << CountGivenNumber(matrix1, 3, 3, givenNumber) << endl;

    cout << "\nThe Following check if  matrix is  sparce  :\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    if (CheckIfMatrixIsSparce(matrix1, 3, 3))
    {
        cout << "\nYES.  Matrix is sparce \n";
    }
    else
    {
        cout << "\nNO. Matrix is not sparce \n";
    }

    cout << "\nThe Following check if  number exist in matrix  :\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    givenNumber = ReadNumber("Enter the number to check in matrix?");
    if (CheckNumberExistInMatrix(matrix1, 3, 3, givenNumber))
    {
        cout << "\nYES.   it's there  \n";
    }
    else
    {
        cout << "\nNO.  It's Not there \n";
    }

    cout << "\nThe Following print intersected numbers in matrices  :\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    cout << "\nMatrix2:\n";
    FillMatrixWithRandomNumbers1To10(matrix2, 3, 3);
    PrintMatrix(matrix2, 3, 3);
    PrintIntersectedNumberInMetrices(matrix1, matrix2, 3, 3);

    cout << "\nThe Following print Min and Max Number in the matrix:\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    cout << "\nMinimum number is : " << MinNumberInMatrix(matrix1, 3, 3) << endl;
    cout << "\nMax number is : " << MaxNumberInMatrix(matrix1, 3, 3) << endl;

    cout << "\nThe Following  check if matrix is palindrome :\n";
    cout << "\nMatrix1: \n";
    FillMatrixWithRandomNumbers1To10(matrix1, 3, 3);
    PrintMatrix(matrix1, 3, 3);
    if (IsPalindromeMatrix(matrix1, 3, 3))
    {
        cout << "\nYES.   Matrix is  palindrome  \n";
    }
    else
    {
        cout << "\nNO. no matrix is NOT palindrome\n";
    }

    cout << "\nThe Following  is Fibonacci series using loop   :\n";
    PrintFibonnaciUsingLoop(10);

    cout << "\nThe Following  is Fibonacci series using recursion   :\n";
    PrintFibonnaciUsingRecursion(10, 0, 1);

    cout << "\nThe Following   First Letter Of Each Word  :\n";
    string text = ReadString("Enter a text ");
    PrintFirstLetterOfEachWord(text);

    cout << "\nThe Following   upper  Letter Of Each Word  :\n";
    UpperFirstLetterOfEachWord(text);
    PrintFirstLetterOfEachWord(text);

    cout << "\nThe Following   lower  Letter Of Each Word  :\n";
    LowerFirstLetterOfEachWord(text);
    PrintFirstLetterOfEachWord(text);

    cout << "\nThe Following  Upper/lower the string  :\n";
    cout << "\nString after upper :\n";
    UpperTheString(text);
    cout << text << endl;
    cout << "\nString after lower :\n";
    LowerTheString(text);
    cout << text << endl;

    cout << "\nThe Following  Invert the Character  :\n";
    char c = ReadCharacter("Please Enter a character :");
    cout << "\nchar after inverting case :\n";
    cout << InvertTheCharacter(c) << endl;

    cout << "\nThe Following  Invert letter case  :\n";
    string s1 = ReadString("Enter a string text : ");
    InvertAllStringLetterCase(s1);
    cout << "\nString after Inverting all letter case:\n";
    cout << s1 << endl;

    cout << "\nThe Following :  Count Small/Capital letters  :\n";
    string s2 = ReadString("Enter a string text : ");
    cout << "\nString Length = " << s2.length() << endl;
    cout << "\nCapital Letters Coumt = " << CountUpperLettersInTheString(s2) << endl;
    cout << "\nSmall Ltters Count = " << CountSmallLettersInTheString(s2) << endl;

    cout << "\nThe Following :  Count Small/Capital letters   using enum :\n";
    string s3 = ReadString("Enter a string text : ");
    cout << "\nString Length = " << s3.length() << endl;
    cout << "\nCapital Letters Coumt = " << CountLetters(s3, enWhatToCount::CapitalLetters) << endl;
    cout << "\nSmall Ltters Count = " << CountLetters(s3, enWhatToCount::SmallLetters) << endl;

    cout << "\nThe Following :  Count specific letter in string   using enum :\n";
    string s4 = ReadString("Enter a string text : ");
    cout << "\nString Length = " << s4.length() << endl;
    char ch1 = ReadCharacter("Please Enter a character :");
    cout << "\nLetter '" << ch1 << "' count = " << CountLetter(s4, ch1) << endl;
    cout << "\nLetter '" << ch1 << "' Or '" << InvertTheCharacter(ch1) << "' Count = " << CountLetter(s4, ch1, false) << endl;

    cout << "\nThe Following  check if the character is a vowle:\n";
    char ch2 = ReadCharacter("Please Enter a character :");
    bool isVowel = CheckIsVowels(ch2);
    if (isVowel)
    {
        cout << "\nYES, Letter \'" << ch2 << "\' is vowel\n";
    }
    else
    {
        cout << "\nNO, Letter \'" << ch2 << "\' is not a vowel\n";
    }

    cout << "\nThe Following  Count Vowels in the string : \n";
    string s5 = ReadString("Enter a string text : ");
    cout << "\nNumber Of  Vowels is : " << CountVowels(s5) << endl;

    cout << "\nThe Following  Print Vowels in the string : \n";
    string s6 = ReadString("Enter a string text : ");
    PrintVowels(s6);

    cout << "\nThe Following  Print Each word in the string  : \n";
    string s7 = ReadString("Enter a string text : ");
    PrintEachWordInTheString(s7);


    cout << "\nThe Following  Print Each word in the string using subtring  : \n";
    string s8 = ReadString("Enter a string text : ");
    PrintEachWordInTheStringUsingSubString(s8);

    cout << "\nThe Following  Count Each word in the string using subtring  : \n";
    string s9 = ReadString("Enter a string text : ");
    cout << "\nThe number of words in  the string : "<<CountEachWordInTheStringUsingSubString(s9) << endl;


    cout << "\nThe Following  split each  word in the string then add it to your vector  : \n";
    string s10 = ReadString("Enter a string text : ");
    vector <string> vec = SplitString(s10, " ");
    cout << "Tokens = " << GetVectorNumOfTokens(vec) << endl;
    PrintVectorTokens(vec);


    cout << "\nThe Following Trim Left ,Right , trim  the string   : \n";
    string s11 = ReadString("Enter a string text : ");
    cout << "\nTrimLeft  = " << TrimLeft(s11) << endl;
    cout << "\nTrimRight = " << TrimRight(s11) <<  endl;
    cout << "\nTrim      = " << Trim(s11) <<  endl;*/

    /*cout << "\nThe Following Join  string  vector : \n";
    vector<string> vec1 = { "Mohammed","@Programming" ,"Devices" };
    cout << JoinString(vec1, ",")<<endl;

    cout << "\nThe Following Join  string Array  : \n";
    string arr1[] = {"Mohammed","@Programming" ,"Devices"};
    cout << JoinString(arr1,3,",") << endl;*/

    cout << "\nThe Following  Print Reversed word in the string : \n";
    string s12 = ReadString("Enter a string text : ");
    cout << "\n\nString after reversing word : \n";
    cout << ReverseWordsInTheString(s12) << endl;

    system("pause>0");
}
