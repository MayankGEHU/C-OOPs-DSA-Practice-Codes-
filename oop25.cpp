#include <iostream>
#include <vector>
using namespace std;

class item
{
public:
    string i_name;
    int no;
    int price;
    int n;
    void setdata(void)
    {
        cout << "ENTER THE ITEM NAME: " << endl;
        cin >> i_name;
        cout << "ENTER THE ITEM NO:" << endl;
        cin >> no;
        cout << "ENTER THE PRICE:" << endl;
        cin >> price;
        cout << "ENTER THE NO OF ITEMS:" << endl;
        cin >> n;
    }
};

class discount : public item
{
public:
    void getdata(void)
    {
        cout << i_name << endl;
        cout << no << endl;
        cout << price << endl;
        cout << endl;
        int total = price * n;
        cout << "TOTAL: " << total << endl;
    }
};

int main()
{
    int num;

    cout << "ENTER THE NO OF PEOPLE: ";
    cin >> num;

    vector<discount> s(num);

    for (int i = 0; i < num; i++)
    {
        s[i].setdata();
        s[i].getdata();
        cout << endl;
    }

    return 0;
}

/*
Create class item containing item name number and price , enter .n. The number of items bought
.create discount class and  print the item name number price and total bill in proper order
*/