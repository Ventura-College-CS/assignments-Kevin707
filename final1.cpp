#include <iostream>
#include "Final1.hpp"
#include <fstream>
using namespace std;

int binarySearch(Course array[], int first, int last, int target)
{
        
    if (first > last)
               return -1;
       int mid = (first + last) / 2;
        if (array[mid].getID() == target)
               return mid;
        if (array[mid].getID() > target)
               return binarySearch(array, first, mid - 1, target);
        else
               return binarySearch(array, mid + 1, last, target);
       return -1;
    
}

int main()
{
        int target;
        ifstream ifs;
        ifs.open("class.txt");
	if ( ifs.fail())
	{
		cerr << "File Open Error\n";
		exit(0);
	}

        cout << "Which CourseID would you like information for? " << endl;
        cin >> target;
    
        Course coursearray[10];
        int cid;
        string cname;
        int ccredit;
        int i;
        for(i=0; i<10; i++)
        {
                ifs >> cid >> cname >> ccredit;
                coursearray[i].setCourse(cid, cname, ccredit);
        }
        int x = 10;
        int result = binarySearch(coursearray, 0, x-1, target);
        (result == -1)
                ? cout << "Element is not present in array"
                : cout << "Element is present at index " << result;
        return 0;
    
}