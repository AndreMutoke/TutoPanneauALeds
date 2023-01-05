# TutoPanneauALeds
Ici nous apprenons les bases des matrices a LEDs
Le code ci present se realise sous platformio avec comme framework Arduino
De ce fait, nous aurons besoin de telecharger des extensions sous Visual Studio Code.
La première extension est celle prenant en charge le compilateur C/C++.

![ccppext](https://user-images.githubusercontent.com/101937101/210881952-5080561d-016c-4b07-b60d-070716fe22b9.png)

 
 La seconde extension est Platform IO, qui contiendra les outils nécessaires pour manipuler nos cartes. Notez qu’ici, nous allons utiliser le SoC ESP32.

![pio](https://user-images.githubusercontent.com/101937101/210882070-bc5fee85-ce07-4213-a55a-95fbe4aad662.png)

 
Une fois tout cela fait, nous allons maintenant lancer un projet. L’avantage avec Platform IO est que la compilation est le chargement du programme aux seins du SoC va se faire en ligne, ce qui nous éviter de surcharger notre espace de stockage. Ainsi le chargement du programme demande aussi la connexion à internet.
