## Compile natively with:
```
docker run -ti --rm -v $PWD:/src rust bash -c "cd /src && rustc src/lib.rs -o hello-rust && ./hello-rust"
```

## For WASM:
Compile with:
```
docker build -t myrust .
docker run -ti --rm -v $PWD:/src myrust bash -c "cd /src && wasm-pack build --target web"
```

Then serve through a webserver (file:// fails to load), eg:
```
python3 -m http.server 4444
```

Then open http://{ip}:4444/hello-rust.html in browser.

"Hello from Rust!" should be shown in an alert.


## Note(s):

Running docker with `-u $(id -u ${USER}):$(id -g ${USER})` results in an error: "error: failed to open /usr/local/cargo/registry/cache/..."

WASM file is `pkg/hello_rust_bg.wasm`