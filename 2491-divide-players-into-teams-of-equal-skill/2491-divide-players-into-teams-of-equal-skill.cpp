class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int sum = 0;
        for (int v : skill) {
            sum += v;
        }
        
      
        int n = skill.size();
        if (sum % (n / 2) != 0) {
            return -1; 
        }
        
        int total_skill = sum / (n / 2);
        
  
        sort(skill.begin(), skill.end());
        
        long long result = 0;
        int l = 0, r = n - 1;
        
        while (l < r) {
            int pair_sum = skill[l] + skill[r];
            if (pair_sum != total_skill) {
                return -1; 
            }
            
            result += (long long)skill[l] * skill[r];   
            l++;
            r--;
        }
        
        return result;
    }
};
