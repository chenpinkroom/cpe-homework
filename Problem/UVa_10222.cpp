#include<bits/stdc++.h>
using namespace std;

int main(){
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string c;
    while(getline(cin,c)){
        for(int i = 0;i<c.length();i++){
            if(c[i]==' ')cout<<' ';
            else{
                for(int j = 0;j<keyboard.length();j++){
                    if(c[i]==keyboard[j]){
                        cout<<keyboard[j-2];
                        break;
                    }
                    
                }
            }
        }
        
        
        
        cout<<endl;
    }
    return 0;
}