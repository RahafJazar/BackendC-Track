#include <iostream>
#include <cmath>
using namespace std;
struct strTriangle
{
    /* data */
    float base;
    float height
};

strTriangle ReadInputs()
{
    strTriangle triangleInfo;
    cout << "Please enter triangle  base ? \n";
    cin >> triangleInfo.base;
    cout << "Please enter  triangle height? \n";
    cin >> triangleInfo.height;
    return triangleInfo;
}
float calculateTriangleArea(strTriangle triangleInfo)
{
    float rectangleArea =   rectangleInfo.rectangleSide * sqrt(pow(rectangleInfo.rectangleDiagonal, 2) - pow(rectangleInfo.rectangleSide, 2));
    return rectangleArea;
}
void printResult(float area)
{
    cout << "\n Rectangle area is :" << area;
}
int main()
{
    strRectangle strInfo = ReadInputs();
    printResult(calculateRectangleArea(strInfo));
    return 0;
}


 
