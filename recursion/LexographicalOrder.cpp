#include <iostream>

using namespace std;

// Lexicographic order meaning is the dictionary order 
void lexico(int n, int i) {
    if (i > n) return;
    cout << i << endl;
    for (int j = (i == 0) ? 1 : 0; j <= 9; j++) lexico(n, 10 * i + j);
}
int main() {
    int n;
    cout << " Entet the Number : ";
    cin >> n;
    lexico(n, 0);
    cout<<"Status : Done" ; 
    
}

/*
  PROBLEM :-  You are given n print the all valuese from 0 to n in lexicographical order.


Entet the Number : 50
0
1
10
11
12
13
14
15
16
17
18
19
2
20
21
22
23
24
25
26
27
28
29
3
30
31
32
33
34
35
36
37
38
39
4
40
41
42
43
44
45
46
47
48
49
5
50
6
7
8
9

*/