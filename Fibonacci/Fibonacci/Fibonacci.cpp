

#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n;
    a = 1;
    b = 1;
    c = a + b;
    if (n == 1)
    {
        cout << 1;
    }
    if (n == 2)
    {
        cout << 1;
    }
     if (n >2)
    {
        int contor = 2;

        while (contor < n) {
            c = a + b;
            a = b; 
            b = c;
            contor++;
        }
        cout << c;
    }
}

