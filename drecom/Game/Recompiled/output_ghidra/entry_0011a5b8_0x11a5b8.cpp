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

// Function: entry_0011a5b8
// Address: 0x11a5b8 - 0x11a5c8
void entry_0011a5b8_0x11a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5b8_0x11a5b8");
#endif

    ctx->pc = 0x11a5b8u;

    // 0x11a5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5bc: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x11a5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x11a5c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11a5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5c4: 0x0  nop
    ctx->pc = 0x11a5c4u;
    // NOP
    ctx->pc = 0x11a5c8u;
}
