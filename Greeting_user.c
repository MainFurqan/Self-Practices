# include <stdio.h>
// define function for Greeting of different person.
// For muslim person
void muslim() {
    printf("AOA! How are you. \n");
}
// for other Other person 
void other() {
    printf("Hy! How are you. \n");
}
// calling of function
int main() {
    char user;
    // Question to user
    printf("If, You are Muslim enter the 'M'. \n");
    printf("If not, Enter the first letter of your religion.");
    scanf("%c", &user);
    
    // condition for checking of user muslim or other
    if (user=='M') {
        muslim(); 
    } else {
        other();
    }
}