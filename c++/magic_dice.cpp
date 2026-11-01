#include<iostream>
#include<ctime>
#include<cstdlib>


using namespace std;

int main() {



const int Max = 6;
const int Min = 1;

int first;
int second;
srand(time(nullptr));


first = (rand() % (Max - Min - 1)) + Min;

second = (rand() % (Max - Min - 1)) + Min;


cout << "first : " << first << "," <<"second : "<< second;
return 0;
}