[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]

## convertNoteToMidi

convertNoteToMidi is a useful C library that converts any single musical note value and octave to a midi note. I created it to create a simple means to integrate string-based musical notes in my C based musical projects. This library could be useful for anyone needing to type note values like `C#`, `Bb`, or `D` into your C programs and need to get a precise midi note.

  ```c
  char *note = "G#";
  int octave = -2;
  int test = convertNoteToMidi(note, octave);
  printf("The midi value of %s at octave %i is: %i\n", note, octave, test);
  ```

  ```
  The midi value of G# at octave -2 is: 8
  ```

### Built With

* [![Clang][Clang]][Clang-url]

### Installation

1. Download this repo to your local drive.
2. Open a terminal.
3. Navigate in your terminal to the folder containing this repo.

## Usage

1. First, run `make convertNoteToMidi`.
2. Second, execute `./main`. Oogle at the output.
3. Third, open main.c and modify the `note` and `octave` to your liking.
4. Fourth, run `make convertNoteToMidi` again.
5. Fifth, execute `./main` again and see the output.
6. Finally, modify `main.c` for your use. Make sure you look at the text of the `Makefile` so you understand how to bring in external libraries into your own C program.

## Contributing

Your contributions to this project are very much appreciated. If you would like to help make this project better, fork to repo and create a pull request. Alternatively, you can open an issue with the tag "request." Please star this project!

1. Fork the Project and make a branch with your feature (`git checkout -b feature/myFeature`).
3. Commit your Changes (`git commit -m 'Added myFeature'`).
4. Push to the Branch (`git push origin feature/myFeature`).
5. Open a Pull Request.

## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

## Contact

[![www.gelvinwhite.com][www.gelvinwhite.com]]

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/guyewhite/convertNoteToMidi.svg?style=for-the-badge
[contributors-url]: https://github.com/guyewhite/convertNoteToMidi/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/guyewhite/convertNoteToMidi.svg?style=for-the-badge
[forks-url]: https://github.com/guyewhite/convertNoteToMidi/network/members
[stars-shield]: https://img.shields.io/github/stars/guyewhite/convertNoteToMidi.svg?style=for-the-badge
[stars-url]: https://github.com/guyewhite/convertNoteToMidi/stargazers
[issues-shield]: https://img.shields.io/github/issues/guyewhite/convertNoteToMidi.svg?style=for-the-badge
[issues-url]: https://github.com/guyewhite/convertNoteToMidi/issues
[license-shield]: https://img.shields.io/github/license/guyewhite/convertNoteToMidi.svg?style=for-the-badge
[license-url]: https://github.com/guyewhite/convertNoteToMidi/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/linkedin_username
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com
[Python.org]: https://img.shields.io/badge/python-version?style=for-the-badge&logo=python&logoColor=FFFFFF
[Python-url]: https://python.org
[Clang]: https://img.shields.io/badge/Clang-version?style=for-the-badge&logo=C&logoColor=FFFFFF
[Clang-url]: https://clang.llvm.org/
