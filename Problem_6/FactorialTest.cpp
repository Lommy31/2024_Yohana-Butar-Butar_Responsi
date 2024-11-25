#include <iostream>
using namespace std;

unsigned int factorial (unsigned int n)
{
    if (n == 0)
         return 1;
    return n * factorial (n - 1);
}

int main()
{
   int num = 4;

  cout << "Enter Number of " << num << " is: "
      << factorial (num) << endl;

if (result == 24) {
   cout << "Test Passed" << endl;
} else {
  cout << "Test Not Passed" <<endl;
}
  
  return 0;
}

