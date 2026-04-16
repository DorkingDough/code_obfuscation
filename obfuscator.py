#This code will protect C coded files by making them less readable. I will be adjusting this files capability's the more time goes on this is why i am planning on dividing this code in "phases" the higher the number of the phase the harder it will be to read this codethere will always be MAX x files created (depending on the amout of phases i make). so if i select phase 2 there will be a file 1 and 2 BUT not 3.

import os
import random
import copy
import time
def one(inp, out):#this removes all comments (simplest code protection)
    result = ''
    writer = open(out, "w")
    with open(inp, "r", encoding='UTF-8') as file:
        while True:
            char = file.read(1) 
            if char == '/':#checks if there is a double slash (comment) and just ignores it
                char = file.read(1)
                if char == '/':
                    while char != '\n':
                        char = file.read(1)
                elif char == '*':
                    while True:
                        char = file.read(1)
                        if char == '/':
                            char = file.read(1)
                            if char == '\n':
                                break
                            else:
                                continue
                
                else:
                    file.seek(file.tell() - 2)
                    char = file.read(1)
                    result += char
                    result.rstrip('\n')
                    continue

            elif char == '"':#cant mix "" and '' with each other
                result += char
                result.rstrip('\n')
                char = file.read(1)

                while char != '"':
                    result += char
                    result.rstrip('\n')
                    char = file.read(1)
#checks if there are no quotes (so it does not remove // in quotes
            elif char == "'":#cant mix "" and '' with each other
                result += char
                result.rstrip('\n')
                char = file.read(1)

                while char != "'":
                    result += char
                    result.rstrip('\n')
                    char = file.read(1)

            elif char == '':#EOF
                break

            result += char
            result.rstrip('\n')
        writer.write(result)
        writer.close()

def second(out):
    data_types = ["bool", "char", "signed", "unsigned", "short", "long", "int", "float", "double", "void", "static", "const", 
                  "struct", "DIR", "FILE", "#define", "typdef"]
    to_be_skipped = ["*", "&"] #these characters can come after a data type but should not be replaced as they are integral
    turnoffs = ["(", ")", "{", "}", "[", "]", ";"] #if a variable type gives back a parentheses it means the switch should be back to 0
    var = []
    switch = 0 #this will be used to check if we find a data type this could be a bool but i prefer 1 or 0
    polished_var = []

    first = open(out, "r")
    tobe_processed = first.read()
    splitter = tobe_processed.split() 
    for word in splitter: 
        if word in data_types:
            switch = 1
        elif switch == 1 and word not in data_types and word not in turnoffs :
            switch = 0
            var.append(word)
        elif switch == 1 and word in turnoffs:
            switch = 0
        #this dumps all variables in an array. later it needs to be treated so only the variable gets changed (and not pointers or parenthaseses)
    
    #remove the noise from var
    n = 0
    subn = 0
    for brute_var in var:
        tester = ''
        tester = var[n]
        adder = ''
        if tester[subn] in to_be_skipped:
            while tester[subn] in to_be_skipped:
                subn += 1
        while subn < len(tester) and tester[subn] not in turnoffs:
            adder += tester[subn]
            subn += 1
        n += 1
        subn = 0
        polished_var.append(adder)

    #now that we have a clean variable list we can create an alternative more chaotic list
    pool = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm','n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
            'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
            'W', 'X', 'Y', 'Z']
    final_variables = []
    for elements in polished_var:
        adder = ''
        for i in range(random.randint(100, 100)):       
            selected = random.choice(pool)
            adder += selected
        final_variables.append(adder)

    #this replaces the old vars with new ones 
    print(f"\nthese are your variables:    \n \n{polished_var}\n\n  if the programm cannot compile it would be a good idea to change them. Having variables containing capital words (ex size is in sizeoff) will result in "
    "the programm not working properly. This is because the obfuscator is very litteral and does not care (the only exceptions are main and i) this problem is preventable by making a script that checks these words but it is simpler"
    "for me to display this and pray you are not a fucking idiot.\n")
    #writes changes to a compilable file
    numer = 0
    while numer < len(polished_var):
        final = open(out, "r")
        tobe_processed = final.read()
        final.close()

        #checks if the words are not i or main
        if polished_var[numer] == "i" or polished_var[numer] == "main":
            numer += 1
            if polished_var[numer] == "i" or polished_var[numer] == "main":
                numer += 1
            else:
                continue
        obfusc2 = tobe_processed.replace(polished_var[numer], final_variables[numer])
        numer += 1
        final_writer = open(out, "w")
        final_writer.write(obfusc2)
        final_writer.close()
    return final_variables
    

def third(out, array):#removes space and puts everything on 1 line
    wrote = ''
    fixer = ''
    n = 0 #this will be the count to know where to start
    file = open(out, "r")
    skipper = file.read(1)
    n += 1
    checkers = ['}', ')', ']', ';', '>'] #i have forgotten a few things probably BUT i can add em

    full_text = file.read()
    splitted_text = full_text.split()
    for i in range(len(splitted_text)):
        arranger = splitted_text[i]
        arranger.rstrip('\n')
        wrote += arranger
    file.close()
    lastend = open("temp.c", "w")#making a temporary file to be processed further
    lastend.write(wrote)
    lastend.close()

    anotherone = open("temp.c", "r")
    procesmore = anotherone.read(1)
    adder = ''
    while procesmore == "#":
        adder += procesmore
        while True:
            procesmore = anotherone.read(1)
            if procesmore in checkers:
                adder += procesmore + '\n'
                break
            adder += procesmore
        procesmore = anotherone.read(1)

    anotherone.close()

    #same as here above HOWEVER here i skip the # instead of registering it.
    lesserone = open("temp.c", "r")
    processless = lesserone.read(1)
    lesser = ''
    while processless == "#":
        while processless not in checkers:
            processless = lesserone.read(1)
        processless = lesserone.read(1)

    lesserone.seek(lesserone.tell() - 1)
    while processless != '':
        processless = lesserone.read(1)
        lesser += processless

    need_space = ["inti", "elseif", "intmain", "return", "intla"]
    gotten_space = ["int i", "else if", "int main", "return ", "int la"]
    for i in range(len(array)):
        need_space.append(array[i])
        appender = " " + array[i]
        gotten_space.append(appender)
    for i in range(len(need_space)):
        lesser = lesser.replace(need_space[i], gotten_space[i])

    falseend = open(out, 'w')
    falseend.write(adder)
    falseend.close()
    trueend = open(out, "a")
    trueend.write(lesser)
    trueend.close()
    os.remove("temp.c")


#main() {
path = str(input("please give te full path for the file you want to protect:    "))
output = str(input("please specify the full path for the resulted file:    "))
difficulty = int(input("chose level of protectiveness (the higher the more protective) [1, 2 3] press 0 to exit:    "))
while difficulty != 0:
    if difficulty == 1:
        one(path, output)
        break
    elif difficulty == 2:
        one(path, output)
        second(output)
        break
    elif difficulty == 3:
        one(path, output)
        lists = second(output)
        print("this programm is far from done and if you want i would be happy to upgrade it but for now it satifies me so i'll leave it 'raw'")
        third(output, lists)
        break
    else:
        print("invalid choice please try again (select between 1, 2 or 3)")
        difficulty = int(input("chose level of protectiveness:  "))
#}
