#include <iostream>
#include <queue>
using namespace std;

const int NUM_SCORES = 3;
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

class StudentCompare
{

    public:
		int operator()(const Student &lhs, const Student &rhs)
		{
			double 	lhssum = 0.0, rhssum = 0.0;
			vector<double> score;
			score = lhs.getScore();
			for(int i=0; i<score.size(); i++)
				lhssum += score[i];
			score = rhs.getScore();
			for(int i=0; i<score.size(); i++)
				rhssum += score[i];
			return lhssum < rhssum ;
		}

};

int main()
{
	Student s1, s2, s3, s4, s5;
	Student pop_student;

	s1.setSid(10000001);
	s1.setSname("Jacob");
	s1.setScore(100, 100, 100);
	s1.printStudent();

	s2.setSid(10000002);
	s2.setSname("Savannah");
	s2.setScore(100, 90, 100);
	s2.printStudent();

	s3.setSid(10000003);
	s3.setSname("Sophie");
	s3.setScore(100, 90, 50);
	s3.printStudent();

    s4.setSid(10000004);
	s4.setSname("Nomar");
	s4.setScore(100, 100, 95);
	s4.printStudent();
	
	s5.setSid(10000005);
	s5.setSname("Kevin");
	s5.setScore(20, 10, 40);
	s5.printStudent();

	priority_queue<Student, vector<Student>, StudentCompare> pq;
   
	pq.push(s1);
	pq.push(s2);
	pq.push(s3);
    pq.push(s4);
    pq.push(s5);

	while (!pq.empty())
	{
		pop_student = pq.top();
		pop_student.printStudent();
		pq.pop();
	}

}