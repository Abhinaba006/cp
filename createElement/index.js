console.log('hi');
const fuck = () => {
    const redDiv = document.createElement('red');
    const greenDiv = document.createElement('green');
    const btn = document.getElementById('btn');
    btn.insertBefore(redDiv, btn.firstChild);
    btn.insertBefore(greenDiv, redDiv);
    console.log('fuck');
}