#include <string>
#include <iostream>
using namespace std;

int main()
{
  cout<<"Helloo World!"<<endl;
  cout<<"Input a number: ";
  int num = 0;
  cin >> num;
  if(num > 0)
  {
    cout<<"This number is positive!"<<endl;
  }
  else
  {
    cout<<"This number is negative!"<<endl;
  }

  cout << endl;
  system("Pause");
  return 0;
}
