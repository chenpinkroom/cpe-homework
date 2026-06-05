#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        if(n==1){
            int temp;
            cin >> temp;
            cout<<"Jolly" << endl;
            continue;
        }
        
        vector<int>s(n);
        vector<bool>t(n,false);
        bool isjolly = true;
        
        for(int i = 0;i<n;i++){
            cin>>s[i];
        }
        
        for(int i = 0;i<n-1;i++){
            int dif = abs(s[i]-s[i+1]);
            
            if(dif>=1&&dif<=n-1&&!t[dif])t[dif]=true;
            else isjolly = false;
            
            
        }
        if(isjolly) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
    

    return 0;
}