# Attempt 1

![image](https://github.com/user-attachments/assets/9146e07d-0694-424e-ad20-7fab1df969f3)

## "&str" issue
char str when holds a string is constant ptr so when i put & infront of str it gives address of array instead of char to the first element of string array

## len in l()
len was not initialised in then l() func so it may cause garbage values to be incremented

## lower() return type issue
lower() func has return type set to char, so return expect "ONE" singular character but we wanted a string. So return type should be set to char *lower() instead of char lower()

## logic in lower()
made a mistake with < and > in the logic it should be flipped

# Attempt 2

![image](https://github.com/user-attachments/assets/4425ad5d-7fbf-4cc4-8821-2887b620e5f1)

## %d in scanf
i thought after the string input the newline tag would end up being read while taking the second string turns out that was redundant

# Attempt 3
after fixing the scanf issue the code works.
