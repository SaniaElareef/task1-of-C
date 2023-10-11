#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char username[20];
char password[20];

void registerUser() {
  printf("Enter username: ");
  scanf("%s", username);

  printf("Enter password: ");
  scanf("%s", password);

  // Save the username and password to a file.
}

void loginUser() {
  char inputUsername[20];
  char inputPassword[20];

  printf("Enter username: ");
  scanf("%s", inputUsername);

  printf("Enter password: ");
  scanf("%s", inputPassword);

  // Compare the input username and password with the stored username and password.
  if (strcmp(inputUsername, username) == 0 && strcmp(inputPassword, password) == 0) {
    printf("Login successful!\n");
  } else {
    printf("Login failed!\n");
  }
}

int main() {
  registerUser();
  loginUser();
  return 0;
}