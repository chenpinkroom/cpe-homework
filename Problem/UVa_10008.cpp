#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    //to略過cin後的\n
    string gar;
    getline(cin,gar);

    int count[26]={0};

    while(n--){
        string line;
        getline(cin,line);

        for(int i = 0;i<line.length();i++){
            if(isalpha(line[i])){
                char c = toupper(line[i]);//轉大寫
                count[c-'A']++;

            }
        }

    }
    char letters[26];
    int val[26];
    //建立字母表
    for(int i = 0;i<26;i++){
        letters[i]='A'+i;
        val[i]=count[i];
    }
    for(int i = 0;i<26;i++){
        for(int j = i+1;j<26;j++){
            bool shouldswap = false;

            if(val[i]<val[j])shouldswap = true;
            else if(val[i]==val[j]&&val[i]>0){
                if(letters[i]>letters[j])shouldswap = true;
            }
            if(shouldswap){
                swap(val[i],val[j]);
                swap(letters[i],letters[j]);
            }

        }
    }
    for(int i = 0;i<26;i++){
        if(val[i]>0)cout<<letters[i]<<" "<<val[i]<<endl;
    }

    return 0;
}