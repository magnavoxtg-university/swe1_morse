#include <stdio.h>


//2D array to store the morse code for every character
static const char CHAR_TO_MORSE[128][8] = {
        "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "",
        "", "-.-.--", ".-..-.", "", "", "", "", ".----.",
        "-.--.", "-.--.-", "", "", "--..--", "-....-", ".-.-.-", "-..-.",
        "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...",
        "---..", "----.", "---...", "", "", "-...-", "", "..--..",
        ".--.-.", ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
        "....", "..", ".---", "-.-", ".-..", "--", "-.", "---",
        ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--",
        "-..-", "-.--", "--..", "", "", "", "", "..--.-",
        "", ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
        "....", "..", ".---", "-.-", ".-..", "--", "-.", "---",
        ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--",
        "-..-", "-.--", "--..", "", "", "", "", ""
};


int main() {
    //variable to for ascii code of character
    int ch;

    //converts ascii codes of characters to morse code
    while ( (ch=fgetc(stdin)) != EOF ) {
        printf("%s", CHAR_TO_MORSE[ch]);
    }

    return 0;
}