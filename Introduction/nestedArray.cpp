#include <iostream>
using namespace std;

void showMultiplicationTable()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "i =" << i << "\n";

        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << "\n";
        }
        cout << "**********************\n";
    }
}
void printStars()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
// AA,AB,AC,AD,.............,ZZ
void printAllPairChars()
{
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            cout << char(i) << char(j) << "\n";
        }
    }
}
//********,*******,******,*****,****,***,**,* */
void printReversedNStars()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

// printReversed10
void printReversedN()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}
void printN()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}
void printChars()
{
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << char(j) << " ";
        }
        cout << "\n";
    }
}
void printRowNumbers()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j <= 10; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}
int main()
{
    //     showMultiplicationTable();
    // printStars();
    // printAllPairChars();
    printRowNumbers();
}