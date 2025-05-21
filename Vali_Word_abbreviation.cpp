#include<iostream> 
#include<string> 

using namespace std; 

class Solution{
public: 
      bool validWordAbbreviation(string word, string abbr) {
           int i =0; 
           int j=0; 
           int m = word.size(); 
           int n=abbr.size(); 
           while(i<m && j<n){
              if(isdigit(abbr[j])){
                 if(abbr[j]=='0') return false;
                 int num =0 ; 
                 while(j<n && isdigit(abbr[j])){
                    num = num*10 +(abbr[j]-'0'); 
                    ++j; 
                 }
                 i +=num; 
              }else{ 
                      if(i>=m || word[i]!=abbr[j]) return false; 
                      ++i; 
                      ++j; 

                 }
           }
           return i==m && j==n; 
      }
};
int main(){
   string word = "internationalization"; 
   string abbr = "i12iz4n"; 
   Solution sol; 
   cout<< boolalpha<< sol.validWordAbbreviation(word,abbr) << endl; 
   return 0; 
}
