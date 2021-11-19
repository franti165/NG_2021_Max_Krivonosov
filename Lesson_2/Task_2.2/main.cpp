#include <iostream>

using namespace std;

int main()
{
    int s1 = 0;
    int s2 = 0;

    cout << "enter the namber: ";
    cin >> s1;

    for(int i = s1; i > 0; i/=10)
    {
        if(i%10 == i/10%10)
            s2+=i%10;

    }
    cout << "Sum is: " << s2;
    return 0;
}
