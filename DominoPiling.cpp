//Mame-Kakuma
#include<bits/stdc++.h>
using namespace std;
int main(){
  int length , width , dominoes ;
  cin >> length >> width ;
    dominoes = ( length/2 ) * width ;
    if( length % 2 )
    dominoes += width/2 ;
    cout << dominoes ;
    }