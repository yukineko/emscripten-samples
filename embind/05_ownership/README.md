# ownerdhip
jsとwasmのどちらでメモリーをもつかということ

take_ownershipはemscripten側で生成し、js側でmemoryを持つ

allow_raw_pointerはwasmでメモリーをもち、その内(int)を返す

raw pointerをかえすのは危険だが、直接的にAPI経由でwasm内部にアクセスできてしまうというのがある