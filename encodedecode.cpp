#include<iostream>
#include<vector>
#include<string>
using namespace std;
string encode(vector<string>& strs){
    string encoded="";
    for(const string& s:strs){
        encoded+=to_string(s.size())+'#'+s;
    }
    return encoded;


}
vector<string> decode(string s){
    vector<string> decoded;
    string num;
    int i =0;
    while(i<s.length()){
        string num="";
        while(s[i]!='#'){
            num+=s[i];
            i++;
        }
        int len = stoi(num);
        i++;
        string word = s.substr(i,len);
        decoded.push_back(word);
        i+=len;
    }
    
    


}
int main(){
    vector<string> strs = {"a","1","b","a1b"};
    string s_encoded = encode(strs);
    vector<string> res = decode(s_encoded);

}