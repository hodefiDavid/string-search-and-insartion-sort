//
// Created by david on 12/25/20.
//
#include <string.h>
#include <stdio.h>

#define WORD 30
#define LINE 256
#define ROW 256

int main(void) {
    char word[WORD] = {};
    char choice;
//get from the first line the specified word and the choice that the user choose
    fscanf(stdin, "%s %c", word, &choice);

//the first line deleted
    char c;
//quick way to delete the second row (empty row)
    fscanf(stdin, " %c", &c);
//char array that save the text that I got from the user as a char array
//initialize the array to '\0'
    char text[ROW][LINE] = {{'\0'}};
//indicators for the current row and the current line
    int row = 0, line = 0;


    switch (choice) {
        case 'a': {
            while (!feof(stdin)) {
                scanf("%c", &c);
                text[row][line] = c;
                line++;
                if (c == '\n') {
                    row++;
                    line = 0;
                }
            }
            int flag = 0;
            for (int r = 0; r < ROW; ++r) {
                for (int l = 0; l < LINE; ++l) {

                    if (text[r][l] == word[0]) {
                        int ll = l;
                        flag = 1;
                        for (int i = 0; i < strlen(word); ++i, ll++) {
                            if (text[r][ll] != word[i]) {
                                flag = 0;
                            }
                        }
                        if (flag == 1) {
                            for (int i = 0; i < LINE; ++i) {
                                c = text[r][i];
                                if (c != '\0') {
                                    printf("%c", c);
                                } else { break; }
                            }
                            r++;
                            l = 0;
                        }
                    }
                }
            }
            break;
        }

        case 'b': {
            char testing_word[WORD] = {};
            while (!feof(stdin)) {
                scanf("%s", testing_word);

                if (strlen(testing_word) < strlen(word) + 2 && strlen(testing_word) >= strlen(word)) {
                    int t_w_inx = 0;
                    int word_inx = 0;
                    int mistake = 0;
                    for (int i = 0; i < strlen(testing_word); ++i) {
                        if (testing_word[t_w_inx] == word[word_inx]) {
                            t_w_inx++;
                            word_inx++;
                        } else {
                            mistake++;
                            t_w_inx++;
                        }
                    }
                    if (mistake < 2) { printf("%s\n", testing_word); }
                }
            }

            break;
        }
        default:
            printf("please enter the word and a/b in the correct order");
    }


    return 0;
}

