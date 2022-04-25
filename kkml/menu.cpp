//#include "menu.hpp"
#include "jeu.hpp"

Game toto;
Menu::Menu()
{
  //Textures
  if (!jouer.loadFromFile("play.png"))
    {
      std::cout << "Erreur durant le chargement de l'image de Play." <<std::endl;
    }

  if (!option.loadFromFile("option.png"))
    {
      std::cout << "Erreur durant le chargement de l'image de option." <<std::endl;
    }

  if (!quitter.loadFromFile("exit.png"))
    {
      std::cout << "Erreur durant le chargement de l'image de quitter." <<std::endl;
    }

   if (!openoption.loadFromFile("set-effect-off.png"))
    {
      std::cout << "Erreur durant le chargement de l'image de quitter." <<std::endl;
    }

  
    //Musiques
    if (!menu.openFromFile("menu.ogg"))
      {
	//erreur
      }

    if(!bruitage.loadFromFile("bruitage.wav"))
      {
	//erreur
      }


    //charger les textures
  recupjouer.setTexture(jouer);
  recupoption.setTexture(option);
  recupquitter.setTexture(quitter);
  bakayoko.setTexture(openoption);
                                               
 
  //charger les sons

  menu.play();
   menu.setLoop(true);
  menu.setVolume(20);
   mu.setBuffer(bruitage); 
}

void Menu::drawMenu(sf::RenderWindow &window)
{
  window.clear();
  if (choix == 1)
    window.draw(recupjouer);

  if (choix == 2)
    window.draw(recupoption);

  if (choix == 3)
    window.draw(recupquitter);
 
if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
      {
        choix=1;
        mu.play();
      }

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
       {
         choix=2;
         mu.play();
       }

if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
       {
         choix =3;

         mu.play();
       }

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && choix == 1)
  {
    std::cout << "totorender" << std::endl;
    window.close();
    toto.render();  
  }
 if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)&& choix == 2)
      entree = false;

  if(entree == false)
window.draw(bakayoko);


  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)&& choix == 3)
    window.close();
  window.display();
}
