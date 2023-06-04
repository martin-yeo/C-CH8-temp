#include <stdio.h>
#include <time.h> // 헤더 파일 추가
#include <stdlib.h> // 헤더 파일 추가

// 전역변수
int arrayAnimal[4][5]; // 카드 지도 배열(카드 20장)
char* strAnimal[10] = { "원숭이", "하마", "강아지", "고양이", "돼지", "코끼리", "기린", "낙타", "타조", "호랑이" };
int checkAnimal[4][5]; // 카드 뒷면, 앞면 확인 배열

// 함수 선언
void initAnimalArray();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();

int main(void) {
    srand(time(NULL)); // 난수 초기화
    initAnimalArray(); // 카드 지도 배열 초기화
    shuffleAnimal(); // 카드 섞기
    int failCount = 0; // 총 실패 횟수

    printAnimals(); // 카드 지도 출력 함수 호출

    while (1) {
        int select1 = 0; // 사용자가 선택한 첫 번째 번호 저장 
        int select2 = 0; // 사용자가 선택한 두 번째 번호 저장 
        printQuestion(); // 문제 출력 함수 호출
        printf("\n뒤집을 카드 2장을 고르세요.(예: 12 4) -> ");
        scanf_s("%d %d", &select1, &select2); // 카드 번호 입력받기
        if (select1 == select2) { // 같은 카드 선택 시 무효 처리
            continue; // 반복문 시작 지점으로 돌아가기
        }
        // 입력받은 카드 번호를 x, y 좌표로 변환
        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);
        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);
        
        // 두 카드가 같은 동물이고 뒷면인 경우
        if ( /*채워넣기*/) {
            printf("\n\n빙고! %s 발견\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);



        }
        else { // 두 카드가 다른 동물이거나 앞면인 경우



        }
        if (foundAllAnimals() == 1) { // 모든 동물을 찾았는지 여부, 1 : 참, 0 : 거짓
            printf("\n\n축하합니다! 모든 동물을 다 찾았습니다.\n");
            printf("총 %d번 실패했습니다.\n", failCount);
            break;
        }
    }
    return 0;
}

// 카드 지도 배열 초기화 함수 
void initAnimalArray() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            arrayAnimal[i][j] = -1; // 카드 뒷면 설정
        }
    }
}

// 카드 섞기 함수 
void shuffleAnimal() {



}

// 카드 지도에서 빈 공간 찾기 함수
int getEmptyPosition() {


}

// x 좌표 변환 함수 
int conv_pos_x(int x) {


}

// y 좌표 변환 함수
int conv_pos_y(int y) {


}


// 동물 위치 출력 함수 
void printAnimals() {


}

// 카드 지도 출력 함수 
void printQuestion() {



}

// 게임 종료 확인 함수 
int foundAllAnimals() {



}
