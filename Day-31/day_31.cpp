class Solution {
public:
    bool isIsomorphic(string s, string t) {

    if(s.size()!=t.size()){
        return false;
    }

    unordered_map<char,char>map1,map2;
     int n=s.size();
     for(int i=0;i<n;i++){
         int s_char=s[i];
         int t_char=t[i];
 if( (map1.find(s_char)!=map1.end() && map1[s_char]!=t_char) || (map2.find(t_char)!=map2.end() && map2[t_char]!=s_char)){
return false;
 }else{
        map1[s_char]=t_char;
        map2[t_char]=s_char;
     }
     }
  return true;
    }    
};