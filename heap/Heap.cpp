#include <iostream>
#include <vector>

using namespace std;

/* Function of upheapify

 Once we insert the new element in the heap
 Insert it at the end then call the upheapify.

            12
          9    3
        5  4  1  0

 Heap Properties (Considering the Max Heap.)

 Every Parent Value Must be greater than it's child nodes.

 For every node in the heap must statisfy this properfy.


*/
void upheapify(vector<int> &heap, int index) {
    if (index == 0) return;
    int parent = (index - 1) / 2;

    if (heap[parent] < heap[index]) {
        int tem = heap[parent];
        heap[parent] = heap[index];
        heap[index] = tem;
        upheapify(heap, parent);

      

    } else return;

}

int main() {
    int n, ele;
    cin >> n;
    vector<int> heap;

    // Take the element and add it to heap and perform the upheapify operation
    for (int i = 0; i < n; i++) {
        cin >> ele;
        heap.push_back(ele);
        upheapify(heap, i);
    }

    for (int i = 0; i < n; i++) {
        cout << heap[i] << " ";
    }

}