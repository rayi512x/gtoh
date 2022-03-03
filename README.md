# gtoh
Converts the letter G to H

# Building
    # Clone this repository
    git clone https://github.com/rayi512x/gtoh.git && cd gtoh
    
    # Build using g++ (you can also build it with clang++)
    g++ gtoh.cpp -o gtoh

# Usage
Read from arguments:

    ./gtoh 'Enter a sentence that contains the letter G'
or

    ./gtoh Enter a sentence that contains the letter G

Output: ```Enter a sentence that contains the letter H```

Bash pipe:

    cat document.txt | ./gtoh
