#include <iostream>

using namespace std;
void readNumbers(int &num1, int &num2, int &num3)
{
    cout << "Please Enter Num 1 : \n";
    cin >> num1;
    cout << "Please Enter Num 2 : \n";
    cin >> num2;
    cout << "Please Enter Num 3 : \n";
    cin >> num3;
}

int sumOf3Numbers(int &num1, int &num2, int &num3)
{
    int sum = num1 + num2 + num3;
    return sum;
}

float calculateAvg(int &num1, int &num2, int &num3)
{
    float Avg = (float)sumOf3Numbers(num1, num2, num3) / 3;
    return Avg;
}
void printResults(float Average)
{
    string result = "Average of numbers is : ";
    cout << result << Average;
}
int main()
{
    int num1, num2, num3;
    readNumbers(num1, num2, num3);
    printResults(calculateAvg(num1, num2, num3));
}
