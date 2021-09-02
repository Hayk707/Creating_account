#include "reg_log.hpp"

void Case2(Registry Logining){
					 
		ifstream myfile_check;
		cout << "Enter your future login\n";
                cin >> Logining.l;
 		cout << "Enter Password\n";
             	cin >> Logining.pass;
                cout << "Confirm Password\n";
                cin >> Logining.pass2;
		        	
				if (Logining.pass == Logining.pass2) {
	
                  			cout << "\nYour account is created\n";
                  			
				}
                  			
				else if (Logining.pass != Logining.pass2) { 			//Cheking password correctly or not.

                          		cout << "\nWrong password\n";
            				      
				}

                  		myfile_check;
                  		myfile_check.open(Logining.l+".txt");
                  		myfile_check.close();
                  		
				if(myfile_check){
                          			
					cout<<"Error"<<endl;
                  			
				} else {

                          		ofstream myfile;
                          		myfile.open(Logining.l+".txt");
			                myfile << "Your Login --->  " << Logining.l << endl; 	//Print in created file inserted login and password
                  			myfile << "Your Password --->  " << Logining.pass;
                  			myfile.close();
                 			
		       		}
}

