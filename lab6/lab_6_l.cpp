//#include <iostream>
//
//using namespace std;
//
//int main(){
//	
//	int n;
//	
//	cin >> n;
//	
//	int arr[n];
//	
//	for(int i = 0; i < n; i++){
//		cin >> arr[i];
//	}
//	
//	for(int j = n -1; j >= 0; --j){
//		cout << arr[j] << " ";
//	}
//	
//		
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main(){
//	
//	string s;
//	int n, c = 0;
//	
//	cin >> s >> n;
//	
//	
//		for(int i = 0; i < s.size() - n + 1; i++){
//			 if (int(s[i]) > 47 & int(s[i]) < 58){
//                bool p = true;
//                for (int j = 0; j < n; j ++){
//                    if (int(s[i + j] > 57 || int(s[i + j]) < 48)){
//                        p = false;
//                        break;
//                    }
//                }
//		}
//			cout << c;
//    	}
//	
//	
//	
//	
//}


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;

    if (n > s.length()){
        cout << "Not valid";
    }
    else{
        
        string answer = "Not valid";

        for (int i = 0; i < s.length() - n + 1; i ++){
            if (int(s[i]) > 47 & int(s[i]) < 58){
                string check = "TRUE";
                for (int j = 0; j < n; j ++){
                    if (int(s[i + j] > 57 || int(s[i + j]) < 48)){
                        check = "FALSE";
                        break;
                    }
                }
                if (check == "TRUE"){
                    answer = "Valid";
                    break;
                }
            }
        }

        cout << answer;
    }
}	
