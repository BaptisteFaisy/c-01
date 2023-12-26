/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:39:44 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/26 18:09:26 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av) {
    char c;
    std::string s1, s2;
	int i = 0;

    if (ac != 4) {
        std::cerr << "Utilisation : " << av[0] << " <nom_fichier> <sous_chaine_a_remplacer> <remplacement>" << std::endl;
        return 1;
    }

    std::ifstream fichier_entree(av[1]);
    if (!fichier_entree.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
        return 1;
    }

    std::ofstream fichier_sortie("fichier_temporaire.txt");
    if (!fichier_sortie.is_open()) {
        std::cerr << "Erreur lors de la création du fichier temporaire." << std::endl;
        return 1;
    }

    s1 = av[2];
    s2 = av[3];

    while (fichier_entree.get(c)) {
    	i = 0;
        while (c == s1[i] && i < s1.length()) {
            fichier_sortie << s2[i];
            fichier_entree.get(c);
            i++;
        }
    }

    fichier_entree.close();
    fichier_sortie.close();

    if (std::rename("fichier_temporaire.txt", av[1]) != 0) {
        std::cerr << "Erreur lors du renommage du fichier temporaire." << std::endl;
        return 1;
    }

    return 0;
}
