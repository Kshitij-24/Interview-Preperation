# 12. Compare Circular Doubly Linked Lists
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two circular doubly linked lists of sizes n1 and n2 respectively, the task is check if the corresponding elements of the lists are same or not.<br>
The tail of a circular doubly linked list is connected to head via its next pointer, and the previous pointer of head is connected to the tail.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList1: 1
LinkedList2: 1
<strong>Output:</strong> 1</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList1: 2&lt;-&gt;5&lt;-&gt;7&lt;-&gt;8&lt;-&gt;99&lt;-&gt;100
LinkedList2: 7&lt;-&gt;8&lt;-&gt;9&lt;-&gt;73&lt;-&gt;2
<strong>Output:</strong> 0</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>compareCLL</strong>() which takes <strong>head1 and head2 </strong>references as an arguments. The function should <strong>return true </strong>if all the corresponding elements of the lists are <strong>same</strong>, else it <strong>should </strong>return <strong>false</strong>. (The driver's code print 1 if the returned value is true, otherwise false.)</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n1 + n2).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= number of nodes&nbsp;&lt;= 10<sup>5</sup></span></p>
 <p></p>
            </div>