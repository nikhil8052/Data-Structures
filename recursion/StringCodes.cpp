#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printCodes(string str, string osf, char *mapping)
{

    if (str.size() == 0)
    {
        cout << osf << endl;
        return;
    }

    int firstNum = str[0] - '0';
    if (str.size() >= 2)
    {
        int secondNum = stoi(str.substr(0, 2));
        if (secondNum > 26)
            return;
        printCodes(str.substr(2), osf + mapping[secondNum], mapping);
        printCodes(str.substr(1), osf + mapping[firstNum], mapping);

    }
    else
    {
        printCodes(str.substr(1), osf + mapping[firstNum], mapping);
    }
}
int main()
{

    string str;
    cin >> str;
    char mapping[] = {'#', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    printCodes(str, "", mapping);
}