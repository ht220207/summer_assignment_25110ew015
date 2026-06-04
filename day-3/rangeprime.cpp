#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the starting of the range : ";
    cin >> a;
    cout<<"ending of the range : ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {if(i<=1){
        continue;
    }
        int flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        cout<<"#"<<i<<endl;
    }
}