// C++ program to print POSIX defined configuration options supported on any given system

#define _POSIX_SOURCE
#define _POSIX_c_SOURCE 199309L
#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	#ifdef _POSIX_JOB_CONTROL
		cout<<"System support job control.\n";
	#else	
		cout<<"System does not support job control.\n";		
	#endif

		
		
	#ifdef _POSIX_SAVED_IDS
		cout<<"System supports saved set-UID and saved set-GID\n";
	#else 
		cout<<"System does not support saved set-UID and"<<"saved set GID";
	#endif


		
	#ifdef _POSIX_CHOWN_RESTRICTED
		cout<<"chown_restricted option is:"<<_POSIX_CHOWN_RESTRICTED<<endl;
	#else 
		cout<<"System does not support CHOWN_RESTRICTED option\n";
	#endif



	#ifdef _POSIX_NO_TRUNC
		cout<<"Pathname trunc option is:"<<_POSIX_NO_TRUNC<<endl;
	#else
		cout<<"System does not support system wide pathname"<<"trunc option";
	#endif 



	#ifdef _POSIX_VDISABLE
		cout<<"disable charater for terminal file"<<_POSIX_VDISABLE<<endl;
	#else
		cout<<"System does not support _POSIX_VDISABLE\n";
	#endif
		return 0;
}

/*OUTPUT:

System supports job control
System supports saved set-UID and saved set-GID
chown_restricted option is:0
Pathname trunc option is:1
disable character for terminal file
*/
