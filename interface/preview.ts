const markdownInput: string = "# Welcome to Mark-Down-Hero\nThis is a **bold** move!";

function render(text: string) {
    console.log("Rendering Live Preview...");
    return text.replace(/\*\*(.*?)\*\*/g, '<b>$1</b>');
}

console.log(render(markdownInput));
