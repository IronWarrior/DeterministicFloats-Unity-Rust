This repo contains tests to check the determinism (consistency) of the basic floating point arithmetic operations (add, subtract, multiply, divide) on different devices. The arithmetic is performed both in a managed C# environment, as well as via external calls to a native binary (written in Rust) for comparison. Determinism has many applications, and is essential for some real-time networking paradigms in video games.

![Shows image of completed test of 2002084 operations with no errors.](https://i.imgur.com/CthVpgo.png)

Tests normal numbers, denormal numbers, NaN and infinities, each against themselves and against each other. See all tests in the [DeterminismTest class](Unity/Assets/DeterminismTest.cs). It does **not** currently test the consistency of other operations, like hardware trigonometry (note that these can be implemented in software provided the basic operations are deterministic; see [Rapier](https://rapier.rs/) for an example of cross platform float determinism using this approach).

### Disclaimer

The author of this repo is not an expert in floating point arithmetic determinism. If you have any improvements to add please feel free to contribute or correct any oversights.

## Results

| Platform      | Device                        | Backend      | Float errors  | Dfloat errors | Notes         |
| ------------- | ------------------------------|--------------|---------------|---------------|---------------|                                                
| Windows 10    | Intel(R) Core(TM) i7-10700K   | Editor/IL2CPP| 0           | 0           | Used as ground truth              |
| Android  | Samsung Galaxy S6                  | IL2CPP       | 0             | 0             |               |

_Where `Float errors` refers to arithmetic run in the managed C# environment, and `Dfloat errors` in the calls to the native binary._

### Notes

* Operations involving NaN floats return non-deterministic results. This should not be an issue for applications that require determinism, as either
  * NaNs create serious enough bugs that desyncs no longer matter.
  * The developer can choose to check for NaNs after each operation and resolve the issue there (this repo simply treats all NaN results as if they were the same bit sequence).
* Unity's documentation does not make any statement on float determinism either way, so even with consistent results there is no guarantee future versions do not change this.
* [ARMv7 apparently handles denormal numbers differently from ARMv8](https://stackoverflow.com/a/53993942), so should not be a surprise if it desyncs there. 
* Not sure if the .NET runtime itself makes any guarantee of cross platform float determinism, or has any settings for that.
* Calls to native binaries in C# [have a lot of overhead](https://docs.microsoft.com/en-us/cpp/dotnet/calling-native-functions-from-managed-code?redirectedfrom=MSDN&view=msvc-170#performance-considerations), so using it to solve determinism is not really practical where performance is critical, and is used here mainly for comparison.

## Running the tests

* Open the Unity project. _(It contains pre-built binaries for Windows and Android. If you want to test on other platforms, build the binary for it per the steps below._)
* In the `Main` scene on the `Test` game object's `DeterminismTest` component, click `Generate`. This will write a file containing randomly generated floats to use for tests, as well as the results of the tests using arithmetic in the managed environment and using the native binary.
* Press play to validate the test is functioning correctly. It will display any arithmetic results that did not match the ground truth (up to `DeterminismTest.LogOutputLimit`) as well as a summary of all the results.
* Build to your target platform to run the test on it.

## Building the native Rust binaries

* [Install Rust](https://www.rust-lang.org/tools/install)
  * For Windows run `cargo build --target x86_64-pc-windows-msvc --release`
  * For Android, install [cargo-ndk](https://github.com/bbqsrc/cargo-ndk). Run `cargo ndk -t aarch64-linux-android build --release`
  * For other platforms...no idea? The author learned Rust specifically for this experiment :)
