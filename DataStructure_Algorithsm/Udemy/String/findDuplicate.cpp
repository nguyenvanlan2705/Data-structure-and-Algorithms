#include <bits/stdc++.h>
using namespace std;

class findDuplicate
{
private:
    string str = "finding";
    long int H = 0, x = 0;

public:
    findDuplicate()
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            x = 1;
            x = x << (str[i] - 97);

            if ((H & x) > 0)
            {
                cout << str[i];
            }
            else
            {
                H = x | H;
            }
        }
    }
};
int main()
{
    findDuplicate *find = new findDuplicate();
    delete find;
    return 0;
}