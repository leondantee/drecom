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

// Function: entry_002f5178
// Address: 0x2f5178 - 0x2f5188
void entry_002f5178_0x2f5178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5178_0x2f5178");
#endif

    ctx->pc = 0x2f5178u;

    // 0x2f5178: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f5178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f517c: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x2f517cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f5180: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2f5180u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f5184: 0x0  nop
    ctx->pc = 0x2f5184u;
    // NOP
    ctx->pc = 0x2f5188u;
}
