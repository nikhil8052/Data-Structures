#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

// User class to represent one user
class User {
   public:
    string name;
    int age;
    int vertex;

    User(string name, int age) {
        this->name = name;
        this->age = age;
    }

    string getName() { return this->name; }

    int getAge() { return this->age; }
};

class Graph {
   public:
    unordered_map<string, list<User>> graph;

    int add_edge(string vertex, User user, bool bidi) {
        graph[vertex].push_back(user);
        if (bidi == true) graph[user.name].push_back(user);
    }

    void print() {
        for (auto vertex : graph) {
            cout << vertex.first << "-->";
            list<User> ll = vertex.second;
            list<User>::iterator ptr = ll.begin();
            while (ptr != ll.end()) {
                cout << (*ptr).name << "--> ";
                ptr++;
            }
            cout << endl;
        }
    }
};

// Code starts from here
int main() {
    Graph g1;
    g1.add_edge("nikhil", User("Nikhil", 22), false);
    g1.add_edge("nikhil", User("Moksh", 22), true);
    g1.add_edge("nikhil", User("Rishu", 22), false);
    g1.add_edge("nikhil", User("Rana", 22), false);
    g1.print();
    cout << "Done";

    return 1;
}