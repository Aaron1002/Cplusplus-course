#include <iostream>
#include <cstring>
using namespace std;

const int directory_Size = 10;

const char *names[directory_Size] = { "John", "James", "Tom" };  // 看成二維陣列

const char *phoneNumbers[directory_Size] = { "0912345678", "0995638527", "0965748396" };

void printDirectory();
void findPhoneNumber(const char *name);
void updatePhoneNumber(const char *name, const char *newNumber);

int main ()
{

    int options;
    cout << "Search for the phone number (enter 0) \nupdate phone number(enter 1) \nlook up the directory(enter 2): ";
    cin >> options;
    cin.ignore();
    
    if (!options)
	{
        char name_search[80];
        
        cout << "Whose phone number do you want to search? : ";
        cin.getline(name_search, 80, '\n');
        
        int find_counter = 0;
        for (const char **name_ptr = names; *name_ptr; name_ptr++)
        {
            
            if (!strcmp(*name_ptr, name_search))
            {
               find_counter++;
            }   
        
        }
        if (!find_counter)
        {
            cout << "No " << name_search << " in the directory." << endl;
            return 0;
        }
        
        findPhoneNumber(name_search);
	}
    else if (options == 1)
    {
        char name[80];
        char newNumber[11];
        
        cout << "Whose phone number do you want to update?: ";
        cin.getline(name, 80, '\n');
        
        int find_counter = 0;
        for (const char **name_ptr = names; *name_ptr; name_ptr++)
        {
            
            if (!strcmp(*name_ptr, name))
            {
               find_counter++;
            }   
        
        }
        if (!find_counter)
        {
            cout << "No " << name << " in the directory." << endl;
            return 0;
        }
        
        cout << "New number: ";
        cin.getline(newNumber, 11, '\n');
        
        updatePhoneNumber(name, newNumber);  
	}
    else if (options == 2)
	{
        printDirectory();
	}

    return 0;
    
}

void printDirectory (){

    cout << endl;
    
    for (int i = 0; names; i++)
	{
        cout << *(names + i) << ": " << *(phoneNumbers + i) << endl;
	}

}

void findPhoneNumber (const char *name){
    
    cout << endl;

    const char **phone_ptr = phoneNumbers;

    for (const char **name_ptr = names; *name_ptr; name_ptr++)
	{
	    
	    if (!strcmp(*name_ptr, name))
		{
		    cout << name << ": " << *phone_ptr << " ";
		    break;
		}
	    phone_ptr++;
	    
	}

}

void updatePhoneNumber (const char *name, const char *newNumber){
    
    const char **phone_ptr = phoneNumbers;
    
    for (const char **name_ptr = names; *name_ptr; name_ptr++)
    {
        
        if (!strcmp(*name_ptr, name))
        {
            *phone_ptr = newNumber; 
            break;
        }    
        phone_ptr++;
        
    }    
    
    printDirectory();    
    
}

