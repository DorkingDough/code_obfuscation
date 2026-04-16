#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    int bEuyNXEKUPXhbjVXmSCbHkTCgAxjXrJEZkCXfRjOZPZYKQCtYkvQuIJuIMmFIUrQtJTKMYFRNsHzYTWIQuopCKKdfknHETfhPlpo = (int)time(NULL);
    srand(bEuyNXEKUPXhbjVXmSCbHkTCgAxjXrJEZkCXfRjOZPZYKQCtYkvQuIJuIMmFIUrQtJTKMYFRNsHzYTWIQuopCKKdfknHETfhPlpo);

    int vADjbrgVkTTktTAykBxwraPANvlGFvHelsBqrJHzgYRGskJupinwEXyebfOazzHtATnrfZCslKcrqdOKSwsdkkaiJfUgFEQpopXE = 0;
    int rvIHQZJrAerdGIMjSTeMjzZZkARbnSiSunlZHfEQPhGCfmTbPMoWHUHgWSTxVtuNERIkkbtAQSHxIzPkniFhMrHfsZwRpMRZopJP = 0;
    int AojKUPrWyyFvVdQbirtzVcMjtGzyZznKvrrBPOMcARmTSynyuUvSjZsVuglpLfZDodpwoPPBUERjnvPHTyPaOsvdOViBVAsIkEbr = 0; 

    printf("Rock(1) Paper(2) Scissors(3)\n");
    printf("Enter your choice (1-3): ");
    if (scanf("%d", &vADjbrgVkTTktTAykBxwraPANvlGFvHelsBqrJHzgYRGskJupinwEXyebfOazzHtATnrfZCslKcrqdOKSwsdkkaiJfUgFEQpopXE) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (vADjbrgVkTTktTAykBxwraPANvlGFvHelsBqrJHzgYRGskJupinwEXyebfOazzHtATnrfZCslKcrqdOKSwsdkkaiJfUgFEQpopXE < 1 || vADjbrgVkTTktTAykBxwraPANvlGFvHelsBqrJHzgYRGskJupinwEXyebfOazzHtATnrfZCslKcrqdOKSwsdkkaiJfUgFEQpopXE > 3) {
        printf("Choice out of range.\n");
        return 1;
    }

    rvIHQZJrAerdGIMjSTeMjzZZkARbnSiSunlZHfEQPhGCfmTbPMoWHUHgWSTxVtuNERIkkbtAQSHxIzPkniFhMrHfsZwRpMRZopJP = (rand() % 3) + 1;

    
    if (vADjbrgVkTTktTAykBxwraPANvlGFvHelsBqrJHzgYRGskJupinwEXyebfOazzHtATnrfZCslKcrqdOKSwsdkkaiJfUgFEQpopXE == rvIHQZJrAerdGIMjSTeMjzZZkARbnSiSunlZHfEQPhGCfmTbPMoWHUHgWSTxVtuNERIkkbtAQSHxIzPkniFhMrHfsZwRpMRZopJP) {
        AojKUPrWyyFvVdQbirtzVcMjtGzyZznKvrrBPOMcARmTSynyuUvSjZsVuglpLfZDodpwoPPBUERjnvPHTyPaOsvdOViBVAsIkEbr = 0;
    } else if ((vADjbrgVkTTktTAykBxwraPANvlGFvHelsBqrJHzgYRGskJupinwEXyebfOazzHtATnrfZCslKcrqdOKSwsdkkaiJfUgFEQpopXE == 1 && rvIHQZJrAerdGIMjSTeMjzZZkARbnSiSunlZHfEQPhGCfmTbPMoWHUHgWSTxVtuNERIkkbtAQSHxIzPkniFhMrHfsZwRpMRZopJP == 3) ||
        (vADjbrgVkTTktTAykBxwraPANvlGFvHelsBqrJHzgYRGskJupinwEXyebfOazzHtATnrfZCslKcrqdOKSwsdkkaiJfUgFEQpopXE == 2 && rvIHQZJrAerdGIMjSTeMjzZZkARbnSiSunlZHfEQPhGCfmTbPMoWHUHgWSTxVtuNERIkkbtAQSHxIzPkniFhMrHfsZwRpMRZopJP == 1) ||
        (vADjbrgVkTTktTAykBxwraPANvlGFvHelsBqrJHzgYRGskJupinwEXyebfOazzHtATnrfZCslKcrqdOKSwsdkkaiJfUgFEQpopXE == 3 && rvIHQZJrAerdGIMjSTeMjzZZkARbnSiSunlZHfEQPhGCfmTbPMoWHUHgWSTxVtuNERIkkbtAQSHxIzPkniFhMrHfsZwRpMRZopJP == 2)) {
        AojKUPrWyyFvVdQbirtzVcMjtGzyZznKvrrBPOMcARmTSynyuUvSjZsVuglpLfZDodpwoPPBUERjnvPHTyPaOsvdOViBVAsIkEbr = 1;
        } else {
            AojKUPrWyyFvVdQbirtzVcMjtGzyZznKvrrBPOMcARmTSynyuUvSjZsVuglpLfZDodpwoPPBUERjnvPHTyPaOsvdOViBVAsIkEbr = 2;
        }

        const char *AWeyUzNzaHjvjPkNCWiVjsiIIQOJgaJMidYocilBKYjPofvDuhaMcYoyOwFTwJWAVaHRHTZUTLFFhdMStvRiKGJWFOYlTcbuReRs = (vADjbrgVkTTktTAykBxwraPANvlGFvHelsBqrJHzgYRGskJupinwEXyebfOazzHtATnrfZCslKcrqdOKSwsdkkaiJfUgFEQpopXE == 1) ? "Rock" :
        (vADjbrgVkTTktTAykBxwraPANvlGFvHelsBqrJHzgYRGskJupinwEXyebfOazzHtATnrfZCslKcrqdOKSwsdkkaiJfUgFEQpopXE == 2) ? "Paper" : "Scissors";
    const char *eHiAYnVMFlITbVWZQaWeqEsyiOIAqBBAEbNdPCARnTkQYtkBBXoXYgLjshWcpANdHWgHefhQbSaoAtwYTUKavdVxchLXNkbiDpaN = (rvIHQZJrAerdGIMjSTeMjzZZkARbnSiSunlZHfEQPhGCfmTbPMoWHUHgWSTxVtuNERIkkbtAQSHxIzPkniFhMrHfsZwRpMRZopJP == 1) ? "Rock" :
    (rvIHQZJrAerdGIMjSTeMjzZZkARbnSiSunlZHfEQPhGCfmTbPMoWHUHgWSTxVtuNERIkkbtAQSHxIzPkniFhMrHfsZwRpMRZopJP == 2) ? "Paper" : "Scissors";

    printf("You chose: %s\n", AWeyUzNzaHjvjPkNCWiVjsiIIQOJgaJMidYocilBKYjPofvDuhaMcYoyOwFTwJWAVaHRHTZUTLFFhdMStvRiKGJWFOYlTcbuReRs);
    printf("Computer chose: %s\n", eHiAYnVMFlITbVWZQaWeqEsyiOIAqBBAEbNdPCARnTkQYtkBBXoXYgLjshWcpANdHWgHefhQbSaoAtwYTUKavdVxchLXNkbiDpaN);

    if (AojKUPrWyyFvVdQbirtzVcMjtGzyZznKvrrBPOMcARmTSynyuUvSjZsVuglpLfZDodpwoPPBUERjnvPHTyPaOsvdOViBVAsIkEbr == 0) {
        printf("Result: Tie.\n");
    } else if (AojKUPrWyyFvVdQbirtzVcMjtGzyZznKvrrBPOMcARmTSynyuUvSjZsVuglpLfZDodpwoPPBUERjnvPHTyPaOsvdOViBVAsIkEbr == 1) {
        printf("Result: You win!\n");
    } else {
        printf("Result: Computer wins.\n");
    }

    return 0;
}
