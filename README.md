# shellbar
open your hyprland config and paste this
take the byte code and keep it in the main directory
``monitor=,addreserved,27,0,0,0``
and
``exec-once = hyprctl dispatch exec '[float;size 1920 27;move 1 1;pin;staybelow;nofocus;nomove] alacritty -e bash -c ./shellbar'``

![image](https://github.com/user-attachments/assets/531b8a4d-743b-415a-b850-d3fda405430e)
