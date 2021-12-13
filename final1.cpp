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