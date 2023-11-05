
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Comparater
{
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        return p1.second < p2.second;
    }
};

vector<string> findRelativeRanks(vector<int> &score)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, Comparater> pq;
    vector<string> str(score.size());

    for (int i = 0; i < score.size(); i++)
    {
        pq.push(make_pair(i, score[i]));
    }

    if (!pq.empty())
    {

        str[pq.top().first] = "GOld";
        pq.pop();
    }

    if (!pq.empty())
    {

        str[pq.top().first] = "Seoncd";
        pq.pop();
    }

    if (!pq.empty())
    {

        str[pq.top().first] = "Third";
        pq.pop();
    }

    int i = 3;
    while (!pq.empty())
    {
        str[pq.top().first] = to_string(i);
        pq.pop();
        i++;
    }

    return str;
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    vector<string> str;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    str = findRelativeRanks(arr);

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
}