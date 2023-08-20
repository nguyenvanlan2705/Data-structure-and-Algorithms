#include <bits/stdc++.h>
using namespace std;

class checkAnagram
{
private:
    /* data */
    string A= "decimal";
    string B = "medical";
    int i, H[26]={0};
public:
    checkAnagram(/* args */);
    ~checkAnagram();
};

checkAnagram::checkAnagram(/* args */)
{
    for(i=0 ; A[i]!='\0';i++)
    {
        H[A[i]-97] +=1;
    }
    for(i=0 ; B[i]!='\0';i++)
    {
        H[B[i]-97] -=1;
        if(H[A[i]-97] <0){
            cout  << "not Anagram";
        }
        if(B[i]== '\0'){
            cout << "Its anagra";
        }
    }
}

checkAnagram::~checkAnagram()
{
    cout<<"Completed checking";
}
int main()
{
    checkAnagram *anagramCheck = new checkAnagram();
    delete anagramCheck;
}
