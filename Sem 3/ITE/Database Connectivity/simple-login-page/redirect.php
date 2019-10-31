<?php
    include 'connect.php';

    if(isset($_POST['userName'])){
        $userName = $_POST['userName'];
        $passWord = $_POST['passWord'];

        $sql = 'select * from admin where username = "'.$userName.'" and password="'.$passWord.'"';
        $query = mysqli_query($connect, $sql);
        $rows = mysqli_num_rows($query);

        if($rows == 1){
            header('Location: home.php');
        }else{
            echo 'Access Denied';
        }
    }
?>
