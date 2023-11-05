
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Create the heap using the downheapify
void downHeapify(vector<int> &heap, int idx)
{

    int l = idx * 2 + 1;
    int r = idx * 2 + 2;
    int largest = idx;

    if (l >= heap.size() || r >= heap.size())
    {
        return;
    }
    else
    {
        if (heap[largest] < heap[l])
        {
            largest = l;
        }
        if (heap[largest] < heap[r])
        {
            largest = r;
        }

        if (largest != idx)
        {
            swap(heap[largest], heap[idx]);
        }

        downHeapify(heap, idx + 1);
    }
}

int main()
{

    vector<int> heap;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> val;
        heap.push_back(val);
        downHeapify(heap, 0);
    }
    cout << endl;
    for (auto a : heap)
        cout << a << "  ";
}