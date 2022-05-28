class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp; // Keeps track of chars and their count in a range
		// start and end represent our range in the string
        int start = 0;
        int ans = 0;
		// maxSimilarChars keeps track of the chars that are the same and appear
		// most frequently in the range. For example: "AAA" = 3
        int maxSimilarChars = 0;
        
        // Loop through the array, but only the end pointer will move
        for(int end = 0; end < s.size(); end++){
            // s[end] char has appeared, increment its count in map
            mp[s[end]]++;
            // Till the current end Index, calculate the amount
            // of similar chars that appear the most
            maxSimilarChars = max(maxSimilarChars, mp[s[end]]);
            
            // calculate the total chars that appear from start to end
            int totalCharsInRange = end - start + 1;
            // since we already have the amount of chars that appear
            // the most in the range start to end and the total
            // chars in range start to end. We can calculate the
            // chars that are different than the most frequent one.
            int maxDifferentChars = totalCharsInRange - maxSimilarChars;
            
            // We can only change at most k 'different' chars
            // So, if the different chars exceed k, that means our answer
            // is wrong. so shift the range by incrementing start pointer.
            // since we incremented start pointer, the char at
            // start pointer won't be in our range anymore. So decrement
            // the count of char at the start pointer.
            if(maxDifferentChars > k){
                mp[s[start]]--;
                start++;
            }
            // If our k matches the number of different chars,
            // we can replace those different chars to turn them into
            // our most frequent chars in the range start to end.
            // so our answer is the length of the string in the same range.
            ans = max(ans, end - start + 1);
        }
        
        return ans;
    }
};
