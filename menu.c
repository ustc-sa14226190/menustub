
/********************************************************************/
/* Copyright (C) SSE-USTC, 2014-2015                                */
/*                                                                  */
/*  FILE NAME             :  menu.c                                 */
/*  PRINCIPAL AUTHOR      :  LiYunpeng                              */
/*  SUBSYSTEM NAME        :  Menustub                               */
/*  MODULE NAME           :  Menustub                               */
/*  LANGUAGE              :  C                                      */
/*  TARGET ENVIRONMENT    :  ANY                                    */
/*  DATE OF FIRST RELEASE :  2014/09/28                             */
/*  DESCRIPTION           :  stub of Menu                           */
/********************************************************************/

/*
 * Revision log:
 *
 * Created by LiYunpeng,2014/09/28
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include"menu.h"

/* Define MenuItem Type */
struct MenuItem
{
    struct  tLinkTableNode * pNext;
    char*   cmd;
    char*   desc;
    int     (*handler)();
};

/* create menu*/
tLinkTable* CreateMenu()
{
    tLinkTable* p = (tLinkTable*)malloc(sizeof(tLinkTable));
    if(p != NULL)
    {
        return p;
    }
    else
    {
        return NULL;
    }
}

/* Add MenuItem to Menu */
int AddMenuItem(tLinkTable* head, char* cmdname, char* cmddesc, int (*function)())
{
    if(head == NULL || cmdname == NULL)
    {
        return FAILURE;
    }
    return SUCCESS;
}

/* Delete MenuItem from Menu */
int DeleteMenuItem(tLinkTable* head, char* cmdname)
{
	if(head == NULL || cmdname == NULL)
    {
        return FAILURE;
    }
    else
    {
        return SUCCESS;
    }
}

/* Delete Menu*/
int DeleteMenu(tLinkTable* head)
{
    if(head == NULL)
    {
        return FAILURE;
    }
    else
    {
        return SUCCESS;
    }
}

/* Execute the menu */
int ExecuteMenu(tLinkTable* head)
{
	if(head != NULL)
    {
        return SUCCESS;
    }
    else
    {
        return FAILURE;
    }
}

/* search MenuItem*/
tMenuItem* SearchMenuItem(tLinkTable* head, char* cmd)
{
    ;
}

/*search preNode */
tMenuItem* SearchPreMenuItem(tLinkTable* head, char* cmd)
{
	;
}

/* show all  command */
int ShowAllMenuItem(tLinkTable* head)
{
	if(head == NULL)
    {
        return FAILURE;
    }
    else
    {
        return SUCCESS;
    }
}
