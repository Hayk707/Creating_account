#include "reg_log.hpp"
#include <fstream>

void Case1(Registry Logining) {

	cout << "Enter Login\n";
	ifstream myfile;
    	cin >> Logining.l;
    	cout << "Enter Password\n";
    	cin >> Logining.pass; 
 	myfile.open (Logining.l+".txt");
    	
	if (myfile.is_open())			//Creating folder in pc with inserted name.
        
		cout << "Welcome in your account =)";
    	else

    		cout << "We haven't account with this name ";
}			
