# Attempt 1

![image](https://github.com/user-attachments/assets/f8a9bfe9-56d0-472c-9c53-c5d1dc72725d)

Couldnt understand the issue here, as to why it was getting 2.

# Attempt 2

![image](https://github.com/user-attachments/assets/569638d0-68f7-4d51-8464-92172053a354)

I thought maybe my if part of if-else was running or causing errors to maybe not go to else?

# Attempt 3

![image](https://github.com/user-attachments/assets/01188d78-4ff7-4feb-b991-4f96a9940edf)

Here i tried prepending -- to val but they should be doing the same thing? Idk why its acting up like this.

# Attempt 4
A bit of digging around and some debugging, I realised my a,b,c values werent containing the values i was expecting.
For X++ 
a,b,c =  ,X,+
For ++X
a,b,c =  ,+,+

This confused me as to why my values were getting shifted?

> GPTed this one for issue and realised/learnt that after each scanf \n is done by system which is read by my next scanf thats why for X++ i would get something \n,X,+. Meaning my first value would read a new line/space hence throwing everything off
> one fix is to do scanf(" %c%c%c",&a,&b,&c)
> I took another route (considered fragile by GPT) which eventually got accepted by the system

![image](https://github.com/user-attachments/assets/b38a34ef-1517-43a7-a126-de228dcf7dfb)

Also took no risk so considered whoever got +/- in a,b,c would do the work but after understanding the \n issue with scanf it can be rewritten,
to this

![image](https://github.com/user-attachments/assets/4470a0f6-3cb6-4dfe-bf44-4b110882e604)


