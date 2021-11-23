
# Pac-Man implementation in SDL for C++

    This simple 2D project is a one level Pac-Man  clone made in C++ with Simple DirecMedia Layer
An excellent exercise for getting started in gaming development to understand basic concepts, creating a character's 
scenarios and behaviours using sprites, geometric positioning, objects communication, artificial intelligence.
And it also could be challenging for experienced developers writing precise and optimal algorithms, 
being careful managing pointers and references and implementing software design patters.


    This project is a wide self documented code legible and clear

### Strategy Pattern!
- for develop the different ghost behaviour. It was implemented Strategy Desing Pattern to get a flexible and reusable object oriented software.
[More information about this here!]

[More information about this here!]: <https://dev.to/code2bits/pac-man-patterns--ghost-movement-strategy-pattern-1k1a>

### Dijkstra's Algorithm!
- is used by the ghots for find the path to Pac-Man in the maze. [Wiki link]

[Wiki link]: <https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm>


#### The Ghosts behaviours
- Blinky, the red, chase Pac-Man following him directly from behind.
- Pinky, the pink, ambush by three tiles ahead avatar.
- Inky, the blue, ambush avatar's front but select the way depending of Blinky's position.
- Clyde, the orange, chase avatar in front but he scatter around when is to near.

[More information about ghosts behaviour here!]

[More information about ghosts behaviour here!]: <https://gameinternals.com/understanding-pac-man-ghost-behavior>


#### Mechanics
You can move the avatar around the maze with the Up, Down, Left, Right keys.
Blinky start outside the ghost lair insta chasing avatar, then the remaining ghost will start to chase Pac-Man as he eats dots.

Pinky come out when there is less than dots 97%
Inky with less than 80 and Clyde less than 70.

Since each ghost have a unique chase behaviors all of them share timings will doing stuff
in the maze. 
They live in a personal circle, starting by chasing avatar by 20 seconds, and then they will
scatter, each ghost got his corner to do it, by 4 seconds for start to chase again for 20 seconds.

Eat a big dot causes fear by 5 seconds, and when a ghost is frightened, remember that Pac-Man can eat them causing
the ghost dead by 10 seconds and returning him to the ghost cave while he is dead.
