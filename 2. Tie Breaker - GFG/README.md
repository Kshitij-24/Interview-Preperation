# 2. Tie Breaker
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an<strong> array of names</strong> of candidates in an election. A candidate name in array represents a <strong>vote casted</strong> to the candidate. You need to find the <strong>candidate </strong>with<strong> maximum votes </strong>recieved in the election. It may happen that two or more candidates may have<strong> same votes</strong>, in that case you need to return the name of the&nbsp;candidate which comes<strong> first lexicographically</strong> in dictionary.</span></p>

<p><strong><span style="font-size:18px">Example 1 :</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
4
Turin Nick Turin Nick</span>

<span style="font-size:18px"><strong>Output:</strong>
Nick</span>

<span style="font-size:18px"><strong>Explanation:
</strong>Both have the same 2 number of votes but Nick comes<strong> </strong>first lexicographically.</span></pre>

<p><strong><span style="font-size:18px">Example 2&nbsp;:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
3
John Shushma Rajnath</span>

<span style="font-size:18px"><strong>Output:</strong>
John </span>

<span style="font-size:18px"><strong>Explanation:
</strong>All the three have same number of votes of 1.<strong> </strong>Lexicographically John comes first.</span></pre>

<p><span style="font-size:18px"><strong>User task:</strong> You need to complete the function <strong>TieBreak(names)</strong> containing array of names as an&nbsp;parameter, thus returning the name of the candidate.</span></p>

<p><span style="font-size:18px"><strong>Constraints</strong><br>
1 &lt;= <strong>N</strong> &lt;= 10<sup>4</sup><br>
<strong>names[]</strong>: {"abc","cde","abc"........}</span></p>
 <p></p>
            </div>