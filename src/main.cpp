#include "reg_log.hpp"
  

  int main() {

  while (true) {			//There is while loop for repeat your program.
  		  int x;
  		  Registry Logining;
 	          Logining.l = "Login";
        	  Logining.registers = "Register";
                  cout << "\n1. Login\t\t" << "2. Register\t\t" << "3. Exit\n\n\t";		//Printing program actions.
                  cin >> x;
		  switch (x) {
			  	case 1:				//Cheking inserted number.

					Case1(Logining);
					break;

				case 2:				//Creating 'account'.

					Case2(Logining);
					break;

				case 3:				//Exit from program.

					exit(0);
					break;

				default:

					 cout << "Incorrect number... try again =)\n";
		  	     }

	   	}
}
