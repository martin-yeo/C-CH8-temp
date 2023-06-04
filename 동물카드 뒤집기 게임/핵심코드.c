#include <stdio.h>
#include <time.h> // ��� ���� �߰�
#include <stdlib.h> // ��� ���� �߰�

// ��������
int arrayAnimal[4][5]; // ī�� ���� �迭(ī�� 20��)
char* strAnimal[10] = { "������", "�ϸ�", "������", "�����", "����", "�ڳ���", "�⸰", "��Ÿ", "Ÿ��", "ȣ����" };
int checkAnimal[4][5]; // ī�� �޸�, �ո� Ȯ�� �迭

// �Լ� ����
void initAnimalArray();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimals();
void printQuestion();
int foundAllAnimals();

int main(void) {
    srand(time(NULL)); // ���� �ʱ�ȭ
    initAnimalArray(); // ī�� ���� �迭 �ʱ�ȭ
    shuffleAnimal(); // ī�� ����
    int failCount = 0; // �� ���� Ƚ��

    printAnimals(); // ī�� ���� ��� �Լ� ȣ��

    while (1) {
        int select1 = 0; // ����ڰ� ������ ù ��° ��ȣ ���� 
        int select2 = 0; // ����ڰ� ������ �� ��° ��ȣ ���� 
        printQuestion(); // ���� ��� �Լ� ȣ��
        printf("\n������ ī�� 2���� ������.(��: 12 4) -> ");
        scanf_s("%d %d", &select1, &select2); // ī�� ��ȣ �Է¹ޱ�
        if (select1 == select2) { // ���� ī�� ���� �� ��ȿ ó��
            continue; // �ݺ��� ���� �������� ���ư���
        }
        // �Է¹��� ī�� ��ȣ�� x, y ��ǥ�� ��ȯ
        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);
        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);
        
        // �� ī�尡 ���� �����̰� �޸��� ���
        if ( /*ä���ֱ�*/) {
            printf("\n\n����! %s �߰�\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);



        }
        else { // �� ī�尡 �ٸ� �����̰ų� �ո��� ���



        }
        if (foundAllAnimals() == 1) { // ��� ������ ã�Ҵ��� ����, 1 : ��, 0 : ����
            printf("\n\n�����մϴ�! ��� ������ �� ã�ҽ��ϴ�.\n");
            printf("�� %d�� �����߽��ϴ�.\n", failCount);
            break;
        }
    }
    return 0;
}

// ī�� ���� �迭 �ʱ�ȭ �Լ� 
void initAnimalArray() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            arrayAnimal[i][j] = -1; // ī�� �޸� ����
        }
    }
}

// ī�� ���� �Լ� 
void shuffleAnimal() {



}

// ī�� �������� �� ���� ã�� �Լ�
int getEmptyPosition() {


}

// x ��ǥ ��ȯ �Լ� 
int conv_pos_x(int x) {


}

// y ��ǥ ��ȯ �Լ�
int conv_pos_y(int y) {


}


// ���� ��ġ ��� �Լ� 
void printAnimals() {


}

// ī�� ���� ��� �Լ� 
void printQuestion() {



}

// ���� ���� Ȯ�� �Լ� 
int foundAllAnimals() {



}
