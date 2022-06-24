# 10. Display Circular Doubly Linked List
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a circular doubly linked list consisting of <strong>N</strong> nodes, the task is to print the elements from head to tail, then from tail to head in two separate lines.<br>
The tail of a circular doubly linked list is connected to head via its next pointer, and the previous pointer of head is connected to the tail.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 1&lt;-&gt;2
(the last and first node are connected,
i.e. 2&lt;-&gt;1)
<strong>Output:
</strong>1 2</span>
<span style="font-size:18px">2 1</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 2&lt;-&gt;5&lt;-&gt;7&lt;-&gt;8&lt;-&gt;99&lt;-&gt;100
<strong>Output:
</strong>2 5 7 8 99 100
100 99 8 7 5 2</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>displayList</strong>() which takes <strong>head </strong>reference as an argument and&nbsp;<strong>return&nbsp;</strong>&nbsp;the the circular doubly linked list as a list.&nbsp;<br>
<strong>Note:&nbsp;</strong>The returned list is printed twice, once forward and once backward.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N&lt;= 10<sup>3</sup></span></p>
 <p></p>
            </div>