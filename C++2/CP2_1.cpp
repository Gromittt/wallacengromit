#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
	int random, number_m, number_s;
	srand(time(NULL)); //���� ������ �ҷ����� ���� time ���

	random = rand() % 100;

	cout << "������ ��: " << random << endl; //���� ���
	cout << "Ư�� ��� ����: "; //�ݺ��� ���α׷� Ƚ��
	cin >> number_m;

	for (int i = 1; i < number_m + 1; i++) { //�Է��� ����ŭ ���α׷� �ݺ�
		cout << "\n\n" << i << "��° Ư�� ���: ";
		cin >> number_s; //�Է� ���� ���
		cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;
		for (int j = 1; j <= random; j++) { //���� ���ϱ��� �ݺ�
			if (j % number_s != 0)
				continue; //����� �ƴ� ���� �ٽ� �ݺ������� ���ư� 
			cout << j << " "; //����� ���
		}
		cout << "\n<Ư�� ��� ���� ����ϴ� ���α׷�>" << endl;
		for (int q = 1; q <= random; q++) {
			if (q % number_s == 0)
				continue; //����� �ٽ� �ݺ������� ���ư�
			cout << q << " "; //����� �ƴ� ���� ���
		}

	}
}