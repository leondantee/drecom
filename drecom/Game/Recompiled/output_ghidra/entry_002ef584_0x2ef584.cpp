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

// Function: entry_002ef584
// Address: 0x2ef584 - 0x2ef594
void entry_002ef584_0x2ef584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef584_0x2ef584");
#endif

    ctx->pc = 0x2ef584u;

    // 0x2ef584: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ef584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ef588: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x2ef588u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ef58c: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2ef58cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef590: 0x0  nop
    ctx->pc = 0x2ef590u;
    // NOP
    ctx->pc = 0x2ef594u;
}
