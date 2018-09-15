#include <string>
#include <iostream>
using namespace std;

int main()
{
  cout<<"Hello World!"<<endl;
  cout<<"Input a number: ";
  int num = 0;
  cin >> num;
  if(num > 0)
  {
    cout<<"This number is positive!"<<endl;
  }
  else if(num < 0)
  {
    cout<<"This number is negative!"<<endl;
  }
  else
  {
    cout<<"This number is 0!"<<endl;
  }

  cout << endl;
  system("Pause");
  return 0;
}
