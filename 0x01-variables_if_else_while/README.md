<h1 class="gap" style="box-sizing: border-box; font-size: 36px; margin-top: 50px !important; margin-right: 0px; margin-bottom: 10px; margin-left: 0px; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">0x01. C - Variables, if, else, while</h1>
<div data-react-cache-id="tags/Tags-0" data-react-class="tags/Tags" data-react-props='{"tags":[]}' style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;"><br></div>
<ul class="list-group metadata" style="box-sizing: border-box; margin-top: 0px; margin-bottom: 20px; padding-left: 0px; font-size: 11px; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <li class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: -1px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-top-left-radius: 4px; border-top-right-radius: 4px;"><i aria-hidden="true" class="fa fa-user  fa-fw" style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; width: 1.28571em; text-align: center;"></i> By Julien Barbier</li>
    <li class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: -1px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221);"><i aria-hidden="true" class="fa fa-cogs  fa-fw" style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; width: 1.28571em; text-align: center;"></i> Weight: 1</li>
    <li class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: -1px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221);"><i aria-hidden="true" class="fa fa-calendar  fa-fw" style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; width: 1.28571em; text-align: center;"></i> Ongoing project - started 02-11-2022, must end by 02-12-2022 (in about 14 hours) - you&apos;re done with&nbsp;<span style="box-sizing: border-box;">0</span>% of tasks.</li>
    <li class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: -1px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221);"><i aria-hidden="true" class="fa fa-check  fa-fw" style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; width: 1.28571em; text-align: center;"></i> Checker will be released at 02-11-2022 12:00 PM</li>
    <li class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-bottom-right-radius: 4px; border-bottom-left-radius: 4px;"><i aria-hidden="true" class="fa fa-check-square  fa-fw" style="box-sizing: border-box; display: inline-block; font-style: normal; font-variant: normal; font-weight: normal; font-stretch: normal; line-height: 1; font-family: FontAwesome; font-size: inherit; text-rendering: auto; -webkit-font-smoothing: antialiased; width: 1.28571em; text-align: center;"></i> An auto review will be launched at the deadline</li>
</ul>
<div class="well clean" style="box-sizing: border-box; min-height: 20px; padding: 19px; margin-bottom: 20px; background: white; border: 1px solid rgb(238, 238, 238); border-radius: 4px; box-shadow: none; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <h2 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 30px;">Resources</h2>
    <p style="box-sizing: border-box; margin: 0px 0px 10px;"><strong style="box-sizing: border-box; font-weight: bold;">Read or watch</strong>:</p>
    <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/GB1UNodFfec0AXUfmSxsLA" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="Everything you need to know to start with C.pdf">Everything you need to know to start with C.pdf</a> (<em style="box-sizing: border-box;">You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: &ldquo;comments&rdquo;, &ldquo;Data types | Integer types&rdquo;, &ldquo;Declaration&rdquo;, &ldquo;Characters&rdquo;, &ldquo;Arithmetic operators&rdquo;, &ldquo;Variables assignments&rdquo;, &ldquo;Comparisons&rdquo;, &ldquo;Logical operators&rdquo;, &ldquo;if, if&hellip;else&rdquo;, &ldquo;while loops&rdquo;.</em>)</li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/ckqC9BrBcMmv-DLmBauaWQ" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="Keywords and identifiers">Keywords and identifiers</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/Oau_6LT7-3IIt5ew_3Ac6g" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="integers">integers</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/r4hrHzg2X9JjnKj8sP_SAw" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="Arithmetic Operators in C">Arithmetic Operators in C</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/W93uajwXtW3WOxOaeBtF-A" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="If statements in C">If statements in C</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/PMD6eKdkj2RmIpagtABihw" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="if...else statement">if&hellip;else statement</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/dCy4644-X_WJMYxRZwCfFQ" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="Relational operators">Relational operators</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/gJzJXQoEdEN1Oxcutp_76Q" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="Logical operators">Logical operators</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/Qhq1p5UcR72-VXFJ_iAqWQ" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="while loop in C">while loop in C</a></li>
        <li style="box-sizing: border-box;"><a href="https://intranet.hbtn.io/rltoken/RY9a1EDxRKNNHhxbJ6Pn_g" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="While loop">While loop</a></li>
    </ul>
    <p style="box-sizing: border-box; margin: 0px 0px 10px;"><strong style="box-sizing: border-box; font-weight: bold;">man or help</strong>:</p>
    <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
        <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>ascii</code> (<em style="box-sizing: border-box;">You do not need to learn about&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>scanf</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>getc</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>getchar</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>EOF</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>EXIT_SUCCESS</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>time</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>rand</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>srand</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>RAND_MAX</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>for</code> loops,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>do...while</code> loops, functions.</em>)</li>
    </ul>
    <h2 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 30px;">Learning Objectives</h2>
    <p style="box-sizing: border-box; margin: 0px 0px 10px;">At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/Wt5UkBEU7LpZ8tzq9jvpJg" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong style="box-sizing: border-box; font-weight: bold;">without the help of Google</strong>:</p>
    <h3 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 24px;">General</h3>
    <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
        <li style="box-sizing: border-box;">What are the arithmetic operators and how to use them</li>
        <li style="box-sizing: border-box;">What are the logical operators (sometimes called boolean operators) and how to use them</li>
        <li style="box-sizing: border-box;">What the the relational operators and how to use them</li>
        <li style="box-sizing: border-box;">What values are considered TRUE and FALSE in C</li>
        <li style="box-sizing: border-box;">What are the boolean operators and how to use them</li>
        <li style="box-sizing: border-box;">How to use the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>if</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>if ... else</code> statements</li>
        <li style="box-sizing: border-box;">How to use comments</li>
        <li style="box-sizing: border-box;">How to declare variables of types&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>char</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>int</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>unsigned int</code></li>
        <li style="box-sizing: border-box;">How to assign values to variables</li>
        <li style="box-sizing: border-box;">How to print the values of variables of type&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>char</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>int</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>unsigned int</code> with&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
        <li style="box-sizing: border-box;">How to use the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>while</code> loop</li>
        <li style="box-sizing: border-box;">How to use variables with the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>while</code> loop</li>
        <li style="box-sizing: border-box;">How to print variables using&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
        <li style="box-sizing: border-box;">What is the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>ASCII</code> character set</li>
        <li style="box-sizing: border-box;">What are the purpose of the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>gcc</code> flags&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>-m32</code> and&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>-m64</code></li>
    </ul>
    <h2 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 30px;">Requirements</h2>
    <h3 style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: inherit; margin-top: 20px; margin-bottom: 10px; font-size: 24px;">General</h3>
    <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
        <li style="box-sizing: border-box;">Allowed editors:&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>vi</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>vim</code>,&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>emacs</code></li>
        <li style="box-sizing: border-box;">All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>gcc</code>, using the options&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
        <li style="box-sizing: border-box;">All your files should end with a new line</li>
        <li style="box-sizing: border-box;">A&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>README.md</code> file, at the root of the folder of the project</li>
        <li style="box-sizing: border-box;">There should be no errors and no warnings during compilation</li>
        <li style="box-sizing: border-box;">You are not allowed to use&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>system</code></li>
        <li style="box-sizing: border-box;">Your code should use the&nbsp;<code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" style="box-sizing: border-box; background-color: transparent; color: rgb(224, 0, 60); text-decoration: none;" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
    </ul>
</div>