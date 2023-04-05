#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, f;
    float q, w, e;
    cout << "Enter number(x) ";
    cin >> num;
    f = num % 10;
    e = floor(num / 10);
    w = (int(e) % 10);
    q = floor(e / 10);
    cout << " Output numbers: " << (q) << (" ") << (w) << (" ") << (f) << endl;
    return 0;
}