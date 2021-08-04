#include <iostream>
#include <thread>

using namespace std;

// a callable function
void call_function(int x)
 {
   for (int i = 0; i < x; i++) {
   cout << "This is Thread 1 using function pointer\n";
   }
 }
 
// a callable object
class thread_obj {
 public:
   void operator()(int x) {
       for (int i = 0; i < x; i++)
           cout << "This is Thread 2 using function object\n";
   }
};
 
int main()
{
// Define a Lambda Expression
auto f = [](int x) {
   for (int i = 0; i < x; i++)
   cout << "This is Thread 3 using lambda expression\n";
   };

// launch thread using function pointer as callable
thread th1(call_function, 3);
 
// launch thread using function object as callable
thread th2(thread_obj(), 3);
 
//launch thread using lambda expression as callable
thread th3(f, 3);
 
// Wait for thread t1 to finish
th1.join();
// Wait for thread t2 to finish
th2.join();
 
// Wait for thread t3 to finish
th3.join();
 
return 0;
}