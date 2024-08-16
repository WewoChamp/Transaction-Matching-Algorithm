#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include "Transaction.h"
#include "Constants.h"
#include "json.hpp"

using namespace std;
using json = nlohmann::json;


int diffDates(string date1, string date2);
double withinDateRange(string date1, string date2);
double relatedNarration(string narration, string narration2);
double averagePercentMatching(list<Transaction> matchingTransactions);
bool isMatched(Transaction transaction1, Transaction transaction2, int percentToMatch);
list<list<Transaction> > matchTransactions(list<Transaction> firstList, list<Transaction> secondList);
list<list<Transaction> > probableMatchTransactions(list<Transaction> firstList, list<Transaction> secondList);
list<Transaction> unmatchTransactions(list<Transaction> firstList, list<Transaction> secondList);
void filterToUnmatched(list<list<Transaction>>& matchingTransactions, list<Transaction>& unmatchedTransaction);
void display(list<list<Transaction> > matchedTransactions);
void display(list<Transaction> unmatchedTransactions);
int countLeapYearDays(int d[]);
list<string> splitString(string sentence, char separator);
double percentMatching(Transaction transaction1, Transaction transaction2);
void readJsonFile(list<Transaction>& listOfTransaction, string nameOfFile);
json convertToJsonListOfLists(list<list<Transaction> > Transactions, string name, string nameForPercentMatching);
json convertToJsonList(list<Transaction> Transaction, string name);
json makeJsonObject(json firstList, json secondList, json thirdList);
void getMatchedProbableMatchAndUnmatched(string fileToReadFrom, string secondFileToReadFrom, string fileToOutputTo, string nameForMatchedTransactions, string nameForProbableMacthedTransactions, string nameForUnmatchedTransactions, string nameForPercentageMatched);
void repairList(int idTaken, string tableIdTaken, string listTakenFrom, int idTo, string tableIdTo, string listTakenTo, string inputFile);
void readForAdjustments(list<list<Transaction>>& listOfTransactions, string inputFile, string nameOfTable);
string determineNameOfTheLastList(string listTakenFrom, string listTakenTo, string inputFile);
void takeOutTransaction(list<list<Transaction>>& listRemovingFrom, list<Transaction>& listAddedto, int idTaken, string tableIdTaken);
void takeOutTransaction(list<Transaction>& listRemovingFrom, list<Transaction>& listAddedto, int idTaken, string tableIdTaken);
void displayJsonInFile(json jsonObject, string nameOfFile);
void addRelevantTransaction(list<list<Transaction>>& listToAddTo, list<Transaction>& listToRemoveFrom, int idTo, string tableIdTo);

#endif