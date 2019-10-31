<?php
    $n = 3;
    for($cols = 0; $cols < $n; $cols++){
        $num = $cols + 1;

        // printing space
        for($space = 0; $space <= $n - $cols; $space++){
            echo "&nbsp;&nbsp;";
        }

        // &nbsp; - used for adding whitespaces(space character: ' ')

        //printing stars
        for($row = 0; $row <= $cols; $row++){
            echo "&nbsp;{$num}&nbsp;&nbsp;";
        }

        echo "<br>";
    }

    /*
        Output:
             1  
           2   2  
         3   3   3  
    */
?>