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
    let [x, k, d] = lines[0].split(' ');
    x = parseInt(x);
    k = parseInt(k);
    d = parseInt(d);

    let ans = Math.abs(x);

    if (Math.abs(x) > k * d) {
        // xの絶対値がk * dより大きいとき

        if (x < 0) {
            ans = Math.abs(x + k * d);
        } else {
            ans = Math.abs(x - k * d);
        }

    } else {
        // xの絶対値がk * d以下のとき

        if (x < 0) {
            let cnt = 0;
            while( Math.abs(x) > d ) {
                x += d;
                cnt++;
            }

            ans = (k - cnt) % 2 == 0 ? Math.abs(x) : Math.abs(x + d);

        } else {
            let cnt = 0;
            while( Math.abs(x) > d ) {
                x -= d;
                cnt++;
            }
            ans = (k - cnt) % 2 == 0 ? Math.abs(x) : Math.abs(x - d);
        }
    }

    // 表示
    console.log(ans);
});