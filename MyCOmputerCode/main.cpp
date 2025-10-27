#include <iostream>
#include <string>
#include <cstdLib>

using namespace std;

enum enRandomNumberType{
    SmallLetter=1,
    CapitalLetter,
    SpecialCharacter,
    Digit
};
int RandomNumber(int from, int to)
{
    // rand -> from 0 to max
    return rand() % (to - from + 1) + from;
}

char GetRandomCharacter(enRandomNumberType charType){
    switch (charType)
    {
    case enRandomNumberType::SmallLetter:
        return RandomNumber(97,122);
        break;
    case enRandomNumberType::CapitalLetter:
        return RandomNumber(65,90);
        break;
    case enRandomNumberType::SpecialCharacter:
        return RandomNumber(33,47);
        break;
    case enRandomNumberType::Digit:
        return RandomNumber(48,57);
        break;
    
    default:
        break;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    cout << GetRandomCharacter(enRandomNumberType::SmallLetter) << endl;
    cout << GetRandomCharacter(enRandomNumberType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enRandomNumberType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enRandomNumberType::Digit) << endl;
 
}
