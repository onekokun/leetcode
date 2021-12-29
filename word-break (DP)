class Solution {
public:
    set<string> hset;
    map<string, bool> hmap;
    
    bool solve(string s, int n)
    {
        if(s=="") return true;
        
        if(hmap.find(s)!=hmap.end()) return hmap[s];
        
        for(int i=1;i<=n;++i)
        {
            if(hset.find(s.substr(0,i))!=hset.end() && solve(s.substr(i), s.substr(i).size())){
                return hmap[s] = true;
            }
            
        }
   
        return hmap[s] = false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        for(auto x: wordDict) hset.insert(x);
        return solve(s, s.size());
    }
};
