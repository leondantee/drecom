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

// Function: entry_0016557c
// Address: 0x16557c - 0x1655a8
void entry_0016557c_0x16557c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016557c_0x16557c");
#endif

    ctx->pc = 0x16557cu;

    // 0x16557c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16557cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165580: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x165580u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x165584: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x165584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x165588: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x165588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16558c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x16558Cu;
    {
        const bool branch_taken_0x16558c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16558c) {
            ctx->pc = 0x1655C8u;
            return;
        }
    }
    ctx->pc = 0x165594u;
    // 0x165594: 0x8e03024c  lw          $v1, 0x24C($s0)
    ctx->pc = 0x165594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x165598: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16559c: 0xae03024c  sw          $v1, 0x24C($s0)
    ctx->pc = 0x16559cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 3));
    // 0x1655a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1655A0u;
    {
        const bool branch_taken_0x1655a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655a0) {
            ctx->pc = 0x1655C8u;
            return;
        }
    }
    ctx->pc = 0x1655A8u;
}
