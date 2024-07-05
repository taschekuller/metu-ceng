import os
import filecmp
test_score=0

for outnum in range(200):
    os.system(f"g++ in/in{outnum+1}.cpp -w -o ./b.out")
    os.system(f"./b.out > myout1")
    is_same=filecmp.cmp(f"out/out{outnum+1}","./myout1")
    if(is_same): #pass
        test_score+=1
os.system(f"rm ./b.out ./myout1")
score = test_score/2 

    
