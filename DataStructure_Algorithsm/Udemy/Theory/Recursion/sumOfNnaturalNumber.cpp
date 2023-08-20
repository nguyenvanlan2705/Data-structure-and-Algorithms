#include<iostream>
using namespace std;
int sumOfFristNnumber(int n)
{
    if(n>0)
    {
        // c1 return sumOfFristNnumber(n-1)+n; //O(n)
        return (n*(n+1))/2; //O(1) better
        //c3 using loop O(n)
    }
    else return 0;
}
int main()
{
    cout<<sumOfFristNnumber(5);
}