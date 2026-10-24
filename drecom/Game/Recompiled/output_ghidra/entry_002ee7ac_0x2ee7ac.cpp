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

// Function: entry_002ee7ac
// Address: 0x2ee7ac - 0x2ee7bc
void entry_002ee7ac_0x2ee7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee7ac_0x2ee7ac");
#endif

    ctx->pc = 0x2ee7acu;

    // 0x2ee7ac: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2ee7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2ee7b0: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x2ee7b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x2ee7b4: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2ee7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee7b8: 0x0  nop
    ctx->pc = 0x2ee7b8u;
    // NOP
    ctx->pc = 0x2ee7bcu;
}
