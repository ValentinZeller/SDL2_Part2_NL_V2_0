# SDL2_Part2_NL_V2_0
Correction Td SDL_2 part_2

<h3>1) Quel api associer au projet pour prendre en charge les images au format JPG, PNG...</h3>

<p>Il faut ajouter la bibliothèque SDL_Image, celle-ci nous donnera accès à l'ensemble de méthodes permettant d'integrer des images à notre projet dans les formats JPG, PNG ....
La version utilisée dans le cadre de notre projet SDL2, lors de l'écriture de ces lignes est la vesrion 2_0_5.
Cette bibliothèque est écrite en C, compilable sur les compilateurs C compatibles avec les environnements Windows, Mac et linux ( Gcc, MSVC...) <p>

<p>Cf Descrption :  https://www.libsdl.org/projects/SDL_image/</p>

 <p>SDL_image is an image file loading library.
It loads images as SDL surfaces and textures, and supports the following formats: BMP, GIF, JPEG, LBM, PCX, PNG, PNM, SVG, TGA, TIFF, WEBP, XCF, XPM, XV</p>

<p>As of SDL_image 1.2.5, JPEG, PNG, TIFF, and WEBP image loading libraries are dynamically loaded, so if you don't need to load those formats, you don't need to include those shared libraries. libpng depends on libz, and libtiff depends on both libz and libjpeg.<p/>


<h3>2) Les étapes de configuration du projet pour l'utilisation de SDL_image</h3>

Pour installer SDL_Image, Vous devez télécharger la bibliothèque :

  https://www.libsdl.org/projects/SDL_image/

Le choix de la version de la bibliothèque se fera en fonction de la version du compilateur utilisé.
<h4>Pour Windows</h4>
 Si vous utilisez un compilateur type GCC vous devez déployer cette version : 
    -SDL2_image-devel-2.0.5-mingw.tar.gz (MinGW 32/64-bit)
 Si vous utilisez un compilateur type MSVC vous devez déployer cette version :
    -SDL2_image-devel-2.0.5-VC.zip (Visual C++ 32/64-bit)
    
 <h4>Pour Mac</h4>
    -SDL2_image-2.0.5.dmg
  
<h4>Pour Linux</4>
   <p>Vous devez utiliser votre gestionnaire de paquets afin de charger cette bibliothèque.</p>
   
   <p>-dpkg (Debian, Ubuntu et autres dérivées)</p>
   <p>-RPM (Red Hat, Fedora, Mageia et openSUSE, etc.)</p>
   <p>-bower (spécialisé en front-end)</p>
   <p>-yarn (alternative open source à npm)</p>
 

<p> Prérequis :</p>
<p> Configurer votre projet avec la bibliothèsuqe SDL2, vous pouvez télécharger la bibliothèque en suivant ce lien : </p>
    https://www.libsdl.org/download-2.0.php
 <p>CF : Déploiement de la SDL2 dans un projet C/C++</p>

<p>La version de SDL_image utilisée lors de la rédaction de ces lignes est : 2_0_5</p>

Pour utiliser SDL_image au sein de votre projet, vous devez configurer les options de compilation en y incluant les liens vers les fichiers .h et les lib static.

CF : http://lazyfoo.net/tutorials/SDL/06_extension_libraries_and_loading_other_image_formats/windows/index.php


<h3>3) Code C image PNG :</h3>  cf source

<h3>4) Les images animées : Les tilesets </h3>cf source


<h3>5) Images animées, update frames : </h3>cf source





