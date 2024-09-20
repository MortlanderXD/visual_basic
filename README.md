# visual_basic

Un dépôt qui rassemble plusieurs exemple réalisé avec la platforme de développement .NET

## C'est quoi .NET ?

- .NET est une plateforme de développement créée par Microsoft. Elle permet de créer une grande variété d'applications (applications web, de bureau, mobiles, services, etc.) en utilisant différents langages de programmation comme C#, Visual Basic (VB), F#, etc.

- Visual Basic (ou VB.NET) est l'un des langages que l'on peux utiliser dans l'écosystème .NET. Il est souvent apprécié pour sa syntaxe simple et lisible.

- L'installation de VB.NET se fait directement à travers l'exécutable Visual Studio (Ex. Community 2022)

## Contenu

- Ce dépôt est fait pour les curieux de VB.NET, en passant par des applications simple jusqu'à des applications plus complexe. J'essayerai de faire à chaque fois un exemple à quoi ça devrait ressembler en visual basic(vb), en C++, voir même en C (pour le fun) et pourquoi pas en C# tant qu'on y est ?

Autant bondir directement dans le sujet.

PS : Pour le moment le dépôt contient les *fichier.exe* mais à l'avenir il devront probablement disparaître à cause de la taille. (à confirmer)

## Compilateur avec VSC

- Si comme moi vous voulez tout faire à partir d'un seul IDE comme **Visual Studio Code**, alors il faudra suivre quelque étape afin que votre terminal sache ou trouver les compilateurs des différents languages suivant. Ses dernières sont inscrites dans les sections suivantes respectivement par language.

- Différente technique existe pour compiler, elle ne sont pas toute reprise ici, mais l'essentielle est là.

- Ce qui est pratique avec **Visual Studio Code** sont les extensions. Suffit de créer un fichier <program.cs> pour que l'IDE vous propose d'installer les dépendances.

### VB

#### VB : Installation

- Je présume que vous avez installez **Visual Studio Community** avec les packages, si pas, suffit de lancer l'IDE > Outils > Obtenir les outils et fonctionnalités.. > "Développement .NET Desktop".

- Pour ma part, le compilateur vbc.exe se trouve dans "C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\Roslyn\vbc.exe" , il suffit donc d'aller dans les variables d'environnement et de rajouter le dossier Bin dans le path. (*vbc* = *visual basic compilator*)
  - Note : Le terminal intégré ne comprend toujours pas vbc, par contre windows powershell oui (Je n'ai aucune idée pourquoi).

#### VB : Compilation

- Si j'ai seulement un fichier qui s'appelle *Program.vb*.

```shell
#pwd : C:\...\visual_basic\Step1\VB\
vbc .\Program.vb
```

- Si j'ai seulement un fichier qui s'appelle *Program.vb* et que je veux un *.exe* (/target:exe) sous le nom *Program.exe* (/out:<nom_fichier.exe>).

```shell
#pwd : C:\...\visual_basic\Step1\VB\
vbc /target:exe /out:.\Program.exe .\Program.vb
```

### C++

#### C++ : Installation

- Intégré dans le terminal par défaut. (à confirmer)

#### C++ : Compilation

- Si j'ai seulement un fichier qui s'appelle *Program.cpp*.
- Note : sous windows, la commande g++ <program.cpp> -o <program\> produit un exécutable ".exe" , à l'inverse de Linux! (à documenter un peu plus pourquoi).

```shell
#pwd : C:\...\visual_basic\Step1\C++\
g++ .\Program.cpp -o Program
```

### C

#### C : Installation

- Intégré dans le terminal par défaut. (à confirmer)

#### C : Compilation

- Si j'ai seulement un fichier qui s'appelle *Program.c*.
- Note : sous windows, la commande gcc <program.c> -o <program\> produit un exécutable ".exe" , à l'inverse de Linux! (à documenter un peu plus pourquoi).

```shell
#pwd : C:\...\visual_basic\Step1\C\
gcc .\Program.c -o Program
```

### C\#

#### C\# : Installation

- Intégré dans le terminal par défaut. (à confirmer)

#### C\# : Compilation

- Si j'ai seulement un fichier qui s'appelle *Program.cs*

```shell
#pwd : C:\...\visual_basic\Step1\C#\
csc .\Program.cs
```

- Si j'ai seulement un fichier qui s'appelle *Program.vb* et que je veux un *.exe* (/target:exe) sous le nom *Program.exe* (/out:<nom_fichier.exe>).

```shell
#pwd : C:\...\visual_basic\Step1\C#\
vbc /out:.\Program.exe .\Program.cs
```

## Step 1 : Créer une première application console [ VB.NET | C++ | C | C\# ]

- Une application console qui affiche *Hello World!* est un bon point de départ pour comprendre comment ça fonctionne sans se soucier de l'interface graphique.
