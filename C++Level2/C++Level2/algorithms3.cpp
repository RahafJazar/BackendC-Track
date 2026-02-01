#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
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

int main()
{
    srand(time(0));
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

    system("pause>0");
}
