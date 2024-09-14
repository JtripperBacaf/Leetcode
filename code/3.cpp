/*
This Question is using hash map and slide window to handle the problem.
The slide window shows the current substring,and hash map records the 
final position of the end of slide window char.
The update of left use max to insure that left only increase and not
go backward.like "abbbbacd" ,when we search for the last a left may point
to the last b,and the update may point left to the first a + 1 where hashmap
records 
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, int> charIndexMap;
        int maxlenth=0;
        int left=0;
        for(int right=0;right<s.size();right++)
        {
            char currentChar = s[right];
            // have this char
            if(charIndexMap.find(currentChar) != charIndexMap.end())
            {
                left = std::max(left,charIndexMap[currentChar] + 1);   //update the left place
            }
            charIndexMap[currentChar]=right;   //update the newest place of char
            maxlenth = std::max(maxlenth, right - left + 1);
        }

        return maxlenth;

    }
};