#include <iostream>
#include <vector>
using namespace std;

template<class T, int size = 100>
class VectorQueue
{
    private:
        vector<T> q;
    
    public:
        VectorQueue() {q.reserve(size);}
        void enqueue(T el)
        {

            if(!isFull())
                q.push_back(el);

        }
        T dequeue()
        {
            
            T el;
            if(!isEmpty())
            {
                el = q.front();
                q.erase(q.begin());
            }
            else
                cout << "Queue is Empty \n";
            return el;


        }
        int isFull()
        {
            if(q.size() == size)
                return 1;
            else
                return 0;
        }
        int isEmpty()
        {
            return q.empty();
        }
};