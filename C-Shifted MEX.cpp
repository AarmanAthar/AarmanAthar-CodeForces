#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int MEX(vector<int>arr){
    int mex = 0;
    int i = 0;
    while (i<arr.size()){
    if(mex == arr[i]){
        mex++;
        i=-1;
    }
    i++;
}
    return mex;
}

int main(){
    int t;
    cin >> t;

        for(int k = 0; k < t; k++ ){
            int n;
            cin >> n;
            int x;
            vector<int>v;
            
            for(int i = 0; i < n; i++){
                cin >> x;
                v.push_back(x);
            }
         
            sort(v.begin(),v.end());
            v.erase(unique(v.begin(),v.end()),v.end());
            
            int l = 0;
            int r= 0;
            for (int i = 0; i < v.size()-1; i++){
            if (v[i]+1==v[i+1]){
                r = i;
            }
            else{
                if ((r-l) < i-(r+1)){
                    l = r + 1;
                    r = i;
                }
            }
            cout << "l:" << l << " , r:" << r << endl;
        }
        
        }
        cout << endl;
        }
    
            
// 4          
// 0123
// 1
// 2346
// -10124
// -112356
            












