$choix 
$user0
while true ; do
echo __________________________________
echo "Menu de gestion des utilisateurs"
echo __________________________________
echo "1. Creer un utilisateur"
echo "2. Supprimer un utilisateur"
echo "3. Quitter"
echo -----------------------------------
echo "Choisissez une option 1,2,3 :"
read -n 2 $choix
if [ $choix=1 ]; then 
echo "entrez le nom de l'utilisateur a ajouter"
read $user0
useradd $user0
fi
if [ $choix=2 ] ; then
echo "entrez le nom de l'utilisateur a supprimer"
read $user0
userdel $user0
fi
if [ $choix=3 ]
exit
if
$choix!=1||2||3
echo "la saisie est incorecte, veillez saisir votre choix : 1, 2, 3."
fi
