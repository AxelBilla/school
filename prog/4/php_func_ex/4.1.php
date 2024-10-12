<?
$result=1; #Défini la valeur globale 'result'
function test($N) { #On garde la variable de '4.1_run.php'
    global $result; #Reférence la valeur globale 'result' pour notre utilisation
    for ($x = 0; $x <= 3; $x++) {
        $result=$result*$N;
    }
    return $result; #Récupère la variable 'result' pour l'utiliser dans '4.1_run.php'
};
