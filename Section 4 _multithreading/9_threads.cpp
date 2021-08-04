#include <iostream>
#include <thread>

using namespace std;

void sq_function(int x)
{
	cout << endl << x << " square is: " << x*x << " (thread " << x << " ends here)"<< endl;
}

int main()
{
	cout << "\n\nThreads in C++\n\n";
	
	cout << "***Thread 1 started***\n";
	thread th1(sq_function, 1); // Creating thread 1

	cout << "***Thread 2 started***\n";
	thread th2(sq_function, 2); // Creating thread 2
	
	cout << "***Thread 3 started***\n";
	thread th3(sq_function, 3); // Creating thread 3

//	cout << "Program Ends here\n";

th1.join(); // Must join the threads
th2.join(); // So there will be no error when
th3.join(); // parent/main function ends earlier
	
}
