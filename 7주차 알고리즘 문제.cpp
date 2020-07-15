#include <iostream>
using namespace std;

void main()
{
    int num; // 수열 길이
    int temp; // 숫자 교환할때 저장해놓을 임시 
    int listnumber = 0; // 배열 위치(순서)를 임시로 저장할 함수
    int list[100];

    cout << "수열의 길이를 입력하세요 : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> list[i];
    }

    cout << endl << "선택정렬 과정" << endl;

    for (int k = 0; k < num - 1; k++)
    {
        listnumber = k; // 배열 순서를 일단 k로 저장한다.
        for (int l = k + 1; l < num; l++)
        {
            if (list[l] < list[listnumber])  //list[listnumber]이 기준이 되어 list[l]을 하나씩 검사한다.
            {
                listnumber = l; //처음에 저장해둔 list[listnumber=k]보다 작으면 listnumber을 l로 저장한ㄷ.
            }
        }
        temp = list[listnumber]; //최소값 저장 변수에 일단 list[listnumber=l]을 저장해둠
        list[listnumber] = list[k];//그리고 최소값이 있는 위치에 list[k]를 저장한다.-->조금 전까지 최소값이었던 수
        list[k] = temp;// 좀 전까지 최소값이 있던 배열 위치에 최소값을 대입시켜 순서를 바꾼다.

        for (int q = 0; q < num; q++) //그리고 for문을 사용해서 선택정렬을 한번 시행할때마다 결과를 출력시킴
        {
            cout << list[q] << "  ";
        }
        cout << endl;
    }
}
