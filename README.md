## Task 3
# Arrays and strings

## Inseartion sort 
In this question an Inseartion sorting algorithm is implemented as you have seen in sorting algorithms. For those who do not remember or have not studied
Do not read Wikipedia Inseartion sort .

## strings
program that receives string and text as input and executes one of the following options:
A. Print all the lines in the text in which the string appears.
B. Prints all the words in the text that are similar to strings to the point of omitting one letter from the word.
For example: if not the following text and I am looking for the word 'cat'
```
cat b

this is a text file 
looking for the word cat
the program should print also cats
after cats cart and lcat are printed
the program shouldn't print 
the word caats
```
The program will print the words for option B:
```
cat
cats
cats
cart
lcat
```

And for option A printout:
```
cat a

this is a text file 
looking for the word cat
the program should print also cats
after cats cart and lcat are printed
the program shouldn't print 
the word caats
```
output
```
looking for the word cat
the program should print also cats
after cats cart and lcat are printed
```

input for the program
(./txtfind <input.txt) Redirect the input should be obtained from a file using
The format of the input file will look like this:
(B or a) followed by the search option (cat) in the first line will appear the search string
When a marks the first option comes will be printed the lines which the word cat appears there and b is
The second option is to print the cat-like words to the point of omitting one letter from the word.
