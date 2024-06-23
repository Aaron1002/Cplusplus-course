#include <iostream>
#include <string>
#include "HugeInteger.h"
using namespace std;

HugeInteger::HugeInteger(string inputValue){
    input(inputValue);
}

void HugeInteger::input(string inputValue){
    
    valueLength = inputValue.length();
    
    for (int i=39, j=inputValue.length()-1; i>=0, j>=0; i--, j--){
        digits[i] = inputValue[j] - '0';
    }
    
}

void HugeInteger::output(HugeInteger &total){
    if (lengthAfterCalculation != 0){
        for (int i=40-lengthAfterCalculation; i<40; i++){
            cout << total.digits[i];
        }
    }
    else if (lengthAfterCalculation == 0){
        cout << 0;
    }
    lengthAfterCalculation = 0;
    cout << endl;
    
}

void HugeInteger::add(HugeInteger &num2, HugeInteger &total){
    
    // 清空儲存格
    for (int i=0; i<40; i++){
        total.digits[i] = 0;
    }
    
    // 判斷哪個integer的位數比較大
    if (valueLength >= num2.valueLength){
        largerLength = valueLength;
    }
    else{
        largerLength = num2.valueLength;
    }
    
    // 相加
    for (int i=39; i>=39-largerLength; i--){
        total.digits[i] += digits[i] + num2.digits[i];
    }
    
    // 進位處理
    for (int i=39; i>=0; i--){
        if (total.digits[i] >= 10){
            total.digits[i] = total.digits[i] % 10;
            total.digits[i-1] += 1;
        }
    }    
    
    // 算相加後的位數
    for (int i=0; i<40; i++){
        if (total.digits[i] > 0){
            lengthAfterCalculation = 40 - i;   
            break;
        }
    }

}

void HugeInteger::beforeSubtract(HugeInteger &num2){
    if (valueLength > num2.valueLength){
        largerInteger = 1;
    }
    else if (valueLength == num2.valueLength and digits[40-valueLength] > num2.digits[40-num2.valueLength]){
        largerInteger = 1;
    }
    else if (valueLength < num2.valueLength){
        largerInteger = 2;
    }
    else if (valueLength == num2.valueLength and digits[40-valueLength] < num2.digits[40-num2.valueLength]){
        largerInteger = 2;
    }
    else if (valueLength == num2.valueLength and digits[40-valueLength] == num2.digits[40-num2.valueLength]){
        largerInteger = 0;
    }
  
}

void HugeInteger::subtract(HugeInteger &num2, HugeInteger &total){
    
    // 清空儲存格
    for (int i=0; i<40; i++){
        total.digits[i] = 0;
    }
    
    // 相減且做借位處理
    beforeSubtract(num2);
        // num1大
    if (largerInteger == 1 or largerInteger == 0){
        
        int temp[40];
        for (int i=0; i<40; i++){
            temp[i] = digits[i];
        }
        
        for (int i=39; i>39-largerLength; i--){
            if (temp[i] - num2.digits[i] < 0){
                total.digits[i] = temp[i] + 10 - num2.digits[i];
                temp[i-1] -= 1;
            }
            else if (temp[i] - num2.digits[i] >= 0){
                total.digits[i] = temp[i] - num2.digits[i]; 
            }
        }
    
    }
        // num2大
    else if (largerInteger == 2){
        
        int temp[40];
        for (int i=0; i<40; i++){
            temp[i] = num2.digits[i];
        }
        
        for (int i=39; i>39-largerLength; i--){
            if (temp[i] - digits[i] < 0){
                total.digits[i] = temp[i] + 10 - digits[i];
                temp[i-1] -= 1;
            }
            else if (temp[i] - digits[i] >= 0){
                total.digits[i] = temp[i] - digits[i];
            }
        }
        
    }
    
    // 算相減後的位數
    for (int i=0; i<40; i++){
        if (total.digits[i] > 0){
            lengthAfterCalculation = 40 - i;   
            break;
        }
    }

}

void HugeInteger::multiply(HugeInteger &num2, HugeInteger &total){
    
    // 清空儲存格
    for (int i=0; i<40; i++){
        total.digits[i] = 0;
    }
    
    // num1 * num2
    int k = 39;
    for (int i=39; i>=40-num2.valueLength; i--){
        k = i;
        for (int j=39; j>=40-valueLength; j--){
            total.digits[k] += digits[j] * num2.digits[i];
            
            // 進位處理
            if (total.digits[k] >= 10){
                total.digits[k-1] += total.digits[k] / 10;
                total.digits[k] %= 10;
            }
            k--;
        }    
        
    }

    // 算相乘後的位數
    for (int i=0; i<40; i++){
        if (total.digits[i] > 0){
            lengthAfterCalculation = 40 - i;   
            break;
        }
    }
    
}

void HugeInteger::divide(HugeInteger &num2, HugeInteger &total){
    
    // 清空儲存格
    for (int i=0; i<40; i++){
        total.digits[i] = 0;
    }
    

}

void HugeInteger::modulus(HugeInteger &num2, HugeInteger &total){
    
    // 清空儲存格
    for (int i=0; i<40; i++){
        total.digits[i] = 0;
    }
    
    
    
}

void HugeInteger::isEqualTo(HugeInteger &num2){
    for (int i=0; i<40; i++){
        if (digits[i] == num2.digits[i]){
            equalCounter++;
            if (equalCounter == 40){
                cout << "True" << endl;
                break;
            }
        }
        else if (digits[i] != num2.digits[i]){
            cout << "False" << endl;
            break;
        }
    }

}

void HugeInteger::isNotEqualTo(){
    if (equalCounter == 40){
        cout << "False" << endl;
    } 
    else{
        cout << "True" << endl;
    }

}

void HugeInteger::isGreaterThan(){
    if (largerInteger == 1){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

}

void HugeInteger::isLessThan(){
    if (largerInteger == 1 or largerInteger == 0){
        cout << "False" << endl;
    }
    else{
        cout << "True" << endl;
    }

}

void HugeInteger::isGreaterThanOrEqualTo(){
    if (largerInteger == 1 or largerInteger == 0){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    
}

void HugeInteger::isLessThanOrEqualTo(){
    if (largerInteger == 2 or largerInteger == 0){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

}

void HugeInteger::isZero(){
    for (int i=0; i<40; i++){
        if (digits[i] != 0){
            cout << "False" << endl;
            break;
        }
        zeroCounter++;
    }
    if (zeroCounter == 40){
        cout << "True" << endl;
    }
    
}
