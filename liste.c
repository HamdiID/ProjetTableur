#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

node_t *list_create(void)
{ // creation d'une liste vide

    return NULL;
}

void *list_get_data(const node_t *node){
    if(node == NULL){
        NULL;
    }
return node->valeur;
}

void list_set_data(node_t *node, void *data)
{
    if (node == NULL)
        return;
    node->valeur = data;
}

/*obtenir le noeud suivant */
node_t *list_next(node_t *node)
{

    if (node == NULL)
    {
        return NULL;
    }
    return node->next;
}

/* insertion en tête : retourne la nouvelle tête */
node_t *list_insert(node_t *head, void *data)
{
    node_t *newHead = (void *)malloc(sizeof(node_t));
    if (newHead == NULL)
    {
    return list_create();
    }

    head->next = newHead;
    list_set_data(newHead, data);

    return newHead;
}

/* ajout en queue : retourne la tête (si head==NULL renvoie la nouvelle tête) */
node_t *list_append(node_t *head, void *data)
{
}

/* suppression de la première instance d'une donnée (comparaison par pointeur)
   retourne la nouvelle tête */
node_t *list_remove(node_t *head, void *data)
{
}

/* suppression de la tête : retourne la nouvelle tête */
node_t *list_headRemove(node_t *head)
{
}

/* destruction complète (libère uniquement les noeuds) */
void list_destroy(node_t *head)
{
}
