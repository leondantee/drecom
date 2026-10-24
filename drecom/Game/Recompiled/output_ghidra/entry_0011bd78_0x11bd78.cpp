#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0011bd78
// Address: 0x11bd78 - 0x11bd80
void entry_0011bd78_0x11bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd78_0x11bd78");
#endif

    ctx->pc = 0x11bd78u;

    // 0x11bd78: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x11bd78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x11bd7c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bd7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x11bd80u;
}
