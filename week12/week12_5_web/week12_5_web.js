function setup() {
    initializeFields();
    createCanvas(300, 300);
    textSize(40);
}

var choice;

function draw() {
    background(color(0xFF, 0xE8, 0xFF));
    fill(color(0xC5, 0xB9, 0xCD));
    if (choice == 0)
        rect(50, 50, 150, 2);
    if (choice == 1)
        rect(50, 100, 150, 2);
    if (choice == 2)
        rect(50, 150, 150, 2);
    text("Choice 1", 50, 50);
    text("Choice 2", 50, 100);
    text("Choice 3", 50, 150);
}

function mousePressed() {
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}
