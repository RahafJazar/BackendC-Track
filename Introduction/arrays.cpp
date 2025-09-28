#include <iostream>
using namespace std;

float averageGrades(float grades[])
{
    float sum = 0;
    for (int i = 0; i < sizeof(grades); i++)
    {
        /* code */
        sum += grades[i];
    }
    float avg =sum / sizeof(grades);
    return  avg;
}
int main()
{
    float grades[4];
    cout << "Enter Grade1 ?" << "\n";
    cin >> grades[0];
    cout << "Enter Grade 2 ? " << "\n";
    cin >> grades[1];
    cout << "Enter Grade 3  ? " << "\n";
    cin >> grades[2];
    cout << "***************************************" <<"\n";
    float avg = averageGrades(grades);
    cout << "The average of grades is " << avg;
}