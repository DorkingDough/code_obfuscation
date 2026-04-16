# C code_obfuscation
This code is primal right now. It has a lot of bugs is not well coded and is in general unpractical for anybody else.
If people are interested PLEASE contact me trough the issues tab. It is not because i was too lazy to fix these issues for myself that i will not change them for other people.
If at least 1 person asks me if I can add this or remove that or in general just fix things I WILL. With that said PLEASE read trough this artical as it is crucial for current use of the code

This is a C tested code obfuscator (should work for C++ but i have only tested it on c programms). It has 3 levels of code obfuscation which consise of :
1.comment removal
2.variable name obfuscation 
3.putting the whole code on 1 line (after the #inlcude , #define ...)

This of course comes with a few drawbacks that are fixable. Howeve you should take them into consideration (i wont fix it if nobody except me uses my code SO KEEP ME UPDATED)


# Drawbacks (that I was too lazy to fix + these bugs dont bother me)
----------------------------------------------------------------------------
1.If a pointer is declared like such int** it WILL NOT work: The obfuscator detects variables by checking the word after the data type because the ** are against the int IT WILL NOT GET DETECTED.
  again this is fixable just please let me know if i have to work on it.
  
2.The code wont work with structs well and a lot of issues will come from it : 
  2.1. The program does not recognize structs defined as "struct { #variables }name" instead you should do "struct name { variables }".
  2.2. The code wont obfuscate the name of the variable defined in main() : "struct name1 name2" name1 will get scrambled but not name2

3.Short variable names ARE NOT recommended. This is because if you have the name of a variable inside another variable IT WILL NOT WORK (you wont get any errors but the code wont compile)
  so: if a var is named user you cannot have another named user_name BUT you can however have 2 variables named user_name and user_username (this is because the obfuscator will not obfuscate them twice as he   vieuws them as seperate)

4.every # should be defined in the beginning of the code BEFORE ANYTHING ELSE (this include #include, #define, ....) ALSO dont put spaces between #include and <> and you will have to manually seperate the #define and the following variable (that is really simple to do and saves me a lot of time)


I know my program is kind of hard to read and coded like shit (but it is a personal project so if only i can read it it's not a problem) BUT there are no functionning c obfuscators out there (not that i know of at least) so if enough people are interested in making it more maintainable / more general PLEASE let me know and i'll work right on it.

To contact me or aks me anything about the code please post an issue i'll look into it around once every week and will keep you guys updated.
ENJOY.
