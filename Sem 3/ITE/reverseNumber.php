<!-- Reverse the Given number -->

<?php
    $n = 123;
    $temp = $n;
    $rev = 0;
    while($temp > 0){
        $rem = $temp % 10;
        $rev = ($rev * 10) + $rem;
        $temp = (int)($temp / 10);
    }
    echo 'Sum of given number: '.$n.' is '.$rev;
?>

<!-- 
    Output:
    Sum of given number: 123 is 321
 -->