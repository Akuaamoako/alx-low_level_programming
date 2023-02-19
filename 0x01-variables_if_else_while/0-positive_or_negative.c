#include <stdlib.h>
#include <time.h>
#include <iostream>

int main() {
	  srand(time(NULL));
	    int n = rand() - RAND_MAX / 2;
	      
	      std::cout << n << " ";
	        if (n > 0) {
			    std::cout << "is positive" << std::endl;
			      } else if (n == 0) {
				          std::cout << "is zero" << std::endl;
					    } else {
						        std::cout << "is negative" << std::endl;
							  }
		  return 0;
}
