//4. Viết chương trình nhập vào một ngày. Tìm ngày kế tiếp và xuất kết quả.

#include <iostream>

using namespace std;

bool Namnhuan(int year)
{
    if ((year%400==0)||(year%4==0&&year%100!=0))
        return true;
    return false;
}

int main()
{
    int d,m,y;
    cout<<"Nhap ngay: ";
    cin>>d;
    cout<<"Nhap thang: ";
    cin>>m;
    cout<<"Nhap nam: ";
    cin>>y;
    cout<<"Ngay ke tiep: ";
    switch (m)
    {
        case 2:
            if ((d==29)||(Namnhuan(y)==false&&d==28))
            {
                cout<<1<<"/"<<3<<"/"<<y;
                break;
            }
        case 12:
            if (d==31)
            {
                cout<<1<<"/"<<1<<"/"<<y+1;
                break;
            }
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (d==31)
            {
                cout<<1<<"/"<<m+1<<"/"<<y;
                break;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            if (d==30)
            {
                cout<<1<<"/"<<m+1<<y;
                break;
            }
        default:
            cout<<d+1<<"/"<<m<<"/"<<y;
    }
    
    return 0;
}