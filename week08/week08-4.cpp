///week08-4.cpp
///�Ʀr�¬} �d���C�J�`�� 6174 (�j��p - �p��j�A����7��)
#include<iostream>
#include<vector>///���Y�ۦp���}�C
#include<algorithm>///�t��ksort()�O�t��k��!
using namespace std;

int main()
{
    cout << "�п�J���N4���(�����P):";
    int n;
    cin >> n;
    for (int i=0;i<7;i++){///�C�����A���w����¬} 6174
        vector<int>a;///���Y�ۦp���}�C
        while (n>0) {///��֪k�A��4��ơA�v�@��X��
            a.push_back(n%10);///�⥦����}�C�̭�
            n = n / 10;///�駹�֡A�N�G�F
        }
        sort(a.begin(),a.end() );///��}�C�p��j�Ʀn
        int M = a[3]*1000+a[2]*100+a[1]*10+a[0];///�˹L�ӡA�j��p
        int m = a[0]*1000+a[1]*100+a[2]*10+a[3];///�p��j
        ///���@�U�AM�O����?m�O����?�٨S�o��
        n=M-m;
        cout << M <<"�"<< m << "�o��:" << n << endl;
    }
}
