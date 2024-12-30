#include <stdio.h>
#include <signal.h>

void sigint_handler(int signum) {
    printf("SIGINT signal received.\n");
    
    
    sigset_t mask;
    sigemptyset(&mask);
    sigaddset(&mask, SIGTERM);
    sigprocmask(SIG_BLOCK, &mask, NULL);
    

    sleep(5);

    sigprocmask(SIG_UNBLOCK, &mask, NULL);
    
    printf("SIGINT signal handled.\n");
}

void sigterm_handler(int signum) {
    printf("SIGTERM signal received.\n");
}

int main() {
    
    signal(SIGINT, sigint_handler);
    
    signal(SIGTERM, sigterm_handler);
    
    
    while (1) {
        
    }
    
    return 0;
}
