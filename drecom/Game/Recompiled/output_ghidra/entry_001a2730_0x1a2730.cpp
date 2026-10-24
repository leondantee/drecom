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

// Function: entry_001a2730
// Address: 0x1a2730 - 0x1a2758
void entry_001a2730_0x1a2730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2730_0x1a2730");
#endif

    ctx->pc = 0x1a2730u;

    // 0x1a2730: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2734: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x1a2738: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1a2738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1a273c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a273cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a2740: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2740u;
    {
        const bool branch_taken_0x1a2740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2740) {
            ctx->pc = 0x1A2758u;
            return;
        }
    }
    ctx->pc = 0x1A2748u;
    // 0x1a2748: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a2748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a274c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1a274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a2750: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2754: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1a2754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x1a2758u;
}
