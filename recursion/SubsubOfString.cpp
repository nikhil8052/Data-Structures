#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Print the subset of the string recursively
void printSubSet(string str, string osf)
{


    if( str.size()==0) {
        cout<<osf<<endl;
        return ;
    }

     char ch=str[0];
     string ros= str.substr(1);
     printSubSet(ros , osf+ch);
     printSubSet(ros,osf);


}

int main()
{

    string str;
    cin >> str;
    printSubSet(str, "");
    return 0;
}