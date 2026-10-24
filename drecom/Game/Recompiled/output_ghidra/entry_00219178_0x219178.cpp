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

// Function: entry_00219178
// Address: 0x219178 - 0x219188
void entry_00219178_0x219178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219178_0x219178");
#endif

    ctx->pc = 0x219178u;

    // 0x219178: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x219178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21917c: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x21917cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x219180: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x219180u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x219184: 0x0  nop
    ctx->pc = 0x219184u;
    // NOP
    ctx->pc = 0x219188u;
}
