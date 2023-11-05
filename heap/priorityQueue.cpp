
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

    int i=3;
    while (!pq.empty())
    {
        str[pq.top().first] = to_string(i);
        pq.pop();
        i++;
    }

    return str ;
}

int main()
{

    priority_queue<pair<int, int>, vector<pair<int, int>>, Comparater> pq;

    int arr[] = {34, 6, 566, 75};
    for (int i = 0; i < 4; i++)
    {
        pq.push(make_pair(i, arr[i]));
    }
    vector<string> str(pq.size());

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

    while (!pq.empty())
    {
        cout << pq.top().second << " ";
        pq.pop();
    }

    for (int i = 0; i < str.size(); i++)
        cout << str[i] << " ";
}