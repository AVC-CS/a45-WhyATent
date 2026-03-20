//      **************************************************
//      Find the min, max among three values
//      Display three values in ascending order  min, other, max
//     **************************************************
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int min, max, med;
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    // TODO: Find min, max, and med among num1, num2, num3
    if (num1>num2){
        if (num2>num3){
            max=num1, med=num2, min=num3;
        }
        else{
            if(num1>num3){
                max=num1, med=num3, min=num2;
            }
            else{
                max=num3, med=num1, min=num2;
            }
        }
    }
    else{
        if (num1>num3){
            max=num2, med=num1, min=num3;
        }
        else{
            if (num2>num3){
                max=num2, med=num3, min=num1;
            }
            else{
                max=num3, med=num2, min=num1;
            }
        }
    }
    cout << min << " " << med << " " << max << endl;
}
