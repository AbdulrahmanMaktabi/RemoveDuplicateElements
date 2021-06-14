#include <iostream>
using namespace std;

int main(){

    int arr[8] = {1 , 5 , 2 , 0 , 0 , 3 , 3 , 5};
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    int newArrLen = 0;
    int index;
    bool isContainZero = false;

    for (int i=0; i<arrLen; i++){
        if (arr[i] == 0){
            isContainZero = true;
            newArrLen ++;
            break;
        }
    }

    for (int i=0; i<arrLen-1; i++){
        for (int j=i+1; j<arrLen; j++){
            if (arr[i] == arr[j]){
                arr[j] = 0;
            }
        }
    }

    for (int i=0; i<arrLen; i++){
        if (arr[i] != 0 )
            newArrLen ++;
    }


    index = 0;
    int newArr[newArrLen];

    for (int i=0; i<arrLen; i++){
        if (arr[i] != 0){
            newArr[index] = arr[i];
            index ++;
        }
        if (isContainZero){
            newArr[index] = 0;
        }
    }

    cout << "New Array: " ;
    for (int i=0; i<newArrLen; i++){
        cout << newArr[i] << " ";
    }

    return 0;
}
