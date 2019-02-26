<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title><?php echo $currentPage; ?></title>
	<link rel="stylesheet" href="css/normalize.css">
	<link rel="stylesheet" href="css/banner.css">
	<?php
	if($style == "home"){
		echo '<link rel="stylesheet" href="css/home.css">';	
	}
	else{
		echo '<link rel="stylesheet" href="css/styles.css">';	
	}
    ?>
	<link href="https://fonts.googleapis.com/css?family=Josefin+Slab|Love+Ya+Like+A+Sister|Merriweather" rel="stylesheet">
</head>
<body>
	<header class="banner">
	<a href="index.php" class="banner">
		<h1>Odd Student Out</h1>
	</a>
	<nav class="main-menu">
		<ul>
			<li><a href="index.php">Home</a></li>
			<li><a href="maisha.php">Mashia Idris</a></li>
			<li><a href="akshay.php">Akshyay Desai</a></li>
			<li><a href="genessis.php">Genessis Galindo</a></li>
		</ul>
	</nav>
    </header>

	<div class="container">
	