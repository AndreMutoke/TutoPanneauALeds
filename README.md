# TutoPanneauALeds
Ici nous apprenons les bases des matrices a LEDs
Le code ci present se realise sous platformio avec comme framework Arduino
De ce fait, nous aurons besoin de telecharger des extensions sous Visual Studio Code.
La première extension est celle prenant en charge le compilateur C/C++.

 
 La seconde extension est Platform IO, qui contiendra les outils nécessaires pour manipuler nos cartes. Notez qu’ici, nous allons utiliser le SoC ESP32.

 
Une fois tout cela fait, nous allons maintenant lancer un projet. L’avantage avec Platform IO est que la compilation est le chargement du programme aux seins du SoC va se faire en ligne, ce qui nous éviter de surcharger notre espace de stockage. Ainsi le chargement du programme demande aussi la connexion à internet.
