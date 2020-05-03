class Solution {
public:
    bool canConstruct(string s1, string s2) {
        
        unordered_map<char,int> mp1 ,mp2;   //decalring unordered map 
        
        for(int i=0;i<s1.length();i++)
            mp1[s1[i]]++;                  //storing key as character and its value as frequency
        for(int i=0;i<s2.length();i++)
            mp2[s2[i]]++;                 //storing key as character and its value as frequency
          
        for(auto it=mp1.begin();it!=mp1.end();it++)
        {
           char x=it->first;              
            
             if(mp2[x]<it->second)          //if frequency of x character in  magzine string is less than   
               return false;               //the frequency of character in  ransom string then return false
            
            
        }
            
        
        
        return true;                      //otherwise return false
        
    }
};