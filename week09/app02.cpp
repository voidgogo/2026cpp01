#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char lines[80];
    cout << "Input : ";
    cin.getline(lines, 80);  // abc xyz (엔터키가 구분자)
    //cin >> lines;  // abc xyz
    cout << endl;
    cout << "Output: " << endl;
    cout << lines << endl; // abc (스페이스바, 엔터키, 탭키는 모두 구분자)

    return 0;
}