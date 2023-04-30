#include <iostream>
using namespace std;

int main(void) {

    int seat[10][6] = { };    //����� �¼��� �迭 ũ�� [10��][6��]
    int a, length, width, new_length, new_width;   //length=����, width=����

    do {    //ó�� ������ �ȳ��� ���-> do while�� ���
        cout << endl << "** ����� �¼� ���� �ý��� **" << endl;
        cout << "\n1. �ű� ����" << endl;
        cout << "2. ���� ����" << endl;
        cout << "3. ���α׷� ����" << endl << endl;
        cout << "��ȣ�� �Է��ϼ���: ";
        cin >> a;
        cout << endl;

        //1�� �Է��� ���
        if (a == 1) {
            cout << endl;
            cout << "1 2 3" << "\t" << "4 5 6" << endl;    //�¼� ��ȣ ���
            cout << "-------------" << endl;
            for (int i = 0; i < 10; i++) {    //i�� ����, j�� ����
                for (int j = 0; j < 6; j++) {
                    if (j == 3)    //��� ����� ���� j=3 �� ��, ������ ������ ���� ���
                        cout << "\t"; 
                    cout << seat[i][j] << " ";    //���� 10, ���� 6�� ����� �¼� ���
                }
                cout << endl;
            }
            cout << endl << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? "; 
            cin >> length >> width;    //����ڿ��� ������ �¼� �Է� ����

            if (seat[length - 1][width - 1] == 0) {    //����ڰ� �Է��� �¼��� ������� ��
                seat[length - 1][width - 1] = 1;
                cout << endl << "����Ǽ̽��ϴ�!" << endl;
            }
            else    //����ڰ� �Է��� �¼��� ������� ���� �� 
                cout << endl << "�̹� ����� �ڸ��Դϴ�." << endl;
        }
       
        //2�� �Է��� ���
        else if (a == 2) {
            cout << endl;
            cout << "1 2 3" << "\t" << "4 5 6" << endl;    //�¼� ��ȣ ���
            cout << "-------------" << endl;
            for (int i = 0; i < 10; i++) {    //i�� ����, j�� ����  
                for (int j = 0; j < 6; j++) {
                    if (j == 3)    //��� ����� ���� j=3 �� ��, ������ ������ ���� ���
                        cout << "\t";   
                    cout << seat[i][j] << " ";    //���� 10, ���� 6�� ����� �¼� ���
                }
                cout << endl;
            }
            cout << endl << "���� �¼��� �����ϰ��� �ϴ� �¼��� ���� ��, ��ȣ ������ �Է��� �ּ���: ";
            cin >> length >> width >> new_width >> new_length;    //����ڿ��� ���� �¼�, ������ �¼� �Է� ����
            
            if (seat[length - 1][width - 1] == 0)    //���� �¼��� ���� ���°� �ƴ� ��
                cout << endl << "�¼��� ��Ȯ�� �Է��� �ּ���." << endl;
            else    //���� �¼��� ���� ������ ��
                if (seat[new_length - 1][new_width - 1] == 0) {    //������ �¼��� ������� ��
                    seat[length - 1][width - 1] = 0;    //���� �¼� ���� ���
                    seat[new_length - 1][new_width - 1] = 1;    //������ �¼� ����
                    cout << endl << "������ ����Ǿ����ϴ�!" << endl;
                }
                else    //������ �¼��� ���� ������ ��
                    cout << endl << "�̹� ����� �¼��Դϴ�. �ٸ� �¼��� ������ �ּ���." << endl;  
        }

        //3�� �Է��� ���
        else if (a == 3) {
            cout << "���α׷��� �����մϴ�." << endl;
            break;    //���α׷� ����
        }

        //1,2,3 �� �ٸ� ���� �Է��� ���
        else { cout << "�ùٸ� ���ڸ� �Է��� �ּ���." << endl; }
    
    } while (a != 3); 
    
    return 0;
}