#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> numbers;


long long   fact(int n) // tinh n!
{
    if(n>0)
    {
        return fact(n-1)*n;
    }
    else return 1;
}
int nCrCalculator(int n, int r) //tinh to hop chap r cua n
{
    numbers.push_back(10);
    numbers.pop_back();
    int num = fact(n);
    int den = fact(r)*fact(n-r);
    return num/den;
}

// int nCrCalculator(int n, int r) //tinh to hop chap r cua n bang de quy
// {
//     if(r==n || r==0) return 1;
//     return nCrCalculator(n-1,r-1)+nCrCalculator(n-1,r);
// }
int main()
{
    cout<<nCrCalculator(40,20);
}