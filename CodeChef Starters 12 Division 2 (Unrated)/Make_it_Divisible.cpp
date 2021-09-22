#include <iostream>

using namespace std;

int main(){
	int t, n, m, x, y;
	cin>> t;
	while(t--){
		cin >> n >> m >> x >> y;
		int xcount = (m+n)-2;
		int ycount = 0;
		int maximum = 999999999, temp = 0;
		while(ycount != min(n,m)){
            cout << xcount << " " << ycount << "\n";
			temp += (xcount*x + ycount*y);
			maximum = min(maximum, temp);
			temp = 0;
			ycount++; xcount -= 2;
		}cout << maximum << endl;
	}
return 0;
}