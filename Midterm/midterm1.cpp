#include <iostream>
#include <vector>

using namespace std;

class Student  //student class
{
  private:   
    int SID;
    string SName;
    double *scores;

  public:  
    Student()
    {
      SID = 0;
      SName = "";
      scores = nullptr;
    }
        
    Student(int i, string name, double *sc)  
    {
      SID = i;
      SName = name;
      scores = sc;
    }

    int getID(){return SID;}  
    string getName(){return SName;}
    double *getScores(){return scores;}
};

template <class T>  
class Stack
{
  private:  
    vector<T>pool;

  public:
    Stack()  
    {
    }

    void push(const T &el)  
    {
      pool.push_back(el);
    }

    T pop()  
    {
      T res = pool[pool.size() - 1];
      pool.pop_back();
      return res;
    }

    T topEl()  
    {
      return pool[pool.size() - 1];
    }

    bool isEmpty()  
    {
      return pool.size() == 0;
    }

    int size(){return pool.size();}  
};

int main()
{
  
  Student s1(100, "John", new double[3]{10, 20, 30});
  Student s2(101, "Mike", new double[3]{10.2, 20.2, 30.2});
  Student s3(102, "Evan", new double[3]{1, 2, 3});
  Student s4(103, "Jake", new double[3]{20, 80, 90});
  Student s5(104, "Carl", new double[3]{30, 40, 320});

  Stack<Student>st;

 
  st.push(s1);   
  st.push(s2);
  st.push(s3);
  st.push(s4);
  st.push(s5);

  cout << "Size: " << st.size() << endl; 

  while(!st.isEmpty()) 
  {
    Student res = st.pop();  
    cout << "SID: " << res.getID() << " , SName: " << res.getName() << " , scores: ";
    cout << res.getScores()[0] << ", " << res.getScores()[1] << " , " << res.getScores()[2] << endl;
  }

  return 0;
}