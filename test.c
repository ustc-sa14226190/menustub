
/********************************************************************/
/* Copyright (C) SSE-USTC, 2014-2015                                */
/*                                                                  */
/*  FILE NAME             :  menu.c                                 */
/*  PRINCIPAL AUTHOR      :  LiYunpeng                              */
/*  SUBSYSTEM NAME        :  Menudriver                             */
/*  MODULE NAME           :  Menudriver                             */
/*  LANGUAGE              :  C                                      */
/*  TARGET ENVIRONMENT    :  ANY                                    */
/*  DATE OF FIRST RELEASE :  2014/09/20                             */
/*  DESCRIPTION           :  interface of Menu                      */
/********************************************************************/

/*
 * Revision log:
 *
 * Created by LiYunpeng,2014/09/28
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int results_correct_input[6]            = {SUCCESS,SUCCESS,SUCCESS,SUCCESS,SUCCESS,SUCCESS};
int expected_results_correct_input [6]  = {SUCCESS,SUCCESS,SUCCESS,SUCCESS,SUCCESS,SUCCESS};
int results_incorrect_input[6]          = {FAILURE,FAILURE,FAILURE,FAILURE,FAILURE,FAILURE};
int expected_results_incorrect_input[6] = {FAILURE,FAILURE,FAILURE,FAILURE,FAILURE,FAILURE};

char * info[] =
{
    "test report",
    "TC1 Create Menu",
    "TC2 Add command",
    "TC3 Delete command",
    "TC4 Execute command",
    "TC5 Show All command"
};

int main()
{
    int i = 0;
    int ret = 0;
    tLinkTable * head = NULL;
    tLinkTable * pNode = NULL;
    /*
     test CreateMenu
     */
    head = CreateMenu();
    if(head == NULL)
    {
        printf("TC1 FAIL!\n");
        results_incorrect_input[1] = FAILURE;
    }
    else
    {
        printf("TC1 SUCCESS\n");
    }

    /*test AddMenuItem*/
    pNode = NULL;
    ret = AddMenuItem(pNode, "command",NULL,NULL);
    if(ret == FAILURE)
    {
        printf("TC2.1 success\n");
        results_incorrect_input[2] = FAILURE;
    }
    
    ret = AddMenuItem(head, "command",NULL,NULL);
    if(ret == SUCCESS)
    {
        printf("TC2.2 success\n");
        results_correct_input[2] = SUCCESS;       
    }
    
    /*test DeleteMenuItem*/
    ret = DeleteMenuItem(pNode,NULL);
    if(ret == FAILURE)
    {
        printf("TC3.1 success\n");
        results_incorrect_input[3] = FAILURE;
    }
    
    ret = DeleteMenuItem(head,"command");
    if(ret == SUCCESS)
    {
        printf ("TC3.2 success\n");
        results_correct_input[3] = SUCCESS;
    }
    
    /*test ExecuteMenu*/
    ret = ExecuteMenu(pNode);
    if(ret == FAILURE)
    {
        printf("TC4.1 success\n");
        results_incorrect_input[4] = FAILURE;       
    }
    
    ret = ExecuteMenu(head);
    if(ret == SUCCESS)
    {
        printf("TC4.2 success\n");
        results_correct_input[4] = SUCCESS;       
    }
    
    /*test ShowAllMenuItem*/
    ret = ShowAllMenuItem(pNode);
    if(ret == FAILURE)
    {
        printf("TC5.1 success\n");
        results_incorrect_input[5] = FAILURE;
    }
    
    ret = ShowAllMenuItem(head);
    if(ret == SUCCESS)
    {
        printf("TC5.2 success\n");
        results_correct_input[5] = SUCCESS; 
    }
    printf("\n*****************************TEST REPORT*****************************\n");
    for(i = 1;i <= 5; ++i)
    {
        /*INCORRECT INPUT RESULTS*/
        printf("%s(with incorrect inputs) :\n",info[i]);
	    printf("\tExpected Result:\t");
        if(expected_results_incorrect_input[i] == SUCCESS)
        {
            printf("SUCCESS\n");
        }
        else
        {
            printf("FAILURE\n");
        }
        if(results_incorrect_input[i] == FAILURE)
        {
            printf("\tReal Result:\t\tFAIL\n");
        }
        else
        {
            printf("\tReal Result:\t\tSUCCESS\n");
        }
        /*CORRECT INPUT RESULTS*/
        printf("%s(with correct inputs):\n",info[i]);
        printf("\tExpected Result:\t");
        if(expected_results_correct_input[i] == SUCCESS)
        {
            printf("SUCCESS\n");
        }
        else
        {
            printf("FAILURE\n");
        }
        if(results_correct_input[i] == SUCCESS)
        {
            printf("\tReal Result:\t\tSUCCESS\n");
        }
        else
        {   
            printf("\tReal Result:\t\tFAIL\n");
        }
        printf("---------------------------------------------------------------------\n");    
    }
    return 0;
}
