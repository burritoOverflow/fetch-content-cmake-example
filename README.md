Trivial example of using CMake's `FetchContent` to install and use [fmt](https://github.com/fmtlib/fmt).

Note:
For building `fmt` as a shared library, pass `-DBUILD_SHARED_LIBS=TRUE`, see the rest of the [fmt docs for CMake here](https://fmt.dev/latest/usage.html)

These options are passed at configuration time for the project using the dependency, i.e, at this project's root:

```bash
cmake -S . -B build_shared -D BUILD_SHARED_LIBS=TRUE
```

Also be configured via the provided CMake presets:
```bash
cmake --preset "configure preset name"
cmake --build --preset "build preset name"
```

WHere the `configure` and `build` presets are those present in the `CMakePresets.json`.
