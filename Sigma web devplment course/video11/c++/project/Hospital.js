let menu = document.queryselector('#menu-btn');
let navbar = document.querySelector('.navbar');

menu.onclink = () =>{
    menu.classList.toggle('fa-times');
    navbar.classList.toggle('active');
}