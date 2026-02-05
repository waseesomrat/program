#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
srand(time(0));
int number = rand();
cout << number % 10;
return 0;
}