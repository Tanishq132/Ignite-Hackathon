#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void zoom()
{
    printf("INTRODUCTION\n");
    printf("Zoom is one of the most used platform for online learning. It is widely used for lectures and meetings.With a single click, start a Zoom Phone call or video Meeting.\n\n\n\n");
}

void meetANDchat()
{
    printf("MEET & CHAT\n");
    printf("The Zoom messenger app for mobile and desktop is in fact the same app you use to start and join video meetings.\n The chat functionality is precisely what you'd expect from an all-singing, all-dancing collaboration tool.\n");
    printf("It integrates with your video and audio conferencing solutions, with channels similar to Slack where you can create public or private groups.\n\n\n\n");
    printf("New Meeting\n");
    printf("With this feature you can create a new meeting and add other people also \n");
    printf("JOIN\n");
    printf("This Feature helps you to join a meeting which is already going on by adding id and password\n");
    printf("SCHEDULE\n");
    printf("Thia helps you to schedule a meeting in zoom and adding people to it\n");
    printf("SHARE SCCREEn\n");
    printf("It is an important feature you can share zoom room by adding meeting id\n\n\n\n");
}

void meetings()
{
    printf("MEETINGS\n");
    printf("Meetings are designed to be a collaborative event with all participants being able to screen share, turn on their video and audio, and see who else is in attendance.\n");
    printf("In meetings you can see all your current(todays) and future meetings, their time and and what is the topic of that meeting.\n\n\n\n");
}

void Contacts()
{
    printf("CONTACTS\n");
    printf("By default, your Zoom contacts directory contains internal users on the same Zoom account and organization in the All Contacts section. Owners/admins of Pro accounts or higher can turn off the setting Company Contacts in IM settings to prevent users from seeing everyone on the same Zoom account and organization. Account owners and admins can also choose if users can chat with or add external contacts.\n");
    printf("You can add any external Zoom user as a contact by specifying their email address. After they approve your contact request, you will be able to chat, share images and files, and meet instantly. If you add an email address that isn't associated with a Zoom account, they will receive an invitation to join Zoom.\n\n\n\n");
}
void setting()
{
    printf("SETTING\n");
    printf("You can manage your account from here.You can share you id through qr code scaaning process.We can also manage our contacts,mode from here.\n");
    printf("If we want we can learn how to use Teams.\n\n\n\n");
}

void LetsExploreTeamsFunctions()
{
    printf(" Activity:- In this , we have two things i.e My activity and Feed  In activity , we get notifications of the assignments that are returned with marks or reevaluation.  \n");

    printf(" Chats:- In this feature,  we can chat with other ms teams user.\n");

    printf("Teams:- In this feature  , we have different subjects that are charcterize as teams.\n");

    printf("Assignments:- In this  feature, we get updates on the assignments that are assigned by the teachers or the assignments that are already completed\n");

    printf("Calendar:- In this feature, we can see all the subjects or periods that are assigned on a particular day at a particular time.\n");

    printf("Calls:- We can use this feature to call other person on teams itself by hosting a meeting.\n");

    printf("Files:- In this feature , we can see all the files that have been already downloaded and that are assigned for reference in teams.\n");
}

void UnderstandingAlgorithms()
{
    printf("Thank You for choosing to start learn with us , so lets get started.....\n");
    printf("In simple terms , an algorithm is a set of steps to solve a particular problem.\n");
    DifferentTypes();
}

void DifferentTypes()
{
    printf("There are different types of algorithms such as Binary search algorithm , Merge Sort Algorithm etc..\n");
    printf("Binary Search algorithm :- Binary search is the search technique that works efficiently on sorted lists. Hence, to search an element into some list using the binary search technique, we must ensure that the list is sorted. \n Binary search follows the divide and conquer approach in which the list is divided into two halves, and the item is compared with the middle element of the list. If the match is found then, the location of the middle element is returned. Otherwise, we search into either of the halves depending upon the result produced through the match.\n");
    printf("Algorithm for binary search (Recusrive Approach) :-\n  if p > q then\n2: return - 1\n3: r = b(p + q)/2c\n4: if x = A[r] then\n5: return r\n6: else\n7: if x < A[r] then\n8: BinarySearch(A, p, r, x)\n9: else\n10: BinarySearch(A, r + 1, q, x)");
    printf("Algorithm for Binary Search (Iterative Approach) :-\n first = 1\n2: last = length(A)\n3: while first ≤ last do\n4: middle = d(first + last)/2e\n5: if A[middle] = key then\n6: return true\n7: else\n8: if first = last then\n9: return false\n10: else\n11: if A[middle] > key then\n12: last = middle - 1\n13: else first = middle + 1\n14: return false \n");
    printf("Merge Sort Algorithm:- Merge sort is one of the most efficient sorting algorithms. It works on the principle of Divide and Conquer. Merge sort repeatedly breaks down a list into several sublists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.\n");
    printf("if p < r then\n2: q ← b(p + r)/n2c\n3: MergeSort(A, p, q)\n4: MergeSort(A, q + 1, r)\n5: Merge(A, p, q, r) // merges A[p..q] with A[q+1..r]\n");
    printf("n1 = q - p + 1\n2: n2 = r - q\n3: Let L[1 . . . n1 + 1] and R[1 . . . n2 + 1] be new arrays\n4: for i = 1 to n1 do\n5: L[i] = A[p + i - 1]\n6: for j = 1 to n2 do\n7: R[i] = A[q + j]\n8: L[n1 + 1] = ∞, R[n2 + 1] = ∞\n9: i = 1, j = 1\n10: for k = p to r do\n11: if L[i] < R[j] then\n12: A[k] = L[i]\n13: i = i + 1\n14: else\n15: if L[i] > R[j] then\n16: A[k] = R[j]\n17: j = j + 1\n18: else\n19: A[k] = −∞ {We mark the duplicates with the largest negative integer}\n20: j = j + 1\n");
}

void main()
{
    int i, n, m;
    int a;
    char c[150];
    printf("Zoom or teams \n");
    printf("To learn about  ZOOM press 1 and to learn about Teams press 2\n");
    scanf("%d", &n);
    if (n == 1)
    {
        zoom();
        meetANDchat();
        meetings();
        Contacts();
        setting();
    }
    if (n == 2)
    {

        LetsExploreTeamsFunctions();
    } // edtech 

    printf("Now , you have got a basic understanding of how a edtech app like teams or zoom works.\n");
    printf("Now we are not letting you go without a learning a thing or two so , many of us heard the term algorithms in our life at some time .....");
    printf("Some of you might know what it is , but some of us dont really understand what it is so we will help you learn the basics of algorithms \n");
    printf("We will not be surprised if some of you dont want to learn about algorithms \n");
    printf("If want to learn about algorithm press 1 else give any  another input \n");
    scanf("%d", &a);

    if (a == 1)
    {

        UnderstandingAlgorithms();
        printf("Thank you for your valuable time and we hope that our efforts to make you understand about Popular Edtech Apps  such as Teams or Zoom had been successfull!!\n");
    }
    else
    {
        printf("Have a nice journey of learnig ahead , GoodBye......");
    }
}