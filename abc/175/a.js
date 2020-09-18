let lines = [];
let reader = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

// 標準入力の読み込み
reader.on('line', function(line) {
    lines.push(line);
});

reader.on('close', function() {
    // 処理の記述
    const str = lines[0];
    let result = 0;
    if (str === 'RRR') {
        result = 3;
    } else if (str === 'SSS') {
        result = 0;
    } else if (str === 'RRS' || str === 'SRR') {
        result = 2;
    } else {
        result = 1;
    }

    // 表示
    console.log(result);
});