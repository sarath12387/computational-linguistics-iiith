            Functionalities

1:Create a dropdown with English and Hindi,then select any one language as an option.

2:After selecting english a dropdown will appear telling "select a sentence" which has multiple english sentences same is the procedure for hindi.

3:The first column(heading as Lexicon) is populated with the selected sentence, the second column(heading POS) contains a dropdown that is populated with multiple POS tags and this dropdown can be seen for as many rows as there in the first column. 

4: The default dropdown value for all dropdowns should be Noun. The third and fourth columns are for now empty.

5:whenever the user thinks have made the choice of correct POS tags the user can click submit and the third coloumn  now becomes populated with a tick or a cross pertaining to whether the choice you made in the dropdown and the actual correct POS tag match or not.

6:If all the user POS tags are correct, and the third column is filled with all green ticks, the experiment is over. But if, any of the rows of the third column are filled with a red cross, a button is displayed saying “Get Answer” wherein if clicked, the fourth and final column is populated with the actual correct POS Tags.

7: To check the correct answer with the answers given by the user  and also to create the 4th column if user enters any wrong option in the dropdown, you will have to incorporate the POS tagger library into your javascript code.

8:if the answer submitted by the user is wrong and if it is corrected the red cross symbol is changed to
green tick mark in the third coloumn.

9:  The Get Answer is a togglable button i.e. when clicked it will hide or show the fourth column and the corresponding text of the button changes to Hide Answer.

10:The sentence if chosen while table dropdown is being chosen, the table resets to default values wherein the first column gets populated with the first sentence.

