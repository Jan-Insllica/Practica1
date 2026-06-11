Pràctica 1 – Comunicació USB Sèrie amb ESP32
Finalitat

Familiaritzar-se amb la comunicació entre un ordinador i una placa ESP32 a través del port sèrie USB, permetent controlar un LED mitjançant comandes de text enviades per l'usuari.

Resum del projecte

L'ESP32 manté una comunicació sèrie amb l'ordinador utilitzant la interfície Serial. A través del Monitor Sèrie, l'usuari pot enviar instruccions per activar o desactivar un LED. El microcontrolador interpreta les comandes rebudes sense distingir entre majúscules i minúscules i retorna un missatge de confirmació per la mateixa connexió.

Funcionament del sistema

Configuració de la comunicació sèrie a una velocitat de 115200 baud.
Enviament d'un missatge inicial indicant que el dispositiu està preparat per rebre instruccions.
Supervisió contínua de les dades que arriben des del Monitor Sèrie.
Lectura i anàlisi de cada línia introduïda per l'usuari.
Execució de l'acció corresponent segons la comanda rebuda:
ON → activa el LED.
OFF → desactiva el LED.
Qualsevol altre text → es considera una ordre no reconeguda.
Retorn d'un missatge informatiu a través del port sèrie indicant el resultat de l'operació.
Comandes admeses
ON: encén el LED connectat a l'ESP32.
OFF: apaga el LED connectat a l'ESP32.

Les comandes es processen independentment de si s'escriuen en majúscules, minúscules o una combinació de totes dues.

Organització del desenvolupament

El seguiment de les tasques es realitza mitjançant un tauler Kanban a GitHub amb les columnes:

To do,
Doing,
Done

Resultat final

L'usuari pot controlar correctament l'estat del LED des del Monitor Sèrie. El sistema reconeix les comandes independentment del format de les lletres i proporciona una resposta informativa després de cada acció executada.

Video demostratiu: https://drive.google.com/file/d/1zq8xAKmh5mqJfalL7ja1rVW3XGooW3So/view?usp=sharing
