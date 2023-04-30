#include <iostream>
using namespace std;

int main(void) {

    int seat[10][6] = { };    //비행기 좌석의 배열 크기 [10행][6열]
    int a, length, width, new_length, new_width;   //length=세로, width=가로

    do {    //처음 무조건 안내문 출력-> do while문 사용
        cout << endl << "** 비행기 좌석 예약 시스템 **" << endl;
        cout << "\n1. 신규 예약" << endl;
        cout << "2. 예약 변경" << endl;
        cout << "3. 프로그램 종료" << endl << endl;
        cout << "번호를 입력하세요: ";
        cin >> a;
        cout << endl;

        //1을 입력한 경우
        if (a == 1) {
            cout << endl;
            cout << "1 2 3" << "\t" << "4 5 6" << endl;    //좌석 번호 출력
            cout << "-------------" << endl;
            for (int i = 0; i < 10; i++) {    //i는 세로, j는 가로
                for (int j = 0; j < 6; j++) {
                    if (j == 3)    //통로 출력을 위해 j=3 일 때, 일정한 간격의 공백 출력
                        cout << "\t"; 
                    cout << seat[i][j] << " ";    //세로 10, 가로 6인 비행기 좌석 출력
                }
                cout << endl;
            }
            cout << endl << "몇 열, 몇 번째 좌석을 예약하시겠습니까? "; 
            cin >> length >> width;    //사용자에게 예약할 좌석 입력 받음

            if (seat[length - 1][width - 1] == 0) {    //사용자가 입력한 좌석이 비어있을 때
                seat[length - 1][width - 1] = 1;
                cout << endl << "예약되셨습니다!" << endl;
            }
            else    //사용자가 입력한 좌석이 비어있지 않을 때 
                cout << endl << "이미 예약된 자리입니다." << endl;
        }
       
        //2를 입력한 경우
        else if (a == 2) {
            cout << endl;
            cout << "1 2 3" << "\t" << "4 5 6" << endl;    //좌석 번호 출력
            cout << "-------------" << endl;
            for (int i = 0; i < 10; i++) {    //i는 세로, j는 가로  
                for (int j = 0; j < 6; j++) {
                    if (j == 3)    //통로 출력을 위해 j=3 일 때, 일정한 간격의 공백 출력
                        cout << "\t";   
                    cout << seat[i][j] << " ";    //세로 10, 가로 6인 비행기 좌석 출력
                }
                cout << endl;
            }
            cout << endl << "현재 좌석과 변경하고자 하는 좌석을 각각 열, 번호 순서로 입력해 주세요: ";
            cin >> length >> width >> new_width >> new_length;    //사용자에게 현재 좌석, 예약할 좌석 입력 받음
            
            if (seat[length - 1][width - 1] == 0)    //현재 좌석이 예약 상태가 아닐 때
                cout << endl << "좌석을 정확히 입력해 주세요." << endl;
            else    //현재 좌석이 예약 상태일 때
                if (seat[new_length - 1][new_width - 1] == 0) {    //예약할 좌석이 비어있을 때
                    seat[length - 1][width - 1] = 0;    //현재 좌석 예약 취소
                    seat[new_length - 1][new_width - 1] = 1;    //예약할 좌석 예약
                    cout << endl << "예약이 변경되었습니다!" << endl;
                }
                else    //예약할 좌석이 예약 상태일 때
                    cout << endl << "이미 예약된 좌석입니다. 다른 좌석을 선택해 주세요." << endl;  
        }

        //3을 입력한 경우
        else if (a == 3) {
            cout << "프로그램을 종료합니다." << endl;
            break;    //프로그램 종료
        }

        //1,2,3 외 다른 수를 입력한 경우
        else { cout << "올바른 숫자를 입력해 주세요." << endl; }
    
    } while (a != 3); 
    
    return 0;
}