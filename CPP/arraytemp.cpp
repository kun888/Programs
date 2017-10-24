#include<iostream>
using namespace std;
template<class t>
class number
    {
     t arr[100];
    public:
  void set()
      {
      for(int i=0;i<5;i++)
      cin>>arr[i];
  }
    int max()
        {
        for(int i=0;i<5;i++)
          {
            if(arr[0]<arr[i])
         {
                arr[0]=arr[i];
                return arr[0];
        }
            else
                {
                return arr[0];
            }

        }
    }
};
int main()
{

    number<int>obj1;
    number<float>obj2;
    obj1.set();
    obj2.set();
    cout<<obj1.max()<<endl;
    cout<<obj2.max();
}
