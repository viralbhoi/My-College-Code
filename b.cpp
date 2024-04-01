#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(s[i]=='i'&&s[i+1]=='t'){
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
