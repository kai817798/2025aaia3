//LeetCode 28. Find the Index of the First Occurrence in a String
//�bhaystack���_���̧��needle �w(�j�����w)
//haystack: sadbutsad
//needle:   sad i=0
//           sad i=1
//             sad i=2
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(),N = needle.length();//�r�ꪺ����
        for(int i=0; i<=H - N ; i++) { //9 �� 3 �o�� 6
            // .substr(�}�l, ����) �������r��
            if(haystack.substr(i,N)== needle)return i; //��쵪��
        }
        return -1;//�j��̭��䤣��needle�N����
    }
};
