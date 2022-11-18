#include <iostream>
#include <list>
using namespace std;

//function to input the list
list<int> inputList()
{
    list<int> l;
    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;
    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }
    return l;
}

//function that finds the smallest number in a list
int findSmallest(list<int> l) {
    int smallest = 2147483647;
    for (auto i : l) {
        if (i < smallest) {
            smallest = i;
        }
    }
    return smallest;
}

int main() {
    cout << findSmallest(inputList());
    return 0;
}
