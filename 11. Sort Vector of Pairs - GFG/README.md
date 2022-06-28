# 11. Sort Vector of Pairs
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a <strong>vector </strong>of pairs of <strong>size n</strong> where first element of pair is the <strong>age </strong>and the second element is the <strong>height</strong>, you need to sort the vector of pairs in <strong>descending </strong>order by the second item of the pair. And if the second items are <strong>equal</strong>, then sort it by first element.</span></p>

<p><span style="font-size:18px"><strong>Input Format:</strong><br>
First line of input contains number of testcase, <strong>T</strong>. For each testcase, first line of input contains N, size of vector. Next line contains 2*N elements seperated by space.</span></p>

<p><span style="font-size:18px"><strong>Output Format:</strong><br>
For each testcase, in a new line, print the vector.</span></p>

<p><span style="font-size:18px"><strong>User Task:</strong><br>
Your task is to complete the function <strong>sortBySec()</strong> which accepts <strong>a vector of pair </strong>as parameter and returns the sorted vector.&nbsp; The printing is done automatically by the driver code.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= T &lt;= 100<br>
1 &lt;= N &lt;= 100</span></p>

<p><span style="font-size:18px"><strong>Example:<br>
Input:</strong><br>
2<br>
2<br>
1 4 2 4<br>
2<br>
1 6 2 10<br>
<strong>Output:</strong></span><br>
<span style="font-size:18px">(2,4) (1,4)<br>
(2,10) (1,6)</span></p>

<p><span style="font-size:18px"><strong>Explanation:<br>
Testcase 1:</strong> The first pair in the vector is 1 4, and the second is 2 4. Now since the second elements of the pairs are equal to 4, we need to sort by the first element. Now, since 2 is greater than 1 so 2,4 comes before 1,4.<br>
<strong>Testcase 2: </strong>The first pair in the vector is 1 6, and the second is 2 10. Now comparing the second elements of the pair. We see that 10&gt;6 so 2,10 will come before 1,6. </span></p>
 <p></p>
            </div>