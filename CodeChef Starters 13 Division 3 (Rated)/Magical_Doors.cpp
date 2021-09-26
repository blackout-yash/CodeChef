//                     Magical Doors
// Link - https://www.codechef.com/START13C/problems/MAGDOORS



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fora(a,b) for(ll i=a;i<b;i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t; string s;
    cin >> t;
    while(t--){
        cin >> s;
        ll flip = 0, checker = 0;
        fora(0,s.size()){
            if(checker == s[i]-'0'){
                flip++;
                if(checker) checker = 0;
                else checker = 1;
            }
        }
        if(!flip) cout << flip << "\n";
        // else if(flip & s[0] == '1') cout << flip-1 << "\n";
        else cout << flip << "\n";
    }
return 0;
}