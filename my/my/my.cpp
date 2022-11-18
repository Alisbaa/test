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
int findBiggest(list<int> l) {
    int biggest = 0;
    for (auto i : l) {
        if (i > biggest) {
            biggest = i;
        }
    }
    return biggest;
}

int main() {
    cout << findBiggest(inputList());
    return 0;
}
