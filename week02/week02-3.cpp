#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;///�ŧi�r��a
	cin >> a;///Ū�J�r��a

	string ans;///�ŧi�r��ans�񵪮ץΪ�
	int N=a.length();///�r��a������
	for(int i=N-1;i>=0;i--){///�˹L�Ӫ��j��
	ans += a[i];///�b�j��̡A��a[i]���ans���᭱
	}

	cout << a << '+' << stoi(ans) <<'='
		 << stoi(a) + stoi(ans) << endl;
}///stoi() is "string to int"��r���ܦ����
