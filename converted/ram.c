// Generated C code from Game Boy Assembly
// WARNING: This is a best-effort conversion and may need manual adjustment

#include <stdint.h>
#include <stdbool.h>

// Macro definitions
#define bccoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))
#define callfar(func) func() /* TODO: handle banking */
#define db(...) /* Define byte(s) */
#define decoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))
#define ds(size) /* Define space */
#define dw(...) /* Define word(s) */
#define dwcoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))
#define farcall(func) func() /* TODO: handle banking */
#define hlcoord(x, y) ((void*)(0x9800 + (y) * 32 + (x)))
#define homecall(func) func() /* HOME bank call */
#define jpfar(label) goto label /* TODO: handle banking */
#define lb(reg16, high, low) ((reg16) = (((high) << 8) | (low)))
#define predef(id) predef_##id() /* Predefined function */
#define text_end() /* End of text */
#define text_far(text) /* Text data: text */
#define text_start() /* Start of text */

