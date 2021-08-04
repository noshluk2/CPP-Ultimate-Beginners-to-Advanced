// without thread code for showing code flow
// functions are started and ended in a flow
// compare this code output with threads code output

#include <iostream>

using namespace std;

void sq_function(int x)
{
	cout << endl << x << " square is: " << x*x << " (function " << x << " ends here)\n\n";
}

int main()
{
	cout << "\n\nFunctions in C++\n\n";
	
	cout << "***Function 1 started***\n";
	sq_function(1); // Calling function 1

	cout << "***Function 2 started***\n";
	sq_function(2); // Calling function 2
	
	cout << "***Function 3 started***\n";
	sq_function(3); // Calling function 3

return 0;

}
