 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int marks;
	cin >> marks;
	
	if ( marks > 90 ){
	    cout << "A";
	}
	else if ( marks > 70){
	    cout << "B";
	}
	
	else if ( marks >= 40){
	    cout << "C";
	}
	else{
	cout << "F";
	}
	return 0;

}

//Write a program to print the grades of a student based on the marks they have obtained provided as input. The student is graded A if marks are greater than 90, B if marks are greater than 70, C if greater than or equal to 40, else F.
