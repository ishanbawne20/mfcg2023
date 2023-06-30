# Assignment 4
This week we are changing things up a bit and instead of working on our ray-tracer we will do some procedural generation. Its just a fancy way of saying you are generating data algorithmically instead of making observations and jotting it down.

Have you seen Game of Thrones? Atleast heard about it? Take a look at the picture below.

![got_map.png](/Images/got_map.jpg)

Its a map of the world of Game of Thrones. It was hand drawn by someone who by the way agreed it was a time taking and tedious process. What if there was a way to automate this very process? Let me tell you its very much possible and that is what we are going to attempt this week. And it all starts with this image below. You just add some sexy math to it and Voila!

![noise_color.png](/Images/noise_color.png "noise_color.png")

The current code generates this image. Try running it yourself!

Confused yet? Do not worry we will bring you upto speed. The most difficult thing to get here is to get the randomness of the curves and edges of the map. A computer cannot scribble lines at whim like us, so we need a way to somehow encode randomness which is deterministic yet feels humanly random. And the image above is the barest form of randomness.

To understand how its done in detail take a look at a session which we mentors took previously : 

[Procedural Generation, IITK](https://youtu.be/iZ-1xx_5XxY) (if you feel you like the sound of your mentors talking and it'll help you understand better)

Resources : 

[Noise Function](https://www.redblobgames.com/articles/noise/introduction.html)

[Perlin Noise](https://youtube.com/playlist?list=PLRqwX-V7Uu6bgPNQAdxQZpJuJCjeOr7VD)

[Detailed blog](https://www.redblobgames.com/maps/terrain-from-noise/)

[An implementation](https://www.shadertoy.com/view/sd33Df)


Your actual task would be to write up detailed noise functions and use them to generate maps as show in the image below. The map generated should be procedural and we should be able to generate infintely many maps each different from one another just by changing some seed value. The resources given above have already this implemented in a bunch of different tech stack except for C++. We want you to understand them and come up with your C++ version.
![finalmap.png](/Images/final.png)

Submission deadline : 7 July, 11:59 PM

[Link to the GitHub repository](https://github.com/ishanbawne20/mfcg2023.git)


PS : If you feel stuck at any point feel free to ask for more resources or ask us to explain things to you. We would be more than happy to help. Do not hesitate. I repeat, do not hesitate!