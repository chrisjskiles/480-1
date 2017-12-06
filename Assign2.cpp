#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	pid_t = pid;
	
	cerr << "I am the original process. My pid is " << getpid() << " and the pid of my parent is " 
		 << getppid() << ". Now I am calling fork." << endl;
	
	pid = fork();
	if (pid == -1) {
		cerr << "The first fork failed.";
		exit(-1);
	}
	
	if (pid == 0) {
		cerr << "I am the child process. My pid is " << getpid() << " and the pid of my parent is " 
			 << getppid() << ". Now I am calling fork." << endl;
			 
		pid = fork();
		if (pid == -1) {
			cerr << "The second fork failed";
			exit(-1);
		}
		
		if (pid == 0) {
			cerr << "I am the grandchild process. My pid is " << getpid()
				 << " and the pid of my parent is " << getppid() << endl;
				 
			cerr << "Exiting grandchild..."
			
			exit(0);
		}
		
		else {
			cerr << "I am the child process. My pid is " << getpid() << " and the pid of my parent is " 
				 << getppid() << ". Now I am calling fork." << endl;
				 
			wait(0);
			
			cerr << "Exiting the child process...";
			
			exit(0);
		}
	}
	
	else () {
		cerr << "I am the original process. My pid is " << getpid() << " and the pid of my parent is " 
			 << getppid() << ". Now I am calling fork." << endl;
			 
		sleep(2);
		
		cerr << "Original process calling ps." << endl;
		system(ps);
		
		wait(0);
		
		cerr << "Exiting original process...";
		exit(0);
	}
	
	return(0);
}
