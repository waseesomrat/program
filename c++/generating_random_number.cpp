#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
srand(time(nullptr));
int number = rand();
cout << number % 10;
return 0;
}