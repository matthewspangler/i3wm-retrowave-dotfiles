const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1019", /* black   */
  [1] = "#953360", /* red     */
  [2] = "#6B658D", /* green   */
  [3] = "#E4B328", /* yellow  */
  [4] = "#A0526E", /* blue    */
  [5] = "#63526A", /* magenta */
  [6] = "#CB5C52", /* cyan    */
  [7] = "#c9a9bf", /* white   */

  /* 8 bright colors */
  [8]  = "#392237",  /* black   */
  [9]  = "#ce357b",  /* red     */
  [10] = "#8073c6", /* green   */
  [11] = "#fff122", /* yellow  */
  [12] = "#df5a8a", /* blue    */
  [13] = "#855e95", /* magenta */
  [14] = "#ff6858", /* cyan    */
  [15] = "#ffdffc", /* white   */

  /* special colors */
  [256] = "#1a1019", /* background */
  [257] = "#ffdffc", /* foreground */
  [258] = "#ffdffc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
