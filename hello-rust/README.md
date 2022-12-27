## Compile natively with:
```
docker run -ti --rm -v $PWD:/src rust bash -c "cd /src && rustc src/lib.rs -o hello-rust && ./hello-rust"
```

## For WASM:
Compile with:
```
docker build -t myrust .
docker run -ti --rm -v $PWD:/src myrust bash -c "cd /src && wasm-pack build"
```


## Note(s):

Running docker with `-u $(id -u ${USER}):$(id -g ${USER})` results in an error: "error: failed to open /usr/local/cargo/registry/cache/..."

Output seems to be in [target/wasm32-unknown-unknown/release](target/wasm32-unknown-unknown/release)