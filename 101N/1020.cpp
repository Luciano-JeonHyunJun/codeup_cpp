#include <iostream>
using namespace std;

int main()
{
    int front , back;
    scanf("%d-%d" , &front, &back );
    printf("%06d%07d" , front, back);

    return 0;
}



// %d 는 int 타입의 정수형을 표현합니다.
//변수 앞에 &를 붙이게 되면 이는 해당 변수의 주소를 가리킴
