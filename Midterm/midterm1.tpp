#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <vector>
using namespace std;

const int NUM_SCORES = 2;

class Student
{

    private:
        int SID;
        string SName;
        vector<double> score;

    public:
        Student() : SID(0), SName() {}
        Student(int i, string name, double s0, double s1, double s2, double s3, double s4)
        {
            SID = i;
            SName = name;
            score.push_back(s0);
            score.push_back(s1);
            score.push_back(s2);
            score.push_back(s3);
            score.push_back(s4);
        }
        int getID() const{return SID;}
        string getName() const { return SName;}
        vector<double> const &getScore() const { return score; }
	    void setSid(int id) { SID = id; }
	    void setSname(string name) { SName = name; }
        void setScore(double s0, double s1, double s2)
	    {
		    score.clear();
		    score.push_back(s0);
		    score.push_back(s1);
		    score.push_back(s2);
	    }
	    void printStudent() const
	    {
		    cout << "Student ID: " << SID << "\t";
		    cout << "Name: " << SName << "\t";
		    for (int i = 0; i < NUM_SCORES; i++)
			    cout << score[i] << "\t";
		    cout << endl;
	    }

};

template <class T, int capacity=3>
class Stack
{

    private:
        vector<T> p;
    
    public:
        void stack(int size)
        {
            p.reserve(size);
        }
        void push(T el)
        {
            p.push_back(el);
        }
        T pop()
        {
            T val = p.back();
            p.pop_back();
            return val;
        }
        T &topEl()
        {
            return p.back();
        }
        int isEmpty()
        {
            return p.empty();
        }
        int size()
        {
            return p.size();
        }
};

#endif