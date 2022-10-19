// C++ program to demonstrate isdigit()
#include <ctype.h>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
// Taking input
char ch = '6';

// Check if the given input
// is numeric or not
if (isdigit(ch))
cout << "\nEntered character is"
<< " numeric character";
else
cout << "\nEntered character is not"
" a numeric character";
return 0;
}
