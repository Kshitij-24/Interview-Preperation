class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        set<int> candidates;
          set<int> failures;
          
        for(int i=0; i<fronts.size(); i++)
        {  if(fronts[i]!=backs[i]) 
             { candidates.insert(fronts[i]);
               candidates.insert(backs[i]);
             }
            else { failures.insert(fronts[i]); }
         }
        
        if(candidates.size()==0) return 0;
        
        int x;
        bool flag = false;
        for(auto it = candidates.begin(); it!=candidates.end(); it++){
              x = *it;
              if(failures.find(x)==failures.end()) {
                    flag = true;
                    break;          
              }
        }
           if(flag) return x;
          return 0; 
    }
};