 //linear search//
 #include <iostream>
using namespace std;
 class Linear
 {
    private:
    int a[10],loc,i,flag,key;
    public:
    void getdata()
    {
        cout << "Enter  elements of the array:" << endl;
        for(i = 0; i < 10; i++)
        cin >> a[i];
        cout << "Enter the element to be searched:" << endl;
        cin >> key;
    }
    void search()
    {
        flag = 0;
        for(i = 0; i < 10; i++)
        {
            if(a[i] == key)
            {
                loc = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout << "found at" << loc;
        else
            cout << "not found";
    }
 };
int main()
{
    Linear obj;
    obj.getdata();
    obj.search();
    return 0;
}