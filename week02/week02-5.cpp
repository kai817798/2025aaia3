//week02-5.cpp LeetCode�ǲ߭p�e ��2�D
class Solution {
public:
    char findTheDifference(string s, string t) {
         //�����B�έp��U26�Ӧr���A�X�{�X�� ASCII:0-255
         int A[256] = {};//�}�C�ŧi,�}�C�Τj�A�����w�]��0
         for(int i=0;i<s.length();i++){
            char c = s[i];
            A[c]++;
         }
         for(int i=0;i<t.length();i++){
            char c = t[i];
            A[c]--;
            if(A[c] < 0)return c;
         }
         return 0;
    }
};
