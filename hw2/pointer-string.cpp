#include <iostream>
#include <cstring>
using namespace std;

float countering_sentence(const char *);
float countering_word(const char *);
void countering_vowel(const char *, int *);
void analyzeText(const char *);

int main()
{
    // paragraph1 is an array
    const char paragraph1[] = "Hello, world! I am learning C++. Isn't it exciting?";
    const char paragraph2[] = "This is another paragraph. It contains more sentences! Oh, how fascinating.";

    analyzeText(paragraph1);    // pass address
    cout << "------------------------------------\n";
    analyzeText(paragraph2);

    return 0;
}

float countering_sentence(const char *paragraph){
    
    float sentence_counter = 0;
    
    for (const char *sptr=paragraph; *sptr; sptr++){
        if (*sptr == '.' or *sptr == '!' or *sptr == '?'){
            sentence_counter += 1;
        }
    } 
 
    return sentence_counter;
}

float countering_word(const char *paragraph){
     
    float word_counter = 0;
     
    for (const char *wptr=paragraph; *wptr; wptr++){
        if (*wptr == ' ' ){
            word_counter += 1;
        }
    } 
    word_counter += 1;

    return word_counter;
}

void countering_vowel(const char *paragraph, int *vowel){
    
    for (const char *vptr=paragraph; *vptr; vptr++){
        switch(*vptr){
            case 'a': case 'A':
                vowel[0] += 1;
                break;
            case 'e': case 'E':
                vowel[1] += 1;
                break;
            case 'i': case 'I':
                vowel[2] += 1;
                break;
            case 'o': case 'O':
                vowel[3] += 1;
                break;
            case 'u': case 'U':    
                vowel[4] += 1;
                break;
            default:
                break;
        }
    }

}

void analyzeText(const char *paragraph){
    
    const int sentenceCount = countering_sentence(paragraph);
    cout << sentenceCount << " sentences" << endl;
    
    const float average = countering_word(paragraph) / sentenceCount; 
    if ( (average - int(average)) >= 0.5 ){
        cout << "Average " << int(average)+1 << " words per sentence" << endl;   
    }
    else if ( (average - int(average)) < 0.5 ){
        cout << "Average " << int(average) << " words per sentence" << endl;   
    }
    
    int vowel[5] = {};
    countering_vowel(paragraph, vowel);
    for (int i=0; i < sizeof(vowel)/sizeof(vowel[0]); i++){
        switch(i){
            case 0:
                cout << vowel[i] << " a" << endl;
                break;
            case 1:
                cout << vowel[i] << " e" << endl;
                break;
            case 2:
                cout << vowel[i] << " i" << endl;
                break;
            case 3:
                cout << vowel[i] << " o" << endl;
                break;
            case 4:
                cout << vowel[i] << " u" << endl;
                break;
            default:
                break;
        }
    }
    
}
