#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

        while(t--){
            int n;
            cin >> n;

            vector<int>v(n);
            for (auto &x : v) cin >> x;
         
            sort(v.begin(),v.end());
            v.erase(unique(v.begin(),v.end()),v.end());
            
            n = v.size();
            int best = 0;
            int current = 0;

            for(int i=0; i<n; i++){
                if (i == 0 || v[i] != v[i-1]+1){
                    current = 0;
                }
                current++;
                best  = max(best,current);
            }
            cout << best << endl;
        }
        
        }