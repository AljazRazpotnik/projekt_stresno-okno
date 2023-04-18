# Projekt_stresno-okno
NAVODILA:

Dvosmerni cilinder odpira ali zapira okno (vrtenje motorja naprej/nazaj preko releja). S tipko A aktiviramo zapiranje okna, s tipko B odprianje do polovice in s tipko C odpiranje okna do konca. Lego okna zaznavajo senzorji Kz, Kp in Ko (uporabite stikala). Če je okno odprto, naj signalizira rdeča LED dioda.
# Kosovnica:
12 žic,

3 gumbi,

2 senzorja,

1 LED dioda,

1 220 Ohm upor,

1 sg90 servo motor,

1 arduino uno board,

Protoboard.
# Priredbeni seznam:
![image](https://user-images.githubusercontent.com/129844167/230311931-388d5784-e2d7-4cf7-9032-3447032cc622.png)
 
![image](https://user-images.githubusercontent.com/129844167/230312338-d018f66d-73a8-4b0f-a936-e57fb9c45219.png)

# Vezalna shema:
![image](https://user-images.githubusercontent.com/129844167/231115529-f162a9d5-ba3b-42ba-994d-88188da2cecd.png)

# Slika vezja:
![IMG_20230418_112316](https://user-images.githubusercontent.com/129844167/232735480-6970f4a9-55a3-47ba-bd8f-20295241d0e0.jpg)

# Komentar:
Namesto senzorjev na končnih pozicijah smo sprogramirali servo tako, da se ugasne, takoj ko zazna, da je presegel pozicijo. KODA:  if(pos >= 180 || pos <=0) {myservo.detach;}
//ko senzor zazna, da je presegel pozicije 180 ali 0 (pos>=180 || pos<=0) stopinj, se ugasne (myservo.detach).
