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
    const n = lines[0];
    const len = lines[1].split(' ');
    let lenInt = [];

    for (let i = 0; i < len.length; i++) {
        lenInt.push(parseInt(len[i]));
    }

    let count = 0;

    for (let i = 0; i < lenInt.length; i++) {
        for (let j = i + 1; j < lenInt.length; j++) {
            for (let k = j + 1; k < lenInt.length; k++) {
                if (lenInt[i] === lenInt[j] || lenInt[j] === lenInt[k] || lenInt[k] === lenInt[i]) {
                    continue;
                }

                const sum = lenInt[i] + lenInt[j] + lenInt[k];
                const max = Math.max(lenInt[i], lenInt[j], lenInt[k]);
                
                if ( max >= sum - max) {
                    continue;
                }

                count++;

            }
        }
    }

    // 表示
    console.log(count);
});