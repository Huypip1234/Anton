#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string chuan_hoa(string s){
    while(s[0] == ' '){
        s.erase(0,1);
    }
    while(s[s.size()-1] == ' '){
        s.erase(s.size()-1,1);
    }
    for(int i=0;i<s.size();i++){
        if(s[i] == ' ' && s[i+1] == ' '){
            s.erase(i,1);
            i--;
        }
    }
    for(int i=0;i<s.size();i++){
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
    for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
            s[i+1] = toupper(s[i+1]);
        }
    }
    return s;
}
int count(string s){
    int count = 0;
    s = chuan_hoa(s);
    for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
            count ++;
        }
    }
    count = count+1;
    return count;
}
int main(){
    string s;
    cout<<"Nhap ho va ten:"<<endl;getline(cin,s);
    cout<<"Chuan hoa:"<<endl;
    cout<<chuan_hoa(s);
    cout<<"\nSo tu: "<<count(s);
    return 0;
}
