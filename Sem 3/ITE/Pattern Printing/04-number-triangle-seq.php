<?php
    $n = 3;
    $num = 1;
    for($cols = 0; $cols < $n; $cols++){
        // printing space
        for($space = 0; $space <= $n - $cols; $space++){
            echo "&nbsp;&nbsp;";
        }

        // &nbsp; - used for adding whitespaces(space character: ' ')

        //printing stars
        for($row = 0; $row <= $cols; $row++){
            echo "&nbsp;{$num}&nbsp;&nbsp;";
            $num = $num + 1;
        }

        echo "<br>";
    }

    /*
        Output:
             1  
           2   3  
         4   5   6  
    */
?>