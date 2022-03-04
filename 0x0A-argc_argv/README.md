<h1 class="gap" style="box-sizing: border-box; font-size: 36px; margin-top: 50px !important; margin-right: 0px; margin-bottom: 10px; margin-left: 0px; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">0x0A. C - argc, argv</h1>
<h1 class="gap" style="box-sizing: border-box; font-size: 36px; margin-top: 50px !important; margin-right: 0px; margin-bottom: 10px; margin-left: 0px; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">Learning Objectives</h1>
<div class="well clean" style="box-sizing: border-box; min-height: 20px; padding: 19px; margin-bottom: 20px; background: white; border: 1px solid rgb(238, 238, 238); border-radius: 4px; box-shadow: none; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <p style="box-sizing: border-box; margin: 0px 0px 10px;">At the end of this project, you are expected to be able to <a href="https://intranet.hbtn.io/rltoken/LlxSqMZX9I3fvnUqZa9osg" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="explain to anyone">explain to anyone</a>, <strong style="box-sizing: border-box; font-weight: bold;">without the help of Google</strong>:</p>
    <h3 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 24px;">General</h3>
    <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
        <li style="box-sizing: border-box;">How to use arguments passed to your program</li>
        <li style="box-sizing: border-box;">What are two prototypes of <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>main</code> that you know of, and in which case do you use one or the other</li>
        <li style="box-sizing: border-box;">How to use <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>__attribute__((unused))</code> or <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>(void)</code> to compile functions with unused variables or parameters</li>
    </ul>
</div>
<h2 class="gap" style="box-sizing: border-box; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 50px !important; margin-bottom: 10px; font-size: 30px; font-style: normal; font-variant-ligatures: normal;font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">Tasks</h2>
<div data-position="1" data-role="task926" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">0. It ain&apos;t what they call you, it&apos;s what you answer to</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a program that prints its name, followed by a new line.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">If you rename the program, it will print the new name, without having to compile it again</li>
                <li style="box-sizing: border-box;">You should not remove the path before the name of the program</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x0A-argc_argv</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0-whatsmyname.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="2" data-role="task927" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">1. Silence is argument carried out by other means</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a program that prints the number of arguments passed into it.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Your program should print a number, followed by a new line</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x0A-argc_argv</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1-args.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="3" data-role="task928" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">2. The best argument against democracy is a five-minute conversation with the average voter</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a program that prints all arguments it receives.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">All arguments should be printed, including the first one</li>
                <li style="box-sizing: border-box;">Only print one argument per line, ending with a new line</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x0A-argc_argv</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>2-args.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="4" data-role="task929" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">3. Neither irony nor sarcasm is argument</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a program that multiplies two numbers.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Your program should print the result of the multiplication, followed by a new line</li>
                <li style="box-sizing: border-box;">You can assume that the two numbers and result of the multiplication can be stored in an integer</li>
                <li style="box-sizing: border-box;">If the program does not receive two arguments, your program should print <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>Error</code>, followed by a new line, and return <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1</code></li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x0A-argc_argv</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>3-mul.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="5" data-role="task930" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">4. To infinity and beyond</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a program that adds positive numbers.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Print the result, followed by a new line</li>
                <li style="box-sizing: border-box;">If no number is passed to the program, print <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0</code>, followed by a new line</li>
                <li style="box-sizing: border-box;">If one of the number contains symbols that are not digits, print <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>Error</code>, followed by a new line, and return <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1</code></li>
                <li style="box-sizing: border-box;">You can assume that numbers and the addition of all the numbers can be stored in an <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>int</code></li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x0A-argc_argv</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>4-add.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="100" data-role="task931" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">5. Minimal Number of Coins for Change</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">#advanced</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a program that prints the minimum number of coins to make change for an amount of money.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Usage: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>./change cents</code></li>
                <li style="box-sizing: border-box;">where <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>cents</code> is the amount of cents you need to give back</li>
                <li style="box-sizing: border-box;">if the number of arguments passed to your program is not exactly <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1</code>, print <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>Error</code>, followed by a new line, and return <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1</code></li>
                <li style="box-sizing: border-box;">you should use <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>atoi</code> to parse the parameter passed to your program</li>
                <li style="box-sizing: border-box;">If the number passed as the argument is negative, print <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0</code>, followed by a new line</li>
                <li style="box-sizing: border-box;">You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent</li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x0A-argc_argv</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>100-change.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div> 