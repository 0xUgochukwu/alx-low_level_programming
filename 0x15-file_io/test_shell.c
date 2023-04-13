#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;

int main(void) {
	char *args[2];
	char command[100];
	pid_t pid;
	int status;

	while (1) {
		printf("$ ");
		fgets(command, sizeof(command), stdin);
		command[strcspn(command, "\n")] = '\0';
		args[0] = command;
		args[1] = NULL;

		pid = fork();
		if (pid == -1) {
			perror("fork");
			exit(1);
		}

		if (pid == 0) {
			execve(args[0], args, environ);
			perror("execve");
			exit(1);
		} else {
			wait(&status);
		}
	}
	return 0;
}

