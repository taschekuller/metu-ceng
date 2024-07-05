import os
import filecmp
test_score=0
print("Please wait")
for outnum in range(0, 100, 10): #use 10 test cases
    os.system(f"g++ in/in{outnum+1}.cpp -w -o ./b.out")
    os.system(f"./b.out > myout1")
    is_same=filecmp.cmp(f"out/out{outnum+1}","./myout1")
    if(is_same):
        test_score+=1
        print(f"Passed {outnum+1}")
    else:
        print(f"Test case {outnum+1} is failed")
os.system(f"rm ./b.out ./myout1")
print(f"\n\nYour score is {test_score*10}/100\n")