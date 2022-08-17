# CS50x


&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;This repository is a collection of the solutions I submited to complete the CS50x course. Here I'll also briefly comment on the code and challenges. 

# Scratch

- Problem Set page: https://cs50.harvard.edu/x/2022/psets/0/scratch/

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;I was extremely surprised by how much effort some people put into their scratch projects, be it for the CS50x course or not, like the fully playable Sonic game. That was insane, and I don't think that I, at this point, have enough patience to work on something like that.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;My first choice was to make a quick "interactive guide" on bear identification, showing the key differences between grizzly bears and black bears, and then have the user try and identify a couple of different pictures. That seems to have been a bit beyond what I could do with limited knowledge of Scratch and I figured I would have to spend more time than I had available to make something at that level. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;My second choice, and the one I actually ended up making, was to make a clip for a song, as some of the examples encouraged us to. My song of choice was "Bare necessities", from Disney's The Jungle Book. It wasn't the most time-intensive project I ever worked on but it was still challenging.   

- Main difficulties:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;This problem set was particularly hard due to my lack of creativity. I spent more time trying to find something I was interested in building than actually coding - which was surprisingly straightforward. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;I wanted to implement more movement and have the bear wave its arms up and down, turn its head, walk, etc, but that would require me to redraw multiple parts of the sprite and make all of the graphic changes before even being able to write the code. I tried to do that with the default asset, and while the code worked just fine the animation was atrocious, so I deleted that and went with the basics. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;As for the code itself, once I started to build the blocks and see how they interacted with each other things became much simpler, though it took me some time to figure out how to fuse some blocks to make more elaborated if...else conditionals. That is definitely something I want to work on more if/when I ever decide to come back to Scratch!

-----------------------------------------------------------------------------------------

# C

## Hello

- Problem Set page: https://cs50.harvard.edu/x/2022/psets/1/hello/

Aim: 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Get familiar with the work environment, the syntax of C and traversing the directories. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;I have never used C, and, in fact, when I first picked up programming it was my intention to stay away from it due to the bad rep it gets online. Now, after having some exposure to it I realize that that bad reputation is totally understandable and I sincerely dislike C for its lack of intuitive methods and functions. Sorry, I was spoiled by JS and Ruby.

- Main difficulties:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;No difficulties with this program whatsoever. 

- Challenges:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;I cannot, for the life of me, make C compile on my local machine (VS Code, Windows. I haven't tried it yet on my Xubuntu VM). If anyone knows how to make this work, I BEG YOU, HELP ME.

## Mario-more

- Problem Set page: https://cs50.harvard.edu/x/2022/psets/1/mario/more/

- Aim:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Recreate those Mario end of level pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves will also be taller than they are wide.

- Main difficulties:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;This was a pretty straightforward problem set, I already had in mind that I'd use nested for loops I just didn't know how, so it took some trial and error until I got it working. The most challenging aspect was to remember to have the initial spaces to form the different levels, and finding that out required some googling until I understood what I was doing wrong. After that, I completed the left side properly and the left side was super intuitive. 

- Challenges:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;I'll say that the initial spaces in a different for loop really threw me off in this exercise, other than that it was okay. 

## Credit

- Problem Set page: https://cs50.harvard.edu/x/2022/psets/1/credit/

- Aim:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Check for a CC number validity and, if so, return the CC provider.

- Main difficulties:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;I am not especially bright when it comes to math, therefore that was a huge problem for me to figure out how to implement Luhn’s Algorithm and organize the math part of the program. Apart from that, there were no other issues, though that really made me practice googling - which is 90% of a programmer's job, I am told. 

- Challenges:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Math, math is always the challenge.

## Scrabble

- Problem Set page: https://cs50.harvard.edu/x/2022/labs/2/

- Aim:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Determine which of two Scrabble words is worth more.

- Main difficulties:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The hardest part of this problem set was to correlate the characters to the POINTS array. Once I watched the video and that passage was explained nothing else was particularly difficult. 

- Challenges: 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;On the other hand, I really wanted to make a function that would transform a string to uppercase and return a string but either I was really thick and completely messed that up, or... well, yeah, I was probably going about it the wrong way. I just wanted to avoid having the need to compare with both lower and upper case characters.  

## Readability

- Problem Set page: https://cs50.harvard.edu/x/2022/psets/2/readability/

- Aim:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Implement a program that calculates the approximate grade level needed to comprehend some text, per the below.

- Main difficulties:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;This was probably the easiest problem set thus far. I enjoyed the topic, and while some of the things I wanted to implement did not work, I was never frustrated or clueless about what was happening (okay, maybe I was, but not for long!). I believe the main obstacles here might be using the ASCII table to make proper conditional statements, figuring out the best way to count the words, and managing the variable type conversions.

- Challenges:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;As I mentioned above, I was having some trouble with the word count. I tried to check the string chars for '\0' imagining that it meant that it was the end of a word instead of the "extra" character of a string so that obviously did not work. Then I decided to only count for ASCII 32 (space) character, but I faced trouble with empty strings and with multiple space strings. 

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;I eventually realized that the number of words is generally going to be equal to the number of spaces +1, at least for the cases we had to check for, and that helped me to progress. I also spent way too much time trying to implement regex, but to my despair, C is weird even when doing that, and I could not make it work. I simply don't get the &variable or the * (pointer). 

Alas, it worked and I did it all by myself ᕙ(  •̀ ᗜ •́  )ᕗ 
