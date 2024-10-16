
#include <stdio.h>
#include <string.h>

int check (char* s){

        int count[26] = { 0 };
        int counter = 0;
        int los = strlen(s);


        for (size_t i = 0+j; i <= los-j; i++) {
            count[s[i] - 'a']++;

            for (size_t m = 0; m < 26; m++) {
                if (count[m] >= 2) {

                    return counter;
                }
            }
            counter++;
        }
    
}

int lengthOfLongestSubstring(char* s) {
    int solution = 0;


    for (size_t j = 0; j < los; j++) {


        // if (solution < counter) {
        //     solution = counter;
        // }
    }
    printf("\nsolution: %d", solution);
    return solution;
}



int main() {
    char s[] = "pwwkew";
    lengthOfLongestSubstring(s);
    return 1;

}
