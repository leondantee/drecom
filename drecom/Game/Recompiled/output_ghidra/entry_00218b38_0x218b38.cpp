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

// Function: entry_00218b38
// Address: 0x218b38 - 0x218b48
void entry_00218b38_0x218b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218b38_0x218b38");
#endif

    ctx->pc = 0x218b38u;

    // 0x218b38: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x218b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x218b3c: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x218b3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x218b40: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x218b40u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x218b44: 0x0  nop
    ctx->pc = 0x218b44u;
    // NOP
    ctx->pc = 0x218b48u;
}
