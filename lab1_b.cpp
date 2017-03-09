#include<iostream>
using namespace std;

int main()
{

  int a;

  cin >> a;
  
  while(a != 1){
    if(a % 2 !=0){ 
    a =a * 3 + 1;
    cout << a << endl;
    }
    else{
    a = a/2;
    cout << a << endl;
    }
    }
  
  return 0;
}



