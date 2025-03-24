#!/bin/bash

# 使い方
#
# ```bash
# ./check_dependency.sh <実行可能バイナリ>
# ```

# 許可された関数のリスト
ALLOWED_FUNCTIONS=()

# printfをheader表示のためだけに使っている
# printf関数内部でputsを呼び出すためかシンボルテーブルに乗ってしまうが問題ない


# 監視するバイナリ
TARGET_BINARY="$1"

if [ -z "$TARGET_BINARY" ]; then
    echo "Usage: $0 <binary>"
    exit 1
fi

# nm で外部シンボルを取得（`U` でマークされた関数）
UNUSED_SYMBOLS=$(nm -u "$TARGET_BINARY" | awk '$1 == "U" {print $2}' | cut -d'@' -f1)

# echo TARGET_BINARY $TARGET_BINARY

echo 見つかった関数
echo $UNUSED_SYMBOLS

if [ -z "$UNUSED_SYMBOLS" ]; then
    echo "No undefined symbols found."
    exit 0
fi

# 許可されていない関数を抽出
for symbol in $UNUSED_SYMBOLS; do
    if ! [[ " ${ALLOWED_FUNCTIONS[*]} " =~ " $symbol " ]]; then
        echo "WARNING: Unauthorized function detected: $symbol"
    fi
done


