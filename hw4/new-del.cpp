#include <iostream>     
#include <cstring>
using namespace std;

const int DIRECTORY_SIZE = 5; 

char *phoneNumbers[DIRECTORY_SIZE] = {0};

const char *names[DIRECTORY_SIZE] = {"Alice", "Bob", "Charlie", "David", "Eve"};

void initializeDirectory(const char* names[], char* phoneNumbers[], int directorySize);
void printDirectory(const char* names[], char* const phoneNumbers[], int directorySize);
void updatePhoneNumber(const char* names[], char* phoneNumbers[], int directorySize, const char* name, const char* newNumber);
void cleanUp(char* phoneNumbers[], int directorySize);

int main() {
    
    // 獲取當前names內elements個數
    int directorySize = 0;
    for (int i=0; i<DIRECTORY_SIZE; i++){
        if (names[i] != 0)
            directorySize++;
    }
     
    // 創造放電話號碼的空間 
    for (int i=0; i<directorySize; i++){
        phoneNumbers[i] = new char[14];
    }
    
    initializeDirectory(names, phoneNumbers, directorySize);
    
    int option;
    cout << "Update phone number(enter 0) \nLook up the directory(enter 1): ";
    cin >> option;
    cin.ignore();
    
    if (!option){
        
        char name_search[80];
        char newNumber[14];
        
        cout << "Whose phone number do you want to update? : ";
        cin.getline(name_search, 80, '\n');
        
        int find_counter = 0;
        for (const char **name_ptr = names; *name_ptr; name_ptr++){
            
            if (!strcmp(*name_ptr, name_search)){
               find_counter++;
            }   
            
        }
        if (!find_counter){
            cout << "No " << name_search << " in the directory." << endl;
            return 0;
        }
        else{
            cout << "What's the new number?: ";
            cin.getline(newNumber, 14, '\n');
        }
        
        updatePhoneNumber(names, phoneNumbers, directorySize, name_search, newNumber);
        printDirectory(names, phoneNumbers, directorySize);
    
    }
    else if (option){
        printDirectory(names, phoneNumbers, directorySize);
    }
    
    cleanUp(phoneNumbers, directorySize);
    
 return 0;
}

void initializeDirectory(const char* names[], char* phoneNumbers[], int directorySize){
    
    for (int i=0; i<directorySize; i++){
        strcpy(phoneNumbers[i], "000-000-0000");
    }
    
}

void printDirectory(const char* names[], char* const phoneNumbers[], int directorySize){
    
    int i = 0;
    
    cout << endl;
    for (const char **nptr=names; *nptr; nptr++){
        cout << *nptr << ": " << phoneNumbers[i] << endl;
        i++;
    }
    
}

void updatePhoneNumber(const char* names[], char* phoneNumbers[], int directorySize, const char* name, const char* newNumber){
    
    for (int i=0; i<directorySize; i++){
        if (!strcmp(names[i], name)){
            
            delete[] phoneNumbers[i];
            phoneNumbers[i] = new char[14];
            
            strcpy(phoneNumbers[i], newNumber);
            break;
        }
    }
    
}

void cleanUp(char* phoneNumbers[], int directorySize){
    
    // deallocate memory
    for (int i=0; i<directorySize; i++){
        delete[] phoneNumbers[i]; 
    }
    
}



