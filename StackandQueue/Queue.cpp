#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // First in First Out (FIFO ORDER)
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;

    return 0;
}