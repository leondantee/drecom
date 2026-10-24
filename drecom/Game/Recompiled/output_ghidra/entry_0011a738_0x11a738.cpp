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

// Function: entry_0011a738
// Address: 0x11a738 - 0x11a748
void entry_0011a738_0x11a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a738_0x11a738");
#endif

    ctx->pc = 0x11a738u;

    // 0x11a738: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x11a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11a73c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a740: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11a744: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11a744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11a748u;
}
