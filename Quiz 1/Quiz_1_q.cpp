#include <iostream>

using namespace std;

int main(){
	
	int mid_term, mid_end, finals;
	
	cin >> mid_term >> mid_end >> finals;
	
	// we got to cout yes iff the user 
	// has taken 30 or more from both midterm and endterm
	// and if he has taken more than 20 in finals
	// and if the sum of those is equal to or more than 70
	
	// otherwise, it's going to be "NO"
	
	if((mid_term + mid_end) >= 30 && finals >= 20 && (mid_term + mid_end + finals) >= 70){
		cout << "YES!";
	} else 
		cout << "NO.";
	
	
	
	return 0;
}
