// C++ program to check and display _POSIX_VERSION constant on the system on which it is run

#define _POSIX_SOURCE
#define _POSIX_c_SOURCE
#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	#ifdef _POSIX_VERSION
		cout<<"System supports to POSIX"<<_POSIX_VERSION<<endl;
	#else
		cout<<"_POSIX_VERSION is undefined\n"
	#endif 
	return 0;
}

/*EXECUTION:

g++ version.cpp
./a.out
*/

/*OUTPUT:

System supports to POSIX 200809
*/

