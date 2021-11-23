 - Improved the reading of the map.txt from 3 readings to 1 single and added decision points for ghosts

 - The assetPaths in Sprite was changed from a list to a map for a easy name find when we need to change the frame.

 - The world map logic representation was changed from a list to a 26x29 array for insta finding a tile when need, before it was to
loop the list asking one by one. Improved performance a lot.

 - Redefined the ghosts behaviors implementation using strategy pattern; chase, frightened and scatter are differents behaviours in separated
classes allowing to develop ghosts with differents behaviors.

 - There are a lot of model changes, functions refactors, logic changes, bugfixes and improvements in the wide project.
