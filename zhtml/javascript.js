document.getElementById('biopic','welcome').addEventListener("mouseenter", promjeni);
	document.getElementById('biopic','welcome').addEventListener("mouseleave", promjeni2);
	
	
	
	function promjeni(){
		 
		 
		document.getElementById('biopic').setAttribute('src','images/negative.jpg');
		 refreshIntervalId =setInterval(rotiraj, 100);
		 promjeniPozadinu();

		}

	function promjeni2(){
		document.getElementById('biopic').setAttribute('src','images/biopic.jpg');
		clearInterval(refreshIntervalId);
		promjeniPozadinu();
	}

	function rotiraj(){
		var lista = document.getElementsByClassName("rotate");

		for(var j=0; j<lista.length; j++){
			text=lista[j].innerHTML;
			
			for (var i = 0; i < text.length-1; i++) { 

  				text = text[text.length-1]+text.substring(0, text.length-1);
			}
			lista[j].innerHTML=text;
		}
		for(var j=0; j<lista.length; j++){
			document.getElementsByClassName("rotate")[j].innerHTML=lista[j].innerHTML;
		}
			
			
	}

	function promjeniPozadinu(){
		var lista = document.getElementsByClassName("pattern");
		if(lista.length != 0){
			for(var j=0; j<lista.length; j++){
			document.getElementsByClassName("pattern")[j].setAttribute('class', 'alternative')
		}
		} else{
			lista = document.getElementsByClassName("alternative")
			for(var j=0; j<lista.length; j++){
			document.getElementsByClassName("alternative")[j].setAttribute('class', 'pattern')
			}
		}

		
			

		var lista = document.getElementsByClassName("light");
		if(lista.length != 0){
			for(var j=0; j<lista.length; j++){
			document.getElementsByClassName("light")[j].setAttribute('class', 'flames')
		}
		} else{
			lista = document.getElementsByClassName("flames")
			for(var j=0; j<lista.length; j++){
			document.getElementsByClassName("flames")[j].setAttribute('class', 'light')
			}
		}

		
		
	}