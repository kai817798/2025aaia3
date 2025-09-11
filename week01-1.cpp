//LeetCode 28. Find the Index of the First Occurrence in a String
//在haystack乾稻草堆裡找到needle 針(大海撈針)
//haystack: sadbutsad
//needle:   sad i=0
//           sad i=1
//             sad i=2
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(),N = needle.length();//字串的長度
        for(int i=0; i<=H - N ; i++) { //9 減 3 得到 6
            // .substr(開始, 長度) 部分的字串
            if(haystack.substr(i,N)== needle)return i; //找到答案
        }
        return -1;//迴圈裡面找不到needle就失敗
    }
};
