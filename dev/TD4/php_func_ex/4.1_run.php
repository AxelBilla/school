<?
include('4.1.php'); #Récupère le contenu du fichier '4.1.php'
echo "Saisir un nombre: ";
$N=trim(fgets(STDIN));
test($N); #Utilise la fonction "test" dans '4.1.php', en lui précisant de garder la variable $N que nous avons défini ici.
echo($result); #Affiche le contenu de la variable "result" qui a été récupèrer depuis la fonction