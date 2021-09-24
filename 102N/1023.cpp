#include <iostream>
using namespace std;

int main()
{

    int a , b;
    

    scanf("%d.%d", &a, &b);
    printf("%d\n%d", a, b);
    
    
    return 0;
}

// 기존 현준 풀이
#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;

    float b;
    cin >> b;

    scanf("%d.%f", &a, &b);
    printf("%d", &a);
    printf("%f",&b);
    
    return 0;
}
