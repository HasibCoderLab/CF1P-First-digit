/*============================================================
    Codeforces - CF1-P
    Problem : First digit !
    Contest :1 Data Types & Conditions
    Topic   : Data Types & Conditions
    File    : First-digit.cpp
    Author  : Hasib Hasan
============================================================*/
#include <bits/stdc++.h>
using namespace std;
int main (){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int x;
cin >> x;
int firstDigit = x/1000;
if (firstDigit % 2 == 0 )
{
  cout << "EVEN" ;
}else{
     cout << "ODD" ; 
}

    return 0;
}