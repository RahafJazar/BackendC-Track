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

void PrintMatrix(int matrix[4][3], short Rows, short Cols)
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

int RowSum(int matrix[3][3], short RowNumber, short NumOfCols) {
    int sum = 0;
    for (short i = 0; i <= NumOfCols - 1; i++) {
        sum += matrix[RowNumber][i];
    }
    return sum;
}
 
void PrintEachRowSum(int matrix[3][3], short Rows, short Cols) {
    for (short i = 0; i < Rows; i++) {
            cout << "\n Row " << i << " Sum = " << RowSum(matrix, i, Cols);
    }
}

void SumMatrixRowsInArry(int matrix[3][3], int sumArr[3] ,short Rows, short Cols) {
     
    for (short i = 0; i < Rows; i++) {
        sumArr[i]= RowSum(matrix, i, Cols);
    }
}

void PrintRowsSumArry(int sumArr[3], short Rows) {
    cout << "\n The Following are the sum of  each row in matrix  : \n";
    for (int i = 0; i < Rows; i++) {
        cout << "\nRow " << i << " Sum = " << sumArr[i] ;
   }
    cout << endl;
}

int ColSum(int matrix[3][3], short RowNumbers, short NumOfCols) {
    int sum = 0;
    for (int i = 0; i <= RowNumbers - 1; i++) {
        sum += matrix[i][NumOfCols];
    }
    return sum;
}
void PrintEachColumnSum(int matrix[3][3], short Rows, short Cols) {
    for (int i = 0; i < Cols; i++) {
        cout << "\n Col " << i << " sum = " << ColSum(matrix, Rows, i);
    }
}

void SumMatrixColumnsInArry(int matrix[3][3], int sumArr[3], short Rows, short Cols) {
    for (int i = 0; i < Cols; i++) {
        sumArr[i] = ColSum(matrix, Rows, i);
    }
}

void PrintColumnsSumArry(int sumArr[3], short Cols) {
    cout << "\n The Following are the sum of  each column in the matrix : \n";
    for (int i = 0; i < Cols; i++) {
        cout << "\n Col " << i << " Sum = " << sumArr[i]   ;

    }
}

void FillMatrixWithOrderedNumbers(int matrix[4][3], short Rows, short Cols) {
    int  count = 0;
    for (short i = 0; i < Rows; i++) {
        for (short j = 0; j < Cols; j++) {
            matrix[i][j] = ++count;
        }
    }
}
void TransposeMatrix(int matrix[4][3], int transposeMatrix[4][3], short Rows, short Cols) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            transposeMatrix[i][j] = matrix[j][i];
        }
    }
}
int main()
{
    srand(time(0));
    int matrix[3][3],transposeMatrix[3][3];
    int sumArr[3];
    FillMatrixWithRandomNumbers(matrix, 3, 3);
    cout << "\n The Following is a 3x3 random matrix:\n";
    PrintMatrix(matrix, 3, 3);
    cout << "\n Sum Of Each Row is :\n";
    PrintEachRowSum(matrix, 3, 3);
    cout << "\n\n Sum  Of Each Row In One Array :\n";
    SumMatrixRowsInArry(matrix, sumArr, 3, 3);
    PrintRowsSumArry(sumArr,3);
    cout << "\n Sum Of Each Column is :\n";
    PrintEachColumnSum(matrix, 3, 3);
    cout << "\n\n Sum  Of Each Col In One Array :\n";
    SumMatrixColumnsInArry(matrix, sumArr, 3, 3);
    PrintColumnsSumArry(sumArr, 3);
    cout << "\n The Following  is 3x3 Ordered Matrix : \n";
    FillMatrixWithOrderedNumbers(matrix, 4, 3);
    PrintMatrix(matrix, 4, 3);
    cout << "\nThe following is the 3x3 Transpose ordered Matrix :\n";
    TransposeMatrix(matrix, transposeMatrix, 4, 3);
    PrintMatrix(transposeMatrix, 4, 3);
    system("pause>0");

}

 