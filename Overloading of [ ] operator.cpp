#include<iostream>
using namespace std;
class array
{
private:
 int a[10];
public:
 void insertdata(int index, int value)
 {  a[index]=value;  }
 int operator [](int index)
  { return(a[index]);}
};
int main()
{
array obj;
int i;
for(i=0;i<=9;i++)
 obj.insertdata(i,10*(i+1));
for(i=0;i<=9;i++)
 cout<<obj[i]<<" ";
return 0;
}
