#include <bits/stdc++.h>
using namespace std;

class diagonalMatrix
{
private:
    int n;
    int *A;
public:
    diagonalMatrix()
    {
        n=2;
        A= new int[2];
    }
    diagonalMatrix(int n)
    {
        this->n = n;
        A= new int[n];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    ~diagonalMatrix()
    {
        delete []A;
    }
};
void diagonalMatrix::set(int i, int j, int x){
    if(i==j){
        A[i-1] = x;
    }
}
int diagonalMatrix::get(int i, int j)
{
    if(i==j) return A[i-1];
    return 0;
}
void diagonalMatrix::display()
{
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(i==j) cout<< A[i]<<" ";
            else cout<<"0 ";
        }
        cout<<"\n";
    }
}
int main()
{
    diagonalMatrix *d = new diagonalMatrix(4);
    d->set(1,1,5);
    d->set(2,2,7);
    d->set(3,3,3);
    d->set(4,4,9);
    d->display();
    cout<<d->get(3,3);
    delete d;
    return 0;
}

