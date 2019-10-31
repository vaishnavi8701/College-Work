<!-- Generate fibonacci series -->

<?php
    $n = 5;
    $f0 = 0;
    $f1 = 1;
    
    echo 'Fibonacci Series: '.$f0.' '.$f1.' ';
    for($i = 0; $i < $n; $i++){
        $f2 = $f0 + $f1;
        echo $f2.' ';
        $f0 = $f1;
        $f1 = $f2;
    }
?>

<!-- 
    Output:
    Fibonacci Series: 0 1 1 2 3 5 8
 -->