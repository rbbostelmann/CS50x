# This is CS50x
### Index:
<details>
  <summary>Click me</summary>

- [pset 0](https://github.com/rbbostelmann/CS50x#pset-0):
  - Scratch:
    - The Bare Necessities
- [pset 1](https://github.com/rbbostelmann/CS50x#pset-1):
  - Hello
  - Mario (more)
  - Credit
- [pset 2](https://github.com/rbbostelmann/CS50x#pset-2):
  - Readability
  - Caesar
  - Substitution
- [Lab 2](https://github.com/rbbostelmann/CS50x#lab-2):
  - Scrabble
- [pset 3](https://github.com/rbbostelmann/CS50x#pset-3): TBA
- pset 4: [TBA]
- pset 5: [TBA]
- pset 6: [TBA]
- pset 7: [TBA]
- pset 8: [TBA]
- pset 9: [TBA]
- Final project: [TBA]
  
 </details>
 
---
## pset 0:
### [Scratch](https://github.com/rbbostelmann/CS50x/tree/main/pset%200/The%20Bare%20Necessities)
<details>
  <summary>Expand</summary>

#### Problem Set page: https://cs50.harvard.edu/x/2022/psets/0/scratch/<br>
#### General comments:<br>
I was extremely surprised by how much effort some people put into their scratch projects, be it for the CS50x course or not, like the fully playable Sonic game. That was insane, and I don't think that I, at this point, have enough patience (or ability) to work on something like that. My first choice was to make a quick interactive bear identification guide, showing the key differences between grizzly bears and black bears, and then have the user try and identify a couple of different pictures.  
<br>
That seems to have been a bit beyond what I could do with my limited Scratch knowledge and I would have to spend more time than I had available to make something at that level. My second choice, and the one I actually ended up making, was to make a clip for a song, as some of the examples encouraged us to. My song of choice was "Bare necessities", from Disney's The Jungle Book. It wasn't the most time-intensive project I ever worked on but it was still challenging.<br>
#### Main challenges:<br>
<p>This problem set was particularly hard due to my lack of creativity. I spent more time trying to find something I was interested in building than actually coding - which was surprisingly straightforward. I wanted to implement more movement and have the bear wave its arms up and down, turn its head, walk, etc, but that would require me to redraw multiple parts of the sprite and make all of the graphic changes before even being able to write the code. I tried to do that with the default asset, and while the code worked just fine the animation was atrocious, so I deleted that and went with the basics.  
<br>  
<br>
As for the code itself, once I started to build the blocks and see how they interacted with each other things became much simpler, though it took me some time to figure out how to fuse some blocks to make more elaborated if...else conditionals. That is definitely something I want to work on more if/when I ever decide to come back to Scratch!</p>
    
 </details>
 
---
## pset 1:
### [Hello](https://github.com/rbbostelmann/CS50x/tree/main/pset%201/hello)
<details>
  <summary>Expand</summary>

#### Problem Set page: https://cs50.harvard.edu/x/2022/psets/1/hello/
#### Aim:
Get familiar with the work environment, the syntax of C and traversing the directories.
#### General comments:<br>
I have never used C, and, in fact, when I first picked up programming it was my intention to stay away from it due to the bad rep it gets online. Now, after having some exposure to it I realize that that bad reputation is totally understandable.
#### Main challenges:<br>
<p>No problems with the program whatsoever, but I cannot make C compile on my local machine (VS Code, Windows. I haven't tried it yet on my Xubuntu VM). If anyone knows how to make this work, I BEG YOU, HELP ME. I've tried to follow the instructions I found on SO but nothing worked.</p>
 
</details>

### [Mario (more)](https://github.com/rbbostelmann/CS50x/tree/main/pset%201/mario)
<details>
  <summary>Expand</summary>

#### Problem Set page: https://cs50.harvard.edu/x/2022/psets/1/mario/more/
#### Aim:
Recreate those Mario end of level pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves will also be taller than they are wide.
#### General comments:<br>
This was a pretty straightforward problem set, I already had in mind that I'd use nested for loops, I just didn't know how. It took some trial and error until I got it working. The most challenging aspect was to remember to have the initial spaces to form the different levels, and finding that out required some googling until I understood what I was doing wrong. After that, I completed the left side properly and the left side was super intuitive.
#### Main challenges:<br>
<p>I'll say that the initial spaces in a different for loop really threw me off in this exercise, other than that it was okay, though I suppose that for complete beginners the idea of using nested loops might come out of left field.</p>
   
</details>

### [Credit](https://github.com/rbbostelmann/CS50x/tree/main/pset%201/credit)
<details>
  <summary>Expand</summary>

#### Problem Set page: https://cs50.harvard.edu/x/2022/psets/1/credit/
#### Aim:
Check for a CC number validity and, if so, return the CC provider.
#### General comments: <br>
<p>For the most part, this was an easy one. I only really needed to spend time trying to figure out how to better implement the function calls and how to write the Luhn's Algorithm correctly.</p>
<h4> Main challenges:</h4>
  
<p>The math, definitely the math. It was a huge problem for me to figure out how to implement Luhn’s Algorithm and organize the math part of the program. Apart from that, there were no other issues, though that really made me practice googling - which is 90% of a programmer's job, I am told.<br></p>
   
</details>

---

## Lab 2:
### [Scrabble](https://github.com/rbbostelmann/CS50x/tree/main/Lab%202/scrabble)
<details>
  <summary>Expand</summary>

#### Lab page: https://cs50.harvard.edu/x/2022/labs/2/
#### Aim:
Determine which of two Scrabble words is worth more.
#### General comments:<br>
<p>The hardest part of this problem set was to correlate the characters to the POINTS array. After I watched the walkthrough video and that passage was explained nothing else was particularly difficult.</p>
<h4> Main challenges:</h4>
<p>On the other hand, I really wanted to make a function that would transform a string to uppercase and return said string but I was probably going about it the wrong way and couldn't make that work. I just wanted to avoid having the need to compare with both lower and upper case characters.</p>
   
</details>

---

## pset 2:
### [Readability](https://github.com/rbbostelmann/CS50x/tree/main/pset%202/readability)
<details>
  <summary>Expand</summary>

#### Problem Set page: https://cs50.harvard.edu/x/2022/psets/2/readability/
#### Aim:
Implement a program that calculates the approximate grade level needed to comprehend some text, per the below.
#### General comments:<br>
<p>This was probably the easiest problem set thus far. I enjoyed the topic, and while some of the things I wanted to implement did not work, I was never frustrated or clueless about what was happening (okay, maybe I was, but not for long!). I believe the main obstacles here might be using the ASCII table to make proper conditional statements, figuring out the best way to count the words, and managing the variable type conversions.</p>
<h4> Main challenges:</h4>
<p>As I mentioned above, I was having some trouble with the word count. I tried to check the string chars for '\0' imagining that it meant that it was the end of a word instead of the "extra" character of a string so that obviously did not work. Then I decided to only count for ASCII 32 (space) character, but I faced trouble with empty strings and with multiple space strings.  
<br><br>
I eventually realized that the number of words is generally going to be equal to the number of spaces +1, at least for the cases we had to check for, and that helped me to progress. I also spent way too much time trying to implement regex, but to my despair, C is weird even when doing that, and I could not make it work. I simply don't get the &variable or the * (pointer). Alas, it worked and I did it all by myself ᕙ( •̀ ᗜ •́ )ᕗ</p>
   
</details>

### [Caesar](https://github.com/rbbostelmann/CS50x/tree/main/pset%202/caesar)
<details>
  <summary>Expand</summary>

#### Problem Set page: [https://cs50.harvard.edu/x/2022/psets/1/credit/](https://cs50.harvard.edu/x/2022/psets/2/caesar/)
#### Aim:
Implement a program that encrypts messages using Caesar’s cipher.
#### General comments:<br>
<p>As I started this pset by tacking the substitution probleme first, I already had a pretty good idea of how I wanted to write this code, and things were 87% in accordance with my plans. The other 13% made me change my code and implement most of it under main() instead of using multiple helper functions.</p>
<h4> Main challenges:</h4>
<p>As mentioned, I had a good idea of how I wanted to write this, but I did not had much of a clue on how to make the math work. After tinkering with the final aprt of the code for a while I managed to make it run perfectly well for digits from 1-9. Anything higher than that would only compute the first of the digits (eg. 12 would compute only 1 as key, 643 would compute only 6 as key, etc). That was mostly due to an incorrect approach to the validation part of the problem, in which I converted the key to a char and was unable to make it work properly as an int after that point. After I fixed that the code worked as intended.</p>
   
</details>

### [Substitution](https://github.com/rbbostelmann/CS50x/tree/main/pset%202/substitution)
<details>
  <summary>Expand</summary>

#### Problem Set page: https://cs50.harvard.edu/x/2022/psets/2/substitution/
#### Aim:
Write a program that implements a substitution cipher.
#### General comments:<br>
<p>Maybe it's just me, but I found this to be an insanely cool project! It made me look for ways to work with different data types (just as Caesar did, but I started with this one) and made me feel legitmately more competent by the end. It requires a higher level of organization than the one I was used to, so that's another plus. I do wish the problem set page held your hand a little bit more, as it did in Caesar, but it was ultimately a fun challenge.</p>
<h4> Main challenges:</h4>
<p>With all that said, in no moment this problem came across as easy, and I struggled to find a way to work with the ASCII values at the very end. I began with a misguided intention of implementing arrays instead of understanding that they were already in use (since a string is an array of characters). All's well that ends well.</p>
   
</details>

---
## pset 3:
### TBA
<details>
  <summary>Expand</summary>

#### Problem Set page: 
#### Aim:
TBA
#### General comments:<br>
<p>TBA</p>
<h4> Main challenges:</h4>
<p>TBA</p>
   
</details>
