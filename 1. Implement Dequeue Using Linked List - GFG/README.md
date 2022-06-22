# 1. Implement Dequeue Using Linked List
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given a dequeue and q queries. The queries can be of 4 types:</span></p>

<ul>
	<li><span style="font-size:18px"><strong>ir x</strong>: Use insertRear to insert data x in dequeue.</span></li>
	<li><span style="font-size:18px"><strong>if x</strong>: Use insertFront to insert data x in dequeue.</span></li>
	<li><span style="font-size:18px"><strong>df</strong>: Use deleteFront to delete the front of dequeue. If dequeue is empty then don't do anything.</span></li>
	<li><span style="font-size:18px"><strong>dr</strong>: Use deleteRear to delete the rear of dequeue. If dequeue is empty then don't do anything.</span></li>
</ul>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> q = 4, queries[] = {(ir, 5), 
    (if, 7), (df), (if, 22)}
<strong>Output:</strong> 22
&nbsp;       5
<strong>Explanation:</strong> Here q = 4. First we insert 5 
at the back. Now we insert 7 in the front. 
The dequeue is now {7, 5}. Now we remove 
the front, so dequeue is now {5}. Now, we 
insert 22 in the front. The dequeue is now
{22, 5}. So the front is 22 and the rear 
is 5.
</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> q = 1, queries[] = {(ir, 8)} 
<strong>Output:</strong> 8
<strong>Explanation: </strong>Insert 8 in back, so front 
and rear elements are same, which is 8.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong> This is a function problem. You only need to complete the given functions <strong>insertFront(),&nbsp;&nbsp;insertRear(),&nbsp;deleteFront(),&nbsp;deleteRear()</strong>. The printing at the end is done by the driver code. </span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(1) for all operations.<br>
<strong>Expected Auxilliary Space</strong>: O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Number of queries ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>