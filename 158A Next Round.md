# Question
![image](https://github.com/user-attachments/assets/319b45d6-ed87-4686-849c-562972a9b73c)

# Attempt
## A1
![image](https://github.com/user-attachments/assets/7eece688-1e2a-4e31-b5bd-8371a04fdaf2)

> not much to say, was figuring out the logic in this attempt
## A2
![image](https://github.com/user-attachments/assets/3b3a56c9-7513-471a-bf07-8cc80d3663ca)

> realised two things here
> 1. scanf for n and k didnt need space in between the specifier - "%d%d" and "%d %d" - both do the same job and allow us to get input the way the problem wanted
> 2. array scanf didnt need space as it would cause scanf to need addition non space char to end i.e "%d " is wrong. Simply writing "%d" would still get input the way problem wanted
## A3
![image](https://github.com/user-attachments/assets/7161ecbf-8026-4348-8a9f-5fb39c01a9e0)

> was playing around with the logic since my code failed for '0' inputs in the array. Answer should be 0 but mine is counting the 0s too so i got 4 for
> 8 4
> 0 0 0 0

## A4
![image](https://github.com/user-attachments/assets/61853c35-a393-44a2-aaa5-24f9cb779a71)

> now i realised here that i made the same issue as above attempt just rewrote unnecessarily

# Solution
I am dumb if array inputs are zero then no one won. Since a[i] is score of i-th place and zero score of zeroth place makes no sense logically. So answer should be 0 not 4, in short i wasnt careful about the logic.
