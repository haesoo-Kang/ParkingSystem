#include <stdio.h>

int main(void)
{
    //�������� 
    int in_hour, in_min;   //�����ð� 
    int out_hour, out_min;   //�����ð� 
    int parking_m, money;   //�����ð�, ��� 

    //�Է�
    printf("<<< �Է� >>>\n");
    printf("�����ð�<hh:mm> ");
    scanf_s("%d:%d", &in_hour, &in_min);
    printf("�����ð�<hh:mm> ");
    scanf_s("%d:%d", &out_hour, &out_min);
    printf("<<< ���>>> \n");


    //����ϱ�
    parking_m = (out_hour * 60 + out_min) - (in_hour * 60 + in_min); //�����ð� - �����ð�
    if (parking_m < 0) {  //�����ð����� �����ð��� ū ��� �����̹Ƿ� 
        printf("�ð� �Է� ����!\n");
        return 0;   //�����Լ� ���� 
    }
    money = parking_m / 30 * 2500;   //30�� ������ 2500�� �߰� 
    if (parking_m % 30) money += 2500;  // �����ð��� 1�� 2���߰��Ǿ  2500�� �߰� 

    //����ϱ� 
    printf("�����ð�(��) : %d\n", parking_m);
    printf("�������(��) : %d\n", money);

    //�����Լ� ���� 
    return 0;
}
