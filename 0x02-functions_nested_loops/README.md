<h1 class="gap" style="box-sizing: border-box; font-size: 36px; margin-top: 50px !important; margin-right: 0px; margin-bottom: 10px; margin-left: 0px; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">0x02. C - Functions, nested loops</h1>
<div data-react-cache-id="tags/Tags-0" data-react-class="tags/Tags" data-react-props='{"tags":[]}' style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;"><br></div>
<ul class="list-group metadata" style="box-sizing: border-box; margin-top: 0px; margin-bottom: 20px; padding-left: 0px; font-size: 11px; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <li class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: -1px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-top-left-radius: 4px; border-top-right-radius: 4px;"><i aria-hidden="true" class="fa fa-user  fa-fw" style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; width: 1.28571em; text-align: center;"></i> By Julien Barbier</li>
    <li class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: -1px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221);"><i aria-hidden="true" class="fa fa-cogs  fa-fw" style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; width: 1.28571em; text-align: center;"></i> Weight: 1</li>
    <li class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: -1px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221);"><i aria-hidden="true" class="fa fa-calendar  fa-fw" style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; width: 1.28571em; text-align: center;"></i> Ongoing project - started 02-14-2022, must end by 02-16-2022 (in 1 day) - you&apos;re done with&nbsp;<span style="box-sizing: border-box;">0</span>% of tasks.</li>
    <li class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: -1px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221);"><i aria-hidden="true" class="fa fa-check  fa-fw" style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; width: 1.28571em; text-align: center;"></i> Checker will be released at 02-15-2022 12:00 AM</li>
    <li class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-bottom-right-radius: 4px; border-bottom-left-radius: 4px;"><i aria-hidden="true" class="fa fa-check-square  fa-fw" style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; width: 1.28571em; text-align: center;"></i> An auto review will be launched at the deadline</li>
</ul>
<div class="well clean" style="box-sizing: border-box; min-height: 20px; padding: 19px; margin-bottom: 20px; background: white; border: 1px solid rgb(238, 238, 238); border-radius: 4px; box-shadow: none; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <h2 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 30px;">Resources</h2>
    <p style="box-sizing: border-box; margin: 0px 0px 10px;"><strong style="box-sizing: border-box; font-weight: bold;">Read or watch</strong>:</p>
    <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/L0Vf5XJdD7ylLOyQnzVY6Q" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="Nested while loops">Nested while loops</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/pU9KLKlz0W2ZSSlzJsYA7w" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="C - Functions">C - Functions</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/pu-exPylodWaQjU7f6KhYQ" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="Learning to Program in C (Part 06)">Learning to Program in C (Part 06)</a> (<em style="box-sizing: border-box;">stop at 14:00</em>)</li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/bANgUAj_-F9_85yHxzSD6w" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="What is the purpose of a function prototype?">What is the purpose of a function prototype?</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/xC6XfUoznEIJgfdP52GUIw" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="C - Header Files">C - Header Files</a> (<em style="box-sizing: border-box;">stop before the &ldquo;Once-Only Headers&rdquo; paragraph</em>)</li>
    </ul>
    <h2 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 30px;">Learning Objectives</h2>
    <p style="box-sizing: border-box; margin: 0px 0px 10px;">At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/kk-N0deGCGSwdlvk-U_4XA" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong style="box-sizing: border-box; font-weight: bold;">without the help of Google</strong>:</p>
    <h3 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 24px;">General</h3>
    <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
        <li style="box-sizing: border-box;">What are nested loops and how to use them</li>
        <li style="box-sizing: border-box;">What is a function and how do you use functions</li>
        <li style="box-sizing: border-box;">What is the difference between a declaration and a definition of a function</li>
        <li style="box-sizing: border-box;">What is a prototype</li>
        <li style="box-sizing: border-box;">Scope of variables</li>
        <li style="box-sizing: border-box;">What are the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>gcc</code> flags&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>-Wall -Werror -pedantic -Wextra -std=gnu89</code></li>
        <li style="box-sizing: border-box;">What are header files and how to to use them with&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>#include</code></li>
    </ul>
    <h2 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 30px;">Requirements</h2>
    <h3 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 24px;">General</h3>
    <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
        <li style="box-sizing: border-box;">Allowed editors:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>vi</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>vim</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>emacs</code></li>
        <li style="box-sizing: border-box;">All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>gcc</code>, using the options&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
        <li style="box-sizing: border-box;">All your files should end with a new line</li>
        <li style="box-sizing: border-box;">A&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>README.md</code> file, at the root of the folder of the project is mandatory</li>
        <li style="box-sizing: border-box;">Your code should use the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
        <li style="box-sizing: border-box;">You are not allowed to use global variables</li>
        <li style="box-sizing: border-box;">No more than 5 functions per file</li>
        <li style="box-sizing: border-box;">You are not allowed to use the standard library. Any use of functions like&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>puts</code>, etc&hellip; is forbidden</li>
        <li style="box-sizing: border-box;">You are allowed to use&nbsp;<a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="_putchar">_putchar</a></li>
        <li style="box-sizing: border-box;">You don&rsquo;t have to push&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
        <li style="box-sizing: border-box;">In the following examples, the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>main.c</code> files at compilation. Our&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>main.c</code> files might be different from the one shown in the examples</li>
        <li style="box-sizing: border-box;">The prototypes of all your functions and the prototype of the function&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>_putchar</code> should be included in your header file called&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>main.h</code></li>
        <li style="box-sizing: border-box;">Don&rsquo;t forget to push your header file</li>
    </ul>
    <h2 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 30px;">More Info</h2>
    <p style="box-sizing: border-box; margin: 0px 0px 10px;">You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.</p>
</div>
<h2 class="gap" style="box-sizing: border-box; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 50px !important; margin-bottom: 10px; font-size: 30px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">Quiz questions</h2>
<div class="panel panel-default" style="box-sizing: border-box; margin-bottom: 20px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
        <p style="box-sizing: border-box; margin: 0px 0px 10px; color: rgb(217, 83, 79); font-size: 14px;">Show</p>
    </div>
</div>
<h2 class="gap" style="box-sizing: border-box; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 50px !important; margin-bottom: 10px; font-size: 30px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">Tasks</h2>
<div data-position="1" data-role="task846" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">0. _putchar</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a program that prints&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>_putchar</code>, followed by a new line.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">The program should return&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0</code></li>
            </ul>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
julien@ubuntu:~/0x02$ ./0-putchar 
_putchar
julien@ubuntu:~/0x02$ 
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0-putchar.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="846" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-846-users-done-modal" data-task-id="846" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="2" data-role="task847" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">1. I sometimes suffer from insomnia. And when I can&apos;t fall asleep, I play what I call the alphabet game</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that prints the alphabet, in lowercase, followed by a new line.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>void print_alphabet(void);</code></li>
                <li style="box-sizing: border-box;">You can only use&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>_putchar</code> twice in your code</li>
            </ul>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$ cat 1-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1-alphabet.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="847" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-847-users-done-modal" data-task-id="847" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="3" data-role="task848" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">2. 10 x alphabet</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>void print_alphabet_x10(void);</code></li>
                <li style="box-sizing: border-box;">You can only use&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>_putchar</code> twice in your code</li>
            </ul>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$ cat 2-main.c
#include &quot;main.h&quot;

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
julien@ubuntu:~/0x02$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$ 
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>2-print_alphabet_x10.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="848" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-848-users-done-modal" data-task-id="848" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="4" data-role="task849" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">3. islower</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that checks for lowercase character.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>int _islower(int c);</code></li>
                <li style="box-sizing: border-box;">Returns&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1</code> if&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>c</code> is lowercase</li>
                <li style="box-sizing: border-box;">Returns&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0</code> otherwise</li>
            </ul>
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">FYI: The standard library provides a similar function:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>islower</code>. Run&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>man islower</code> to learn more.</p>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$ cat 3-main.c 
#include &quot;main.h&quot;

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower(&apos;H&apos;);
    _putchar(r + &apos;0&apos;);
    r = _islower(&apos;o&apos;);
    _putchar(r + &apos;0&apos;);
    r = _islower(108);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower 
011
julien@ubuntu:~/0x02$ 
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>3-islower.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="849" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-849-users-done-modal" data-task-id="849" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="5" data-role="task850" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">4. isalpha</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that checks for alphabetic character.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>int _isalpha(int c);</code></li>
                <li style="box-sizing: border-box;">Returns&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1</code> if&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>c</code> is a letter, lowercase or uppercase</li>
                <li style="box-sizing: border-box;">Returns&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0</code> otherwise</li>
            </ul>
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">FYI: The standard library provides a similar function:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>isalpha</code>. Run&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>man isalpha</code> to learn more.</p>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$ cat 4-main.c 
#include &quot;main.h&quot;

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha(&apos;H&apos;);
    _putchar(r + &apos;0&apos;);
    r = _isalpha(&apos;o&apos;);
    _putchar(r + &apos;0&apos;);
    r = _isalpha(108);
    _putchar(r + &apos;0&apos;);
    r = _isalpha(&apos;;&apos;);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
julien@ubuntu:~/0x02$ ./4-isalpha 
1110
julien@ubuntu:~/0x02$ 
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>4-isalpha.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="850" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-850-users-done-modal" data-task-id="850" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="6" data-role="task851" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">5. Sign</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that prints the sign of a number.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>int print_sign(int n);</code></li>
                <li style="box-sizing: border-box;">Returns&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1</code> and prints&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>+</code> if&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>n</code> is greater than zero</li>
                <li style="box-sizing: border-box;">Returns&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0</code> and prints&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0</code> if&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>n</code> is zero</li>
                <li style="box-sizing: border-box;">Returns&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>-1</code> and prints&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>-</code> if&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>n</code> is less than zero</li>
            </ul>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$ cat 5-main.c
#include &quot;main.h&quot;

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(&apos;,&apos;);
    _putchar(&apos; &apos;);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    r = print_sign(0);
    _putchar(&apos;,&apos;);
    _putchar(&apos; &apos;);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    r = print_sign(0xff);
    _putchar(&apos;,&apos;);
    _putchar(&apos; &apos;);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    r = print_sign(-1);
    _putchar(&apos;,&apos;);
    _putchar(&apos; &apos;);
    _putchar(r + &apos;0&apos;);
    _putchar(&apos;\n&apos;);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
julien@ubuntu:~/0x02$ ./5-sign 
+, 1
0, 0
+, 1
-, /
julien@ubuntu:~/0x02$ 
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>5-sign.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="851" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-851-users-done-modal" data-task-id="851" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="7" data-role="task852" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that computes the absolute value of an integer.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>int _abs(int);</code></li>
            </ul>
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">FYI: The standard library provides a similar function:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>abs</code>. Run&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>man abs</code> to learn more.</p>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$ cat 6-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf(&quot;%d\n&quot;, r);
    r = _abs(0);
    printf(&quot;%d\n&quot;, r);
    r = _abs(1);
    printf(&quot;%d\n&quot;, r);
    r = _abs(-98);
    printf(&quot;%d\n&quot;, r);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs
julien@ubuntu:~/0x02$ ./6-abs 
1
0
1
98
julien@ubuntu:~/0x02$ 
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>6-abs.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="852" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-852-users-done-modal" data-task-id="852" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="8" data-role="task853" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">7. There are only 3 colors, 10 digits, and 7 notes; it&apos;s what we do with them that&apos;s important</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that prints the last digit of a number.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>int print_last_digit(int);</code></li>
                <li style="box-sizing: border-box;">Returns the value of the last digit</li>
            </ul>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$ cat 7-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar(&apos;0&apos; + r);
    _putchar(&apos;\n&apos;);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
julien@ubuntu:~/0x02$ ./7-last_digit 
8044
julien@ubuntu:~/0x02$ 
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>7-print_last_digit.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="853" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-853-users-done-modal" data-task-id="853" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="9" data-role="task854" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">8. I&apos;m federal agent Jack Bauer, and today is the longest day of my life</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>void jack_bauer(void);</code></li>
                <li style="box-sizing: border-box;">You can listen to&nbsp;<a href="https://intranet.hbtn.io/rltoken/CF-MAQgUTibmVPRfQF3VkQ" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="this soundtrack">this soundtrack</a> while coding :)</li>
            </ul>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$ cat 8-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
julien@ubuntu:~/0x02$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
julien@ubuntu:~/0x02$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
julien@ubuntu:~/0x02$ ./8-24 | wc -l
1440
julien@ubuntu:~/0x02$ 
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>8-24_hours.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="854" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-854-users-done-modal" data-task-id="854" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="10" data-role="task855" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">9. Learn your times table</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that prints the 9 times table, starting with 0.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>void times_table(void);</code></li>
                <li style="box-sizing: border-box;">Format: see example</li>
            </ul>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$ cat 9-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr &apos; &apos; . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$ 
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>9-times_table.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="855" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-855-users-done-modal" data-task-id="855" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="11" data-role="task856" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">10. a + b</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that adds two integers and returns the result.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>int add(int, int);</code></li>
            </ul>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/$ cat 10-main.c
#include &quot;main.h&quot;
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf(&quot;%d\n&quot;, n);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add
julien@ubuntu:~/0x02$ ./10-add 
98
julien@ubuntu:~/0x02$ 
</code></pre>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x02-functions_nested_loops</code></li>
                    <li style="box-sizing: border-box;">File:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>10-add.c</code></li>
                </ul>
            </div>
        </div>
        <div class="panel-footer" style="box-sizing: border-box; padding: 10px 15px; background-color: rgb(245, 245, 245); border-top: 0px solid rgb(221, 221, 221); border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;">
            <div style="box-sizing: border-box;"><button class="student_task_done btn btn-default btn-sm no" data-task-id="856" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><span class="no" style="box-sizing: border-box; display: inline;"><i aria-hidden="true" class="fa fa-square-o " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased;"></i></span> Done<span class="no pending" style="box-sizing: border-box; display: inline;">?</span></button> <button class="users_done_for_task btn btn-default btn-sm" data-project-id="214" data-target="#task-856-users-done-modal" data-task-id="856" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);">Help</button> <button class="btn btn-default btn-sm" data-target="#container-specs-modal" data-toggle="modal" style="box-sizing: border-box; color: rgb(51, 51, 51); font-style: inherit; font-variant: inherit; font-weight: normal; font-stretch: inherit; font-size: 12px; line-height: 1.5; font-family: inherit; margin: 0px; overflow: visible; text-transform: none; appearance: button; cursor: pointer; display: inline-block; text-align: center; white-space: nowrap; vertical-align: middle; touch-action: manipulation; background-image: none; border: 1px solid rgb(204, 204, 204); padding: 5px 10px; border-radius: 3px; user-select: none; background-color: rgb(255, 255, 255);"><i aria-hidden="true" class="fa fa-terminal " style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; margin-right: 5px;"></i><span style="box-sizing: border-box;">Get a sandbox</span></button></div>
        </div>
    </div>
</div>
<div data-position="12" data-role="task857" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">11. 98 Battery Street, the OG</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that prints all natural numbers from&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>n</code> to&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>98</code>, followed by a new line.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>void print_to_98(int n);</code></li>
                <li style="box-sizing: border-box;">Numbers must be separated by a comma, followed by a space</li>
                <li style="box-sizing: border-box;">Numbers should be printed in order</li>
                <li style="box-sizing: border-box;">The first printed number should be the number passed to your function</li>
                <li style="box-sizing: border-box;">The last printed number should be&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>98</code></li>
                <li style="box-sizing: border-box;">You are allowed to use the standard library</li>
            </ul>
            <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>julien@ubuntu:~/0x02$ cat 11-main.c
#include &quot;main.h&quot;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98
julien@ubuntu:~/0x02$ ./11-98 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
98
111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
julien@ubuntu:~/0x02$ </code></pre>
        </div>
    </div>
</div>
