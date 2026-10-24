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

// Function: entry_0033fbbc
// Address: 0x33fbbc - 0x33fbcc
void entry_0033fbbc_0x33fbbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fbbc_0x33fbbc");
#endif

    ctx->pc = 0x33fbbcu;

    // 0x33fbbc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x33fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x33fbc0: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x33fbc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x33fbc4: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x33fbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fbc8: 0x0  nop
    ctx->pc = 0x33fbc8u;
    // NOP
    ctx->pc = 0x33fbccu;
}
