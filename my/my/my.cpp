#include <iostream>
#include <list>     
#include <iterator> 
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    list<int> myList;
    for (int i = 0; i < 15; i++)
    {
        myList.push_back(rand() % 20);
    }

    cout << "List: ";
    for (list<int>::iterator it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
        int max = myList.front();
        for (auto l : myList)
            if (max < l) max = l;
        cout << "max: " << max << endl;
    
}