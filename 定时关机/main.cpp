#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

char MyCmd[1000];
int x, ctl;

void usage()
{
    cout << "********************************" << endl;
    cout << "           ��ʱ�ػ�����         " << endl;
    cout << "********************************" << endl;
    cout << endl;
    cout << "1  >>>>>>>> ���ùػ�ʱ��" << endl;
    cout << "0  >>>>>>>> ȡ���ػ�" << endl;
}

void shut()
{
    cin >> ctl;
    if(ctl == 1)
    {
        cout << "�������ʱʱ�䣨��λ�����ӣ�" << endl;
        cin >> x;
        x *= 60;
        sprintf(MyCmd, "shutdown -s -t %d", x);
        system(MyCmd);
    }
    else if(ctl == 0)
    {
        system("shutdown -a");
    }
}

int main()
{
    usage();    /*ʹ�÷���*/
    shut();     /*ʵ�ʳ���*/
    return 0;
}
