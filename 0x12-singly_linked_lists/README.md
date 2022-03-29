<h1 class="gap" style="box-sizing: border-box; font-size: 36px; margin-top: 50px !important; margin-right: 0px; margin-bottom: 10px; margin-left: 0px; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">0x12. C - Singly linked lists</h1>
<div class="well clean" style="box-sizing: border-box; min-height: 20px; padding: 19px; margin-bottom: 20px; background: white; border: 1px solid rgb(238, 238, 238); border-radius: 4px; box-shadow: none; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <p style="box-sizing: border-box; margin: 0px 0px 10px;">Please use this data structure for this project:</p>
    <pre style='box-sizing: border-box; overflow: auto; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 13px; display: block; padding: 9.5px; margin: 0px 0px 10px; line-height: 1.42857; color: rgb(51, 51, 51); word-break: break-all; overflow-wrap: break-word; background-color: rgb(245, 245, 245); border: 1px solid rgb(204, 204, 204); border-radius: 4px;'><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: inherit; padding: 0px; color: inherit; background-color: transparent; border-radius: 0px; white-space: pre-wrap;'>/**
 * struct list_s - singly linked list
 * @str: string - (malloc&apos;ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
</code></pre>
</div>
<h2 class="gap" style="box-sizing: border-box; font-family: aktiv-grotesk, sans-serif; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 50px !important; margin-bottom: 10px; font-size: 30px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">Tasks</h2>
<div data-position="1" data-role="task985" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); backgroundcolor: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">0. Print list</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that prints all the elements of a <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>list_t</code> list.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>size_t print_list(const list_t *h);</code></li>
                <li style="box-sizing: border-box;">Return: the number of nodes</li>
                <li style="box-sizing: border-box;">Format: see example</li>
                <li style="box-sizing: border-box;">If <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>str</code> is <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>NULL</code>, print <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>[0] (nil)</code></li>
                <li style="box-sizing: border-box;">You are allowed to use <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>printf</code></li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x12-singly_linked_lists</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0-print_list.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="2" data-role="task986" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">1. List length</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that returns the number of elements in a linked <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>list_t</code> list.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>size_t list_len(const list_t *h);</code></li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x12-singly_linked_lists</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>1-list_len.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="3" data-role="task987" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">2. Add node</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that adds a new node at the beginning of a <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>list_t</code> list.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>list_t *add_node(list_t **head, const char *str);</code></li>
                <li style="box-sizing: border-box;">Return: the address of the new element, or <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>NULL</code> if it failed</li>
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>str</code> needs to be duplicated</li>
                <li style="box-sizing: border-box;">You are allowed to use <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>strdup</code></li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x12-singly_linked_lists</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>2-add_node.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="4" data-role="task988" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">3. Add node at the end</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that adds a new node at the end of a <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>list_t</code> list.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>list_t *add_node_end(list_t **head, const char *str);</code></li>
                <li style="box-sizing: border-box;">Return: the address of the new element, or <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>NULL</code> if it failed</li>
                <li style="box-sizing: border-box;"><code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>str</code> needs to be duplicated</li>
                <li style="box-sizing: border-box;">You are allowed to use <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>strdup</code></li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x12-singly_linked_lists</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>3-add_node_end.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div data-position="5" data-role="task989" style="box-sizing: border-box; color: rgb(51, 51, 51); font-family: aktiv-grotesk, sans-serif; font-size: 14px; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(255, 255, 255); text-decoration-thickness: initial; text-decoration-style: initial; text-decoration-color: initial;">
    <div class="panel panel-default task-card " style="box-sizing: border-box; margin-bottom: 50px; background-color: rgb(255, 255, 255); border: 1px solid rgb(221, 221, 221); border-radius: 4px; box-shadow: rgba(0, 0, 0, 0.05) 0px 1px 1px; overflow: hidden;">
        <div class="panel-heading panel-heading-actions" style="box-sizing: border-box; padding: 10px 15px; border-bottom: 1px solid rgb(221, 221, 221); border-top-left-radius: 3px; border-top-right-radius: 3px; color: rgb(51, 51, 51); background-color: rgb(245, 245, 245); border-top-color: rgb(221, 221, 221); border-right-color: rgb(221, 221, 221); border-left-color: rgb(221, 221, 221); align-items: center; display: flex; justify-content: space-between;">
            <h3 class="panel-title" style="box-sizing: border-box; font-family: inherit; font-weight: 500; line-height: 1.1; color: rgb(51, 51, 51); margin-top: 0px; margin-bottom: 0px; font-size: 16px;">4. Free list</h3>
            <div style="box-sizing: border-box; display: flex;"><span class="label label-info" style="box-sizing: border-box; display: inline; padding: 0.2em 0.6em 0.3em; font-size: 10.5px; font-weight: 700; line-height: 1; color: rgb(255, 255, 255); text-align: center; white-space: nowrap; vertical-align: baseline; border-radius: 0.25em; background-color: rgb(152, 163, 174);">mandatory</span></div>
        </div>
        <div class="panel-body" style="box-sizing: border-box; padding: 15px;">
            <p style="box-sizing: border-box; margin: 0px 0px 10px;">Write a function that frees a <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>list_t</code> list.</p>
            <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                <li style="box-sizing: border-box;">Prototype: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>void free_list(list_t *head);</code></li>
            </ul>
        </div>
        <div class="list-group" style="box-sizing: border-box; padding-left: 0px; margin-bottom: 0px;">
            <div class="list-group-item" style="box-sizing: border-box; position: relative; display: block; padding: 10px 15px; margin-bottom: 0px; background-color: rgb(255, 255, 255); border-width: 1px 0px; border-style: solid; border-color: rgb(221, 221, 221); border-image: initial; border-radius: 0px;">
                <p style="box-sizing: border-box; margin: 0px;"><strong style="box-sizing: border-box; font-weight: bold;">Repo:</strong></p>
                <ul style="box-sizing: border-box; margin-top: 0px; margin-bottom: 10px;">
                    <li style="box-sizing: border-box;">GitHub repository: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>holbertonschool-low_level_programming</code></li>
                    <li style="box-sizing: border-box;">Directory: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>0x12-singly_linked_lists</code></li>
                    <li style="box-sizing: border-box;">File: <code style='box-sizing: border-box; font-family: Menlo, Monaco, Consolas, "Courier New", monospace; font-size: 12.6px; padding: 2px 4px; color: rgb(199, 37, 78); background-color: rgb(249, 242, 244); border-radius: 4px;'>4-free_list.c</code></li>
                </ul>
            </div>
        </div>
    </div>
</div>-
