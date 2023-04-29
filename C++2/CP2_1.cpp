#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
	int random, number_m, number_s;
	srand(time(NULL)); //완전 난수를 불러오기 위해 time 사용

	random = rand() % 100;

	cout << "랜덤한 수: " << random << endl; //난수 출력
	cout << "특정 배수 개수: "; //반복할 프로그램 횟수
	cin >> number_m;

	for (int i = 1; i < number_m + 1; i++) { //입력한 수만큼 프로그램 반복
		cout << "\n\n" << i << "번째 특정 배수: ";
		cin >> number_s; //입력 받은 배수
		cout << "<특정 배수만 출력하는 프로그램>" << endl;
		for (int j = 1; j <= random; j++) { //난수 이하까지 반복
			if (j % number_s != 0)
				continue; //배수가 아닌 수는 다시 반복문으로 돌아감 
			cout << j << " "; //배수만 출력
		}
		cout << "\n<특정 배수 제외 출력하는 프로그램>" << endl;
		for (int q = 1; q <= random; q++) {
			if (q % number_s == 0)
				continue; //배수는 다시 반복문으로 돌아감
			cout << q << " "; //배수가 아닌 수만 출력
		}

	}
}