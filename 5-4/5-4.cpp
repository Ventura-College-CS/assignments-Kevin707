#include <iostream>
using namespace std;
#include "VectorQueue.hpp"


int main()
{

    VectorQueue<int, 5>q;

    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(8);
    q.enqueue(2);
    q.enqueue(4);

    if(q.isFull())
        cout <<"Queue is Full \n";
    
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    if(q.isEmpty())
        cout << "Queue is Empty \n";
}