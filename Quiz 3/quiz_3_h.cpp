#include <iostream>

using namespace std;

double GetPriceQualityRatio(int price, int quality){
		double n = (double)quality/(double)price;
		return n;
		
}

int main(){
    int n;
    string ph;
    double max, r;
    string brand;
    int price, quality;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> brand >> price >> quality;

        r = GetPriceQualityRatio(price, quality);

        if(r > max){
            ph = brand;
            max = r;
        }else if(r == max){
            continue;
        }
    }

    cout << ph << endl;
    return 0;
}
