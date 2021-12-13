#include <iostream>
#include "midterm1.tpp"
using namespace std;


int main()
{

    Stack<Student, 5>p;

    Student s1, s2, s3, s4, s5;

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

    p.size();

    p.push(s1);
	p.push(s2);
	p.push(s3);
    p.push(s4);
    p.push(s5);

	Student ret;
    while(p.isEmpty())
	{
		ret = p.pop();
        cout << ret.getID() << endl;
	}

}