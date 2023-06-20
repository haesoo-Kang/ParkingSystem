#include <stdio.h>

int main(void)
{
    //변수선언 
    int in_hour, in_min;   //입차시각 
    int out_hour, out_min;   //출차시각 
    int parking_m, money;   //주차시간, 요금 

    //입력
    printf("<<< 입력 >>>\n");
    printf("입차시각<hh:mm> ");
    scanf_s("%d:%d", &in_hour, &in_min);
    printf("출차시각<hh:mm> ");
    scanf_s("%d:%d", &out_hour, &out_min);
    printf("<<< 결과>>> \n");


    //계산하기
    parking_m = (out_hour * 60 + out_min) - (in_hour * 60 + in_min); //출차시각 - 입차시각
    if (parking_m < 0) {  //입차시각보다 출차시각이 큰 경우 음수이므로 
        printf("시간 입력 오류!\n");
        return 0;   //메인함수 종료 
    }
    money = parking_m / 30 * 2500;   //30분 단위로 2500원 추가 
    if (parking_m % 30) money += 2500;  // 주차시간이 1분 2분추가되어도  2500원 추가 

    //출력하기 
    printf("주차시간(분) : %d\n", parking_m);
    printf("주차요금(원) : %d\n", money);

    //메인함수 종료 
    return 0;
}
