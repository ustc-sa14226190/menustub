
/********************************************************************/
/* Copyright (C) SSE-USTC, 2014-2015                                */
/*                                                                  */
/*  FILE NAME             :  menu.h                                 */
/*  PRINCIPAL AUTHOR      :  LiYunpeng                              */
/*  SUBSYSTEM NAME        :  Menu                                   */
/*  MODULE NAME           :  Menu                                   */
/*  LANGUAGE              :  C                                      */
/*  TARGET ENVIRONMENT    :  ANY                                    */
/*  DATE OF FIRST RELEASE :  2014/09/28                             */
/*  DESCRIPTION           :  interface of Menu                      */
/********************************************************************/

/*
 * Revision log:
 *
 * Created by LiYunpeng,2014/09/28
 *
 */

#ifndef _MENU_H_
#define _MENU_H_

#define SUCCESS 1
#define FAILURE 0

#include"linktable.h"

/* Define MenuItem Type */
typedef struct MenuItem tMenuItem;

/* create menu*/
tLinkTable* CreateMenu();

/* Add MenuItem to Menu */
int AddMenuItem(tLinkTable* head, char* cmdname, char* cmddesc, int (*function)());

/* Delete MenuItem from Menu */
int DeleteMenuItem(tLinkTable* head, char* cmdname);

/* Execute the menu */
int ExecuteMenu(tLinkTable* head);

/* show all  command */
int ShowAllMenuItem(tLinkTable* head);

/**/
int DeleteMenu(tLinkTable* head);
#endif /* _MENU_H_ */
