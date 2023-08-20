#include <bits/stdc++.h>
using namespace std;

void permutationString(char s[], int k = 0)
{
    static int A[10] = {0};
    static char res[10];
    int i;
    if (s[k] == '\0')
    {
        res[k] = '\0';
        cout << res << " ";
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                A[i] = 1;
                res[k] = s[i];
                permutationString(s, k + 1);
                A[i] = 0;
            }
        }
    }
}
void permutationString(char s[], int l, int h)
{
    int i;
    if (l == h)
        cout <<s <<" ";
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            permutationString(s,l+1,h);
            swap(s[l], s[i]);
        }
    }
}
int main()
{
    char s[] = "ABC";
    permutationString(s);
    cout<<"\n";
    permutationString(s,0,2);
    return 0;
}