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

// Function: entry_001ffaa0
// Address: 0x1ffaa0 - 0x1ffab8
void entry_001ffaa0_0x1ffaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffaa0_0x1ffaa0");
#endif

    ctx->pc = 0x1ffaa0u;

    // 0x1ffaa0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffaa4: 0x8ca40364  lw          $a0, 0x364($a1)
    ctx->pc = 0x1ffaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 868)));
    // 0x1ffaa8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1ffaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ffaac: 0xaca30364  sw          $v1, 0x364($a1)
    ctx->pc = 0x1ffaacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 868), GPR_U32(ctx, 3));
    // 0x1ffab0: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x1FFAB0u;
    {
        const bool branch_taken_0x1ffab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffab0) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFAB8u;
}
