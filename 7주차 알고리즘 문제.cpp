#include <iostream>
using namespace std;

void main()
{
    int num; // ���� ����
    int temp; // �ϴ� ���� ������ �־��������
    int listnumber = 0; // �迭 ��ġ(����)�� �ӽ÷� ������ �Լ�
    int list[100];

    cout << "������ ���̸� �Է��ϼ��� : ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> list[i];
    }

    cout << endl << "�������� ����" << endl;

    for (int k = 0; k < num - 1; k++)
    {
        listnumber = k; // �迭 ������ �ϴ� k�� �����Ѵ�.
        for (int l = k + 1; l < num; l++)
        {
            if (list[l] < list[listnumber])  //list[listnumber]�� ������ �Ǿ� list[l]�� �ϳ��� �˻��Ѵ�.
            {
                listnumber = l; //ó���� �����ص� list[listnumber=k]���� ������ listnumber�� l�� �����Ѥ�.
            }
        }
        temp = list[listnumber]; //�ּҰ� ���� ������ �ϴ� list[listnumber=l]�� �����ص�
        list[listnumber] = list[k];//�׸��� �ּҰ��� �ִ� ��ġ�� list[k]�� �����Ѵ�.-->���� ������ �ּҰ��̾��� ��
        list[k] = temp;// �� ������ �ּҰ��� �ִ� �迭 ��ġ�� �ּҰ��� ���Խ��� ������ �ٲ۴�.

        for (int q = 0; q < num; q++) //�׸��� for���� ����ؼ� ���������� �ѹ� �����Ҷ����� ����� ��½�Ŵ
        {
            cout << list[q] << "  ";
        }
        cout << endl;
    }
}