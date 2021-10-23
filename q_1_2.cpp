#include <bits/stdc++.h>
#include<cstring>
using namespace std;

string words;
string func[1000];
int cur=0,i=0;

int eval(int t){
    //cout<<i<<endl;
    if(func[i]=="f"){
        cur=eval(i+=1)*2-3;
        //cout<<"::"<<cur<<endl;
        return cur;
    }
    else if(func[i]=="g"){
        cur=eval(i+=1)*2+eval(i+=1)-7;
        //cout<<"::"<<cur<<endl;
        return cur;
    }
    else if(func[i]=="h"){
        cur=eval(i+=1)*3-eval(i+=1)*2+eval(i+=1);
        //cout<<"::"<<cur<<endl;
        return cur;
    }
    else{
        int now=stoi(func[i]);
        return now;
    }
}

int main()
{
    getline(cin,words);
    int WordsLen=words.size();
    int ind=0;
    for(int l=0;l<WordsLen;l++){
        if(words[l]!=' '){
            func[ind]+=words[l];
        }
        else{
            ind+=1;
        }
        //cout<<ind<<"//"<<func[ind]<<endl;
    }

    int ans=eval(0);
    cout<<ans<<endl;
}
