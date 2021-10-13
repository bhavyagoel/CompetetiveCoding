#include <iostream>
#include <list>
using namespace std;

/*
* Templates + interators
? Iterator - freedom from container type
*/
template <class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{

    while (start != end)
    {
        if (*start == key)
        {
            return start;
        }
        start++;
    }
    return end;
}

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_back(5);
    l.push_back(7);
    l.push_back(8);

    auto it = search(l.begin(), l.end(), 5);
    if (it == l.end())
    {
        cout << "ELement not present" << endl;
    }
    else
        cout << *it << endl;
}