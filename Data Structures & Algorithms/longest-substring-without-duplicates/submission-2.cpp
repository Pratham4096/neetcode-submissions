class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        unordered_map<char,int> mp;
        int left =0;
        int right = 0;
        int count = 0;
        while(right < s.size()){   
         
            if(mp.contains(s[right]) && mp[s[right]]>=left){
              left = mp[s[right]] + 1;
            }
            mp[s[right]] = right;

            count = max(count, right -left +1);

            right++;
        }
        return count;
    }
};
