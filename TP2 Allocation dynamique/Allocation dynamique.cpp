#include <iostream>

using namespace std;

void afficherVecteur(int* tab, int taille);
void afficherMatrice(int** tab, int ligne,int colone);
int** getMatrix(int lignes,int colones);
void afficherMatrice(int **tab, int lignes,int colones);
void deleteVector(int* vect, int taille);
void deleteMatrix(int** vect, int lignes);


int main()
{
    int **tab= getMatrix(3,3);

    afficherMatrice(tab,3,3);

    deleteMatrix(tab,3);

    afficherMatrice(tab,3,3);


}

void afficherVecteur(int* tab, int taille)
{
    for(int i=0; i<taille; i++) {
        cout<<tab[i]<<"  ";
    }
    cout<<endl;
}

void afficherMatrice(int **tab, int lignes,int colones)
{
    for(int i=0; i<lignes; i++) {
        for(int j=0; j<colones; j++)
        {
            cout<<tab[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int* getVector(int taille) {
    return new int[taille];
}

int** getMatrix(int lignes,int colones) {
    int** newMatrix = new int*[lignes];

    for(int i=0; i<lignes; i++)
    {
        newMatrix[i] = new int[colones];
    }

    return newMatrix;
}

void deleteVector(int* vect, int taille)
{
    delete []vect;
}

void deleteMatrix(int** vect, int lignes)
{
    for(int i = 0; i<lignes; i++)
    {
        delete []vect[i];
    }
    delete []vect;
}
